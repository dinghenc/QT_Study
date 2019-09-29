#include "cmythread.h"
#include <qdebug.h>
#include <windows.h>

CMyThread::CMyThread()
{
	qDebug() << "CMyThrad construct...";
	qDebug() << "current thread ID : " << QThread::currentThreadId << endl;
	Sleep(3000);
}

CMyThread::~CMyThread()
{

}



void CMyThread::test1()
{
	qDebug() << "CMyThrad test1...";
	qDebug() << "current thread ID : " << QThread::currentThreadId << endl;
	Sleep(3000);
}

void CMyThread::test2()
{
	qDebug() << "CMyThrad test2...";
	qDebug() << "current thread ID : " << QThread::currentThreadId << endl;
	Sleep(3000);
}

void CMyThread::test3()
{
	qDebug() << "CMyThrad test3...";
	qDebug() << "current thread ID : " << QThread::currentThreadId << endl;
	Sleep(3000);
}

/*void CMyThread::test3(int a)
{
	qDebug() << "CMyThrad test3...\t" << a;
	qDebug() << "current thread ID : " << QThread::currentThreadId;
}*/
