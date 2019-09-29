/********************************************************************************
** Form generated from reading UI file 'threaddemo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADDEMO_H
#define UI_THREADDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreadDemoClass
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonAppend;
    QTextBrowser *textInfo;

    void setupUi(QWidget *ThreadDemoClass)
    {
        if (ThreadDemoClass->objectName().isEmpty())
            ThreadDemoClass->setObjectName(QStringLiteral("ThreadDemoClass"));
        ThreadDemoClass->resize(600, 400);
        gridLayout = new QGridLayout(ThreadDemoClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonAppend = new QPushButton(ThreadDemoClass);
        buttonAppend->setObjectName(QStringLiteral("buttonAppend"));

        gridLayout->addWidget(buttonAppend, 0, 0, 1, 1);

        textInfo = new QTextBrowser(ThreadDemoClass);
        textInfo->setObjectName(QStringLiteral("textInfo"));

        gridLayout->addWidget(textInfo, 1, 0, 1, 1);


        retranslateUi(ThreadDemoClass);

        QMetaObject::connectSlotsByName(ThreadDemoClass);
    } // setupUi

    void retranslateUi(QWidget *ThreadDemoClass)
    {
        ThreadDemoClass->setWindowTitle(QApplication::translate("ThreadDemoClass", "ThreadDemo", 0));
        buttonAppend->setText(QApplication::translate("ThreadDemoClass", "Append", 0));
    } // retranslateUi

};

namespace Ui {
    class ThreadDemoClass: public Ui_ThreadDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADDEMO_H
