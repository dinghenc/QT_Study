#ifndef THREADDEMO_H
#define THREADDEMO_H

#include <QtWidgets/QWidget>
#include "ui_threaddemo.h"
#include "mythread.h"
#include <QThread>
#include "testthread.h"
#include <QTimer>

class ThreadDemo : public QWidget
{
	Q_OBJECT

public:
	ThreadDemo(QWidget *parent = 0);
	~ThreadDemo();

private:
	Ui::ThreadDemoClass ui;

private:
	bool m_bThread;
	MyThread m_myThread;
	QThread m_thread;
	TestThread m_testThread;
	QTimer m_timer;

signals:
	void StartThread();

public:
	void onButtonAppendClicked();
};

#endif // THREADDEMO_H
