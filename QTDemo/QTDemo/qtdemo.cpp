#include "qtdemo.h"
#include <QMessageBox>
#include <QDebug>
#include <QThread>

QTDemo::QTDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_timer.start(1000);

	qDebug() << "Main Thread: " << QThread::currentThreadId();

	// ÐÅºÅ²Û
	connect(ui.pushButton, &QPushButton::clicked, this, &QTDemo::HelloWorld);
	connect(&m_timer, &QTimer::timeout, this, &QTDemo::TimerOut);
}

QTDemo::~QTDemo()
{

}


void QTDemo::HelloWorld()
{
	//QMessageBox::information(this, QString("info"), QString("Hello World"));
	qDebug() << "Button Thread:" << QThread::currentThreadId();
}

void QTDemo::TimerOut()
{
	qDebug() << "Timer Thread:" << QThread::currentThreadId();
}
