#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"
#include "qcustomplot.h"

class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	void timerEvent(QTimerEvent* event);

	void onPushButton();

private:
	Ui::MainWindowClass ui;
	QVector<qreal> m_vectorX;
	QVector<qreal> m_vectorY;
	QVector<qreal> m_vectorY_edge_up;
	QVector<qreal> m_vectorY_edge_down;
	int m_nTimerID;
	bool m_bPlot;
public:
	void PlotSin();
	int m_nRangeLeft;
	int m_nRangeRight;
	double m_dLastKey;
};

#endif // MAINWINDOW_H
