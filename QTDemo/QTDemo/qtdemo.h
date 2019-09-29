#ifndef QTDEMO_H
#define QTDEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_qtdemo.h"
#include <QTimer>

class QTDemo : public QMainWindow
{
	Q_OBJECT

public:
	QTDemo(QWidget *parent = 0);
	~QTDemo();

private:
	Ui::QTDemoClass ui;
	QTimer m_timer;
public:
	void HelloWorld();
	void TimerOut();
};

#endif // QTDEMO_H
