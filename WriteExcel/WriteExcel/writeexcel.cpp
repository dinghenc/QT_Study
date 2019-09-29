#include "writeexcel.h"
#include <QFileDialog>
#include <QAxObject>
#include <QtMath>

WriteExcel::WriteExcel(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//exportToExcel();
	testExcel();
}

WriteExcel::~WriteExcel()
{

}


void WriteExcel::testExcel()
{
	// 新建数据
	QVector<int> vx;
	QVector<double> vy;

	// 计算sin值
	for (int i = 0; i < 128; i++)
	{
		double x = 2 * M_PI * i / 128.0;
		double y = qSin(x);

		vx.push_back(i);
		vy.push_back(y);
	}

	exportCoordinateData(QString::fromLocal8Bit("无敌.xlsx"), vx, vy);

}


template <typename T1, typename T2>
void WriteExcel::exportCoordinateData(QString path, QVector<T1> &x, QVector<T2> &y)
{
	// 路径非空
	if (path.isEmpty() && !path.contains(".xlsx", Qt::CaseSensitive))
		return;

	QAxObject *excel = new QAxObject(this);
	if (excel == NULL)
		return;
	nullptr;

	// 连接excel控件
	excel->setControl("Excel.Application");
	excel->dynamicCall("SetVisible (bool Visible)", "false");
	excel->setProperty("DisplayAlerts", false);

	// 获取工作簿
	QAxObject *workbooks = excel->querySubObject("WorkBooks");
	workbooks->dynamicCall("Add");

	// 获取当前工作簿
	QAxObject *workbook = excel->querySubObject("ActiveWorkBook");
	QAxObject *worksheets = workbook->querySubObject("Sheets");
	// sheet1
	QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);

	// 单元格
	QAxObject *cellA, *cellB;

	// 设置标题
	int cellrow = 1;
	QString A = "A" + QString::number(cellrow);
	QString B = "B" + QString::number(cellrow);
	cellA = worksheet->querySubObject("Range(QVariant, QVariant)", A);
	cellB = worksheet->querySubObject("Range(QVariant, QVariant)", B);
	cellA->dynamicCall("SetValue(const QVariant&)", QVariant("x"));
	cellB->dynamicCall("SetValue(const QVariant&)", QVariant("y"));
	cellrow++;

	for (QVector<double>::size_type ix = 0; ix != x.size(); ix++)
	{
		A = "A" + QString::number(cellrow);
		B = "B" + QString::number(cellrow);

		// 获取单元格
		cellA = worksheet->querySubObject("Range(QVariant, QVariant)", A);
		cellB = worksheet->querySubObject("Range(QVariant, QVariant)", B);

		// 设置单元格的值
		cellA->dynamicCall("SetValue(const QVariant&)", QVariant(x[ix]));
		cellB->dynamicCall("SetValue(const QVariant&)", QVariant(y[ix]));
		cellrow++;
	}
	
	// 保存并关闭
	workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(path));
	workbook->dynamicCall("Close()");
	excel->dynamicCall("Quit()");

	delete excel;
}


bool WriteExcel::exportToExcel()
{
	QString filepath = QFileDialog::getSaveFileName(this, tr("Save orbit"), ".", tr("Microsoft Office 2007 (*.xlsx)"));//获取保存路径
	if (!filepath.isEmpty()){
		QAxObject *excel = new QAxObject(this);
		excel->setControl("Excel.Application");//连接Excel控件
		excel->dynamicCall("SetVisible (bool Visible)", "false");//不显示窗体
		excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示

		QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
		workbooks->dynamicCall("Add");//新建一个工作簿
		QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
		QAxObject *worksheets = workbook->querySubObject("Sheets");//获取工作表集合
		QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);//获取工作表集合的工作表1，即sheet1

		QAxObject *cellA, *cellB, *cellC, *cellD;

		//设置标题
		int cellrow = 1;
		QString A = "A" + QString::number(cellrow);//设置要操作的单元格，如A1
		QString B = "B" + QString::number(cellrow);
		QString C = "C" + QString::number(cellrow);
		QString D = "D" + QString::number(cellrow);
		cellA = worksheet->querySubObject("Range(QVariant, QVariant)", A);//获取单元格
		cellB = worksheet->querySubObject("Range(QVariant, QVariant)", B);
		cellC = worksheet->querySubObject("Range(QVariant, QVariant)", C);
		cellD = worksheet->querySubObject("Range(QVariant, QVariant)", D);
		cellA->dynamicCall("SetValue(const QVariant&)", QVariant(QString::fromLocal8Bit("流水号")));//设置单元格的值
		cellB->dynamicCall("SetValue(const QVariant&)", QVariant(QString::fromLocal8Bit("用户名")));
		cellC->dynamicCall("SetValue(const QVariant&)", QVariant(QString::fromLocal8Bit("金额")));
		cellD->dynamicCall("SetValue(const QVariant&)", QVariant(QString::fromLocal8Bit("日期")));
		cellrow++;

		int rows = 12;
		for (int i = 0; i < rows; i++){
			QString A = "A" + QString::number(cellrow);//设置要操作的单元格，如A1
			QString B = "B" + QString::number(cellrow);
			QString C = "C" + QString::number(cellrow);
			QString D = "D" + QString::number(cellrow);
			cellA = worksheet->querySubObject("Range(QVariant, QVariant)", A);//获取单元格
			cellB = worksheet->querySubObject("Range(QVariant, QVariant)", B);
			cellC = worksheet->querySubObject("Range(QVariant, QVariant)", C);
			cellD = worksheet->querySubObject("Range(QVariant, QVariant)", D);
			cellA->dynamicCall("SetValue(const QVariant&)", QVariant(1));//设置单元格的值
			cellB->dynamicCall("SetValue(const QVariant&)", QVariant(2));
			cellC->dynamicCall("SetValue(const QVariant&)", QVariant(3));
			cellD->dynamicCall("SetValue(const QVariant&)", QVariant(4));
			cellrow++;
		}

		workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(filepath));//保存至filepath，注意一定要用QDir::toNativeSeparators将路径中的"/"转换为"\"，不然一定保存不了。
		workbook->dynamicCall("Close()");//关闭工作簿
		excel->dynamicCall("Quit()");//关闭excel
		delete excel;
		excel = NULL;
	}
	return true;
}
