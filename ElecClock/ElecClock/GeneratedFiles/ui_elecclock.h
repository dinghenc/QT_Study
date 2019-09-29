/********************************************************************************
** Form generated from reading UI file 'elecclock.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECCLOCK_H
#define UI_ELECCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElecClockClass
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdDate;
    QLCDNumber *lcdTime;

    void setupUi(QWidget *ElecClockClass)
    {
        if (ElecClockClass->objectName().isEmpty())
            ElecClockClass->setObjectName(QStringLiteral("ElecClockClass"));
        ElecClockClass->resize(420, 243);
        gridLayout = new QGridLayout(ElecClockClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lcdDate = new QLCDNumber(ElecClockClass);
        lcdDate->setObjectName(QStringLiteral("lcdDate"));
        lcdDate->setSmallDecimalPoint(false);
        lcdDate->setDigitCount(8);
        lcdDate->setMode(QLCDNumber::Dec);
        lcdDate->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdDate, 0, 0, 1, 1);

        lcdTime = new QLCDNumber(ElecClockClass);
        lcdTime->setObjectName(QStringLiteral("lcdTime"));
        lcdTime->setSmallDecimalPoint(false);
        lcdTime->setDigitCount(8);
        lcdTime->setMode(QLCDNumber::Dec);
        lcdTime->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdTime, 1, 0, 1, 1);


        retranslateUi(ElecClockClass);

        QMetaObject::connectSlotsByName(ElecClockClass);
    } // setupUi

    void retranslateUi(QWidget *ElecClockClass)
    {
        ElecClockClass->setWindowTitle(QApplication::translate("ElecClockClass", "ElecClock", 0));
    } // retranslateUi

};

namespace Ui {
    class ElecClockClass: public Ui_ElecClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECCLOCK_H
