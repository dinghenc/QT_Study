#include "elecclock.h"
#include <QDateTime>
#include <QDebug>

ElecClock::ElecClock(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_timerDate.start(1000);

	ui.lcdDate->setDigitCount(10);
	ui.lcdTime->setDigitCount(8);

	UpdateLCDTime();

	//connect(&m_timerDate, &QTimer::timeout, this, static_cast<void(ElecClock::*)(int)>(&ElecClock::UpdateLCDTime));
	connect(&m_timerDate, &QTimer::timeout, this, &ElecClock::UpdateLCDTime);

	connect(this, static_cast<void(ElecClock::*)(void)>(&ElecClock::signal1), 
		this, static_cast<void(ElecClock::*)(void)>(&ElecClock::slot1));

	connect(this, static_cast<void(ElecClock::*)(int)>(&ElecClock::signal1),
		this, static_cast<void(ElecClock::*)(int)>(&ElecClock::slot1));

}

ElecClock::~ElecClock()
{

}


void ElecClock::UpdateLCDTime()
{
	QDateTime localTime = QDateTime::currentDateTime();
	
	qint64 msec = localTime.toMSecsSinceEpoch();
	QString strDate = localTime.toString("yyyy-MM-dd");
	QString strTime = localTime.toString("hh:mm:ss");

	//qDebug() << "msec = " << msec;
	emit signal1();
	emit signal1(localTime.toString("ss").toInt());

	ui.lcdDate->display(strDate);
	ui.lcdTime->display(strTime);
}


void ElecClock::slot1()
{
	qDebug() << "void signal";
}


void ElecClock::slot1(int a)
{
	qDebug() << a << " signal";
}
