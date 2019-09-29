/********************************************************************************
** Form generated from reading UI file 'chessdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSDEMO_H
#define UI_CHESSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessDemoClass
{
public:

    void setupUi(QWidget *ChessDemoClass)
    {
        if (ChessDemoClass->objectName().isEmpty())
            ChessDemoClass->setObjectName(QStringLiteral("ChessDemoClass"));
        ChessDemoClass->resize(600, 400);

        retranslateUi(ChessDemoClass);

        QMetaObject::connectSlotsByName(ChessDemoClass);
    } // setupUi

    void retranslateUi(QWidget *ChessDemoClass)
    {
        ChessDemoClass->setWindowTitle(QApplication::translate("ChessDemoClass", "ChessDemo", 0));
    } // retranslateUi

};

namespace Ui {
    class ChessDemoClass: public Ui_ChessDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSDEMO_H
