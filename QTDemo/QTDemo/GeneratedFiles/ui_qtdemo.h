/********************************************************************************
** Form generated from reading UI file 'qtdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMO_H
#define UI_QTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTDemoClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTDemoClass)
    {
        if (QTDemoClass->objectName().isEmpty())
            QTDemoClass->setObjectName(QStringLiteral("QTDemoClass"));
        QTDemoClass->resize(600, 400);
        centralWidget = new QWidget(QTDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 140, 191, 81));
        QTDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        QTDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTDemoClass->setStatusBar(statusBar);

        retranslateUi(QTDemoClass);

        QMetaObject::connectSlotsByName(QTDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTDemoClass)
    {
        QTDemoClass->setWindowTitle(QApplication::translate("QTDemoClass", "QTDemo", 0));
        pushButton->setText(QApplication::translate("QTDemoClass", "BTN", 0));
    } // retranslateUi

};

namespace Ui {
    class QTDemoClass: public Ui_QTDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMO_H
