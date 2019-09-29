#ifndef WRITEEXCEL_H
#define WRITEEXCEL_H

#include <QtWidgets/QWidget>
#include "ui_writeexcel.h"

class WriteExcel : public QWidget
{
	Q_OBJECT

public:
	WriteExcel(QWidget *parent = 0);
	~WriteExcel();
	bool exportToExcel();
	template <typename T1, typename T2>
	void exportCoordinateData(QString path, QVector<T1> &x, QVector<T2> &y);
	void testExcel();

private:
	Ui::WriteExcelClass ui;
};

#endif // WRITEEXCEL_H
