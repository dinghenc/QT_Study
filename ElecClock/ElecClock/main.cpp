#include "elecclock.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ElecClock w;
	w.show();
	return a.exec();
}
