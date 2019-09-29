#include "multithreadtest.h"

MultiThreadTest::MultiThreadTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// 应该是主线程
	m_myThread.test1();

	// 子线程
	m_myThread.moveToThread(&m_thread);

	m_myThread.test1();
	m_myThread.test2();

	connect(&m_thread, &QThread::started, &m_myThread, &CMyThread::test3);

	connect(ui.m_pushButton1, &QPushButton::clicked, this, &MultiThreadTest::BtnClicked1);
	connect(ui.m_pushButton2, &QPushButton::clicked, this, &MultiThreadTest::BtnClicked2);

	m_myThread.test1();
	m_myThread.test2();
	m_myThread.test3();
	
}

MultiThreadTest::~MultiThreadTest()
{
}


void MultiThreadTest::BtnClicked1()
{
	m_thread.start();
}

void MultiThreadTest::BtnClicked2()
{
	//m_myThread.test1();
	//m_myThread.test2();
	m_myThread.test3();
}
