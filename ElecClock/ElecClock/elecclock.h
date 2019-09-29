#ifndef ELECCLOCK_H
#define ELECCLOCK_H

#include <QtWidgets/QWidget>
#include "ui_elecclock.h"
#include <QTimer>

class ElecClock : public QWidget
{
	Q_OBJECT

public:
	ElecClock(QWidget *parent = 0);
	~ElecClock();

	QTimer m_timerDate;

signals:
	void signal1();
	void signal1(int a);

public:
	void slot1();
	void slot1(int a);

private:
	Ui::ElecClockClass ui;

public:
	void UpdateLCDTime();
};

#endif // ELECCLOCK_H
