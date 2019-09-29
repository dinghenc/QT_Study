#include "threaddemo.h"
#include <qdebug.h>
#include <QDateTime>

#define cout qDebug() << "[" << __FILE__ << ":" << __LINE__ << "]"

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

ThreadDemo::ThreadDemo(QWidget *parent)
	: QWidget(parent),
	m_myThread(NULL)	,	// 不能指定父对象
	m_testThread(NULL)
{
	ui.setupUi(this);

	m_bThread = true;

	// 移到线程内
	m_myThread.moveToThread(&m_thread);

	m_thread.start();

	m_timer.start(1000);

	connect(ui.buttonAppend, &QPushButton::clicked, this, &ThreadDemo::onButtonAppendClicked);

	connect(this, &ThreadDemo::StartThread, &m_myThread, &MyThread::ThreadRun);
	//connect(&m_thread, &QThread::start, &m_myThread, &MyThread::ThreadRun);

	connect(&m_timer, &QTimer::timeout, this, &ThreadDemo::onButtonAppendClicked);
}

ThreadDemo::~ThreadDemo()
{
	m_thread.quit();
	m_thread.wait();

	m_testThread.quit();
	m_testThread.wait();
}


void ThreadDemo::onButtonAppendClicked()
{
	if (m_bThread)
	{
		emit StartThread();
		m_testThread.start();
		m_bThread = false;
	}
	else
	{
		m_myThread.ThreadRun();
		m_bThread = true;
	}

	//qDebug() << "main thread: " << QThread::currentThreadId();
	cout << "main thread: " << QThread::currentThreadId();

	QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss:zzz");

	ui.textInfo->append(str);
}

