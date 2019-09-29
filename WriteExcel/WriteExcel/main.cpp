#include "writeexcel.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WriteExcel w;
	w.show();
	return a.exec();
}
