#include "mainwindow.h"
#include <qmessagebox.h>

#define SIN_STEP		0.01

MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_bPlot = false;

	m_nRangeLeft = 0;
	m_nRangeRight = 2 * 3.14159;
	m_dLastKey = 0;

	ui.m_customPlot->xAxis->setRange(m_nRangeLeft, m_nRangeRight);
	ui.m_customPlot->yAxis->setRange(-2, 2);
	ui.m_customPlot->xAxis->setLabel(QStringLiteral("x"));
	ui.m_customPlot->yAxis->setLabel(QStringLiteral("y"));

	ui.m_customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

	// 启动定时器
	m_nTimerID = startTimer(50);

	//PlotSin();
	connect(ui.m_pushButton, &QPushButton::clicked, this, &MainWindow::onPushButton);
}

MainWindow::~MainWindow()
{

}

void MainWindow::timerEvent(QTimerEvent* event)
{
	if (m_nTimerID == event->timerId())
	{
		double x, y;
		x = m_dLastKey;

		// 清空上次的值
		m_vectorX.clear();
		m_vectorY.clear();
		m_vectorY_edge_up.clear();
		m_vectorY_edge_down.clear();

		for (int i = 0; i < 10; i++, x+=SIN_STEP)
		{
			// 计算新值
			//y = 0.5*sin(512*x);
			y = 0.8*(1 + 0.5*cos(2*x))*cos(64 * x);
			m_vectorX.push_back(x);
			m_vectorY.push_back(y);

			y = 0.8*(1 + 0.5*cos(2 * x));
			m_vectorY_edge_up.push_back(y);

			m_vectorY_edge_down.push_back(-y);
		}

		// 记录最后一个值
		m_dLastKey = x;

		PlotSin();
	}
}


void MainWindow::PlotSin()
{
	ui.m_customPlot->addGraph();
	ui.m_customPlot->addGraph();
	ui.m_customPlot->addGraph();

	QPen pen(QColor(255, 0, 0, 128));
	pen.setStyle(Qt::DashLine);

	// 设置画笔
	ui.m_customPlot->graph(1)->setPen(pen);
	ui.m_customPlot->graph(2)->setPen(pen);

	double x, y;
	QCPGraphData newPoint;
	QVector<QCPGraphData> *mData;
	mData = ui.m_customPlot->graph(0)->data()->coreData();

	QVector<QCPGraphData> *mData_edge_up;
	mData_edge_up = ui.m_customPlot->graph(1)->data()->coreData();

	QVector<QCPGraphData> *mData_edge_down;
	mData_edge_down = ui.m_customPlot->graph(2)->data()->coreData();

	// 调整坐标范围
	if (m_dLastKey > m_nRangeRight)
	{
		m_nRangeLeft++;
		m_nRangeRight++;
		ui.m_customPlot->xAxis->setRange(m_nRangeLeft, m_nRangeRight);
	}

	// 添加数据
	int len = m_vectorX.length();
	for (int i = 0; i < len; i++)
	{
		newPoint.key = m_vectorX[i];
		newPoint.value = m_vectorY[i];
		mData->append(newPoint);

		newPoint.value = m_vectorY_edge_up[i];
		mData_edge_up->append(newPoint);

		newPoint.value = m_vectorY_edge_down[i];
		mData_edge_down->append(newPoint);

		ui.m_customPlot->replot();
	}


	/*for (int i = 0; i < 628; i++)
	{
		x = (i + 0.0) / 100;
		y = sin(x);
		m_vectorX.push_back(x);
		m_vectorY.push_back(y);

		newPoint.key = (i + 0.0) / 100;
		newPoint.value = sin(newPoint.key);
		mData->append(newPoint);

		ui.m_customPlot->replot();

		//Sleep(50);
	}*/


	//ui.m_customPlot->graph(0)->setData(m_vectorX, m_vectorY);

}

void MainWindow::onPushButton()
{
	//PlotSin();
	QMessageBox::information(this, QString("Hello"), QString("AM"));
}
