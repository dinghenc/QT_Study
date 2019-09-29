#include "testthread.h"
#include <qdebug.h>

TestThread::TestThread(QObject *parent)
	: QThread(parent)
{

}

TestThread::~TestThread()
{

}


void TestThread::run()
{
	qDebug() << "test thread : " << QThread::currentThreadId();
}
