/********************************************************************************
** Form generated from reading UI file 'analogclock.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGCLOCK_H
#define UI_ANALOGCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalogClockClass
{
public:

    void setupUi(QWidget *AnalogClockClass)
    {
        if (AnalogClockClass->objectName().isEmpty())
            AnalogClockClass->setObjectName(QStringLiteral("AnalogClockClass"));
        AnalogClockClass->resize(600, 400);

        retranslateUi(AnalogClockClass);

        QMetaObject::connectSlotsByName(AnalogClockClass);
    } // setupUi

    void retranslateUi(QWidget *AnalogClockClass)
    {
        AnalogClockClass->setWindowTitle(QApplication::translate("AnalogClockClass", "AnalogClock", 0));
    } // retranslateUi

};

namespace Ui {
    class AnalogClockClass: public Ui_AnalogClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGCLOCK_H
