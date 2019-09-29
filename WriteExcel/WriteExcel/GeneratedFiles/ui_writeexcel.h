/********************************************************************************
** Form generated from reading UI file 'writeexcel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEEXCEL_H
#define UI_WRITEEXCEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriteExcelClass
{
public:

    void setupUi(QWidget *WriteExcelClass)
    {
        if (WriteExcelClass->objectName().isEmpty())
            WriteExcelClass->setObjectName(QStringLiteral("WriteExcelClass"));
        WriteExcelClass->resize(600, 400);

        retranslateUi(WriteExcelClass);

        QMetaObject::connectSlotsByName(WriteExcelClass);
    } // setupUi

    void retranslateUi(QWidget *WriteExcelClass)
    {
        WriteExcelClass->setWindowTitle(QApplication::translate("WriteExcelClass", "WriteExcel", 0));
    } // retranslateUi

};

namespace Ui {
    class WriteExcelClass: public Ui_WriteExcelClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEEXCEL_H
