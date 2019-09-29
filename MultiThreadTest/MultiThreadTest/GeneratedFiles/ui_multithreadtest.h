/********************************************************************************
** Form generated from reading UI file 'multithreadtest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTITHREADTEST_H
#define UI_MULTITHREADTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiThreadTestClass
{
public:
    QPushButton *m_pushButton1;
    QPushButton *m_pushButton2;

    void setupUi(QWidget *MultiThreadTestClass)
    {
        if (MultiThreadTestClass->objectName().isEmpty())
            MultiThreadTestClass->setObjectName(QStringLiteral("MultiThreadTestClass"));
        MultiThreadTestClass->resize(600, 400);
        m_pushButton1 = new QPushButton(MultiThreadTestClass);
        m_pushButton1->setObjectName(QStringLiteral("m_pushButton1"));
        m_pushButton1->setGeometry(QRect(210, 150, 141, 61));
        m_pushButton2 = new QPushButton(MultiThreadTestClass);
        m_pushButton2->setObjectName(QStringLiteral("m_pushButton2"));
        m_pushButton2->setGeometry(QRect(210, 240, 141, 61));

        retranslateUi(MultiThreadTestClass);

        QMetaObject::connectSlotsByName(MultiThreadTestClass);
    } // setupUi

    void retranslateUi(QWidget *MultiThreadTestClass)
    {
        MultiThreadTestClass->setWindowTitle(QApplication::translate("MultiThreadTestClass", "MultiThreadTest", 0));
        m_pushButton1->setText(QApplication::translate("MultiThreadTestClass", "PushButton", 0));
        m_pushButton2->setText(QApplication::translate("MultiThreadTestClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiThreadTestClass: public Ui_MultiThreadTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTITHREADTEST_H
