#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>

class MyThread : public QObject
{
	Q_OBJECT

public:
	MyThread(QObject *parent);
	~MyThread();

public:
	void ThreadRun();

private:
	
};

#endif // MYTHREAD_H
