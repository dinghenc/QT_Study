#include "multithreadtest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MultiThreadTest w;
	w.show();
	return a.exec();
}
