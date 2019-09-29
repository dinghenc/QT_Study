#ifndef MULTITHREADTEST_H
#define MULTITHREADTEST_H

#include <QtWidgets/QWidget>
#include "ui_multithreadtest.h"
#include "cmythread.h"
#include <QThread> 

class MultiThreadTest : public QWidget
{
	Q_OBJECT

public:
	MultiThreadTest(QWidget *parent = 0);
	~MultiThreadTest();

signals:
	void send();
	void send(int a);


private:
	Ui::MultiThreadTestClass ui;
public:
	void BtnClicked1();
	void BtnClicked2();
private:
	CMyThread m_myThread;
public:
	QThread m_thread;
};

#endif // MULTITHREADTEST_H
