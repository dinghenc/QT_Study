#include "mythread.h"
#include <QFile>
#include <QDebug>
#include <QThread>

MyThread::MyThread(QObject *parent)
	: QObject(parent)
{

}

MyThread::~MyThread()
{

}


void MyThread::ThreadRun()
{
	QFile file("demo.c");
	file.open(QIODevice::WriteOnly | QIODevice::Text);

	if (!file.isOpen())
	{
		qDebug() << "open file error...";
		return;
	}

	qDebug() << "my thread: " << QThread::currentThreadId();

	QString str;
	str = "#include <stdio.h>\n"
		"int main()\n"
		"{\n"
		"		printf(\"Hello World\");\n"
		"		return 0;\n"
		"}\n";
	file.write(str.toUtf8());

	file.close();

	// µÈ´ý5s
	//QThread::msleep(5000);

	qDebug() << "write file finished...";
}
