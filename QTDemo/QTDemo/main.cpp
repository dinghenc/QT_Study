#include "qtdemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTDemo w;
	w.show();
	return a.exec();
}
