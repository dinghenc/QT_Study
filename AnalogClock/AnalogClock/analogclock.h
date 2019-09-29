#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QtWidgets/QWidget>
#include "ui_analogclock.h"

class AnalogClock : public QWidget
{
	Q_OBJECT

public:
	AnalogClock(QWidget *parent = 0);
	~AnalogClock();

protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
	Ui::AnalogClockClass ui;
};

#endif // ANALOGCLOCK_H
