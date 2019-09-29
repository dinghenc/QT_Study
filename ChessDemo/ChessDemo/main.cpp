#include "chessdemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ChessDemo w;
	w.show();
	return a.exec();
}
