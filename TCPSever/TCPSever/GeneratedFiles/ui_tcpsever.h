/********************************************************************************
** Form generated from reading UI file 'tcpsever.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSEVER_H
#define UI_TCPSEVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPSeverClass
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textRecv;
    QTextBrowser *textSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSend;
    QPushButton *buttonExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TCPSeverClass)
    {
        if (TCPSeverClass->objectName().isEmpty())
            TCPSeverClass->setObjectName(QStringLiteral("TCPSeverClass"));
        TCPSeverClass->resize(616, 392);
        gridLayout = new QGridLayout(TCPSeverClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textRecv = new QTextBrowser(TCPSeverClass);
        textRecv->setObjectName(QStringLiteral("textRecv"));

        gridLayout->addWidget(textRecv, 0, 0, 1, 4);

        textSend = new QTextBrowser(TCPSeverClass);
        textSend->setObjectName(QStringLiteral("textSend"));
        textSend->setReadOnly(false);

        gridLayout->addWidget(textSend, 1, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(192, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        buttonSend = new QPushButton(TCPSeverClass);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 2, 1, 1, 1);

        buttonExit = new QPushButton(TCPSeverClass);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));

        gridLayout->addWidget(buttonExit, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);


        retranslateUi(TCPSeverClass);

        buttonSend->setDefault(true);


        QMetaObject::connectSlotsByName(TCPSeverClass);
    } // setupUi

    void retranslateUi(QWidget *TCPSeverClass)
    {
        TCPSeverClass->setWindowTitle(QApplication::translate("TCPSeverClass", "TCPSever", 0));
        buttonSend->setText(QApplication::translate("TCPSeverClass", "\345\217\221\351\200\201", 0));
        buttonExit->setText(QApplication::translate("TCPSeverClass", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class TCPSeverClass: public Ui_TCPSeverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSEVER_H
