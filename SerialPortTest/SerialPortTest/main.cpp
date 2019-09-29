
#include <QtCore/QCoreApplication>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QSerialPortInfo serialPortInfo;

	QSerialPort serialPort;

	bool isOpen = serialPort.isOpen();

	qDebug() << "isOpen =>" << isOpen;

	return a.exec();
}
