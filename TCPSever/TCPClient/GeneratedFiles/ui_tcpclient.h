/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPClientClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editIP;
    QLabel *label_2;
    QLineEdit *editPort;
    QPushButton *buttonConnect;
    QTextEdit *textRecv;
    QTextEdit *textSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSend;
    QPushButton *buttonExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TCPClientClass)
    {
        if (TCPClientClass->objectName().isEmpty())
            TCPClientClass->setObjectName(QStringLiteral("TCPClientClass"));
        TCPClientClass->resize(660, 400);
        gridLayout = new QGridLayout(TCPClientClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(TCPClientClass);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editIP = new QLineEdit(TCPClientClass);
        editIP->setObjectName(QStringLiteral("editIP"));

        horizontalLayout->addWidget(editIP);

        label_2 = new QLabel(TCPClientClass);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        editPort = new QLineEdit(TCPClientClass);
        editPort->setObjectName(QStringLiteral("editPort"));

        horizontalLayout->addWidget(editPort);

        buttonConnect = new QPushButton(TCPClientClass);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));

        horizontalLayout->addWidget(buttonConnect);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 4);

        textRecv = new QTextEdit(TCPClientClass);
        textRecv->setObjectName(QStringLiteral("textRecv"));
        textRecv->setReadOnly(true);

        gridLayout->addWidget(textRecv, 1, 0, 1, 4);

        textSend = new QTextEdit(TCPClientClass);
        textSend->setObjectName(QStringLiteral("textSend"));

        gridLayout->addWidget(textSend, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(214, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        buttonSend = new QPushButton(TCPClientClass);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 3, 1, 1, 1);

        buttonExit = new QPushButton(TCPClientClass);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));

        gridLayout->addWidget(buttonExit, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);


        retranslateUi(TCPClientClass);

        buttonSend->setDefault(true);


        QMetaObject::connectSlotsByName(TCPClientClass);
    } // setupUi

    void retranslateUi(QWidget *TCPClientClass)
    {
        TCPClientClass->setWindowTitle(QApplication::translate("TCPClientClass", "TCPClient", 0));
        label->setText(QApplication::translate("TCPClientClass", "IP\345\234\260\345\235\200:", 0));
        editIP->setText(QApplication::translate("TCPClientClass", "127.0.0.1", 0));
        label_2->setText(QApplication::translate("TCPClientClass", "\347\253\257\345\217\243\345\217\267:", 0));
        editPort->setText(QApplication::translate("TCPClientClass", "7000", 0));
        buttonConnect->setText(QApplication::translate("TCPClientClass", "\350\277\236\346\216\245", 0));
        buttonSend->setText(QApplication::translate("TCPClientClass", "\345\217\221\351\200\201", 0));
        buttonExit->setText(QApplication::translate("TCPClientClass", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class TCPClientClass: public Ui_TCPClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
