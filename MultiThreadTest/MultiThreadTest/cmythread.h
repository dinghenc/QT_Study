#ifndef CMYTHREAD_H
#define CMYTHREAD_H

#include <QObject>
#include <QThread> 

class CMyThread : public QObject
{
	Q_OBJECT

public:
	CMyThread();
	~CMyThread();

private:
	
public:
	void test1();
	void test2();
	void test3();
	//void test3(int a);
};

#endif // CMYTHREAD_H
