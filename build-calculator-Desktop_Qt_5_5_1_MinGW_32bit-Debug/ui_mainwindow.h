/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *key1;
    QPushButton *key2;
    QPushButton *key3;
    QPushButton *key4;
    QPushButton *key5;
    QPushButton *key6;
    QPushButton *key7;
    QPushButton *key8;
    QPushButton *key9;
    QPushButton *key0;
    QPushButton *key_equal;
    QPushButton *key_div;
    QPushButton *key_minus;
    QPushButton *key_mux;
    QPushButton *key_plus;
    QPushButton *key_dot;
    QPushButton *key_backspace;
    QPushButton *key_clear;
    QMenuBar *menuBar;
    QMenu *menuCal;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        key1 = new QPushButton(centralWidget);
        key1->setObjectName(QStringLiteral("key1"));
        key1->setGeometry(QRect(50, 60, 41, 31));
        key2 = new QPushButton(centralWidget);
        key2->setObjectName(QStringLiteral("key2"));
        key2->setGeometry(QRect(110, 60, 41, 31));
        key3 = new QPushButton(centralWidget);
        key3->setObjectName(QStringLiteral("key3"));
        key3->setGeometry(QRect(170, 60, 41, 31));
        key4 = new QPushButton(centralWidget);
        key4->setObjectName(QStringLiteral("key4"));
        key4->setGeometry(QRect(50, 110, 41, 31));
        key5 = new QPushButton(centralWidget);
        key5->setObjectName(QStringLiteral("key5"));
        key5->setGeometry(QRect(110, 110, 41, 31));
        key6 = new QPushButton(centralWidget);
        key6->setObjectName(QStringLiteral("key6"));
        key6->setGeometry(QRect(170, 110, 41, 31));
        key7 = new QPushButton(centralWidget);
        key7->setObjectName(QStringLiteral("key7"));
        key7->setGeometry(QRect(50, 160, 41, 31));
        key8 = new QPushButton(centralWidget);
        key8->setObjectName(QStringLiteral("key8"));
        key8->setGeometry(QRect(110, 160, 41, 31));
        key9 = new QPushButton(centralWidget);
        key9->setObjectName(QStringLiteral("key9"));
        key9->setGeometry(QRect(170, 160, 41, 31));
        key0 = new QPushButton(centralWidget);
        key0->setObjectName(QStringLiteral("key0"));
        key0->setGeometry(QRect(50, 210, 41, 31));
        key_equal = new QPushButton(centralWidget);
        key_equal->setObjectName(QStringLiteral("key_equal"));
        key_equal->setGeometry(QRect(170, 210, 41, 31));
        key_div = new QPushButton(centralWidget);
        key_div->setObjectName(QStringLiteral("key_div"));
        key_div->setGeometry(QRect(230, 210, 41, 31));
        key_minus = new QPushButton(centralWidget);
        key_minus->setObjectName(QStringLiteral("key_minus"));
        key_minus->setGeometry(QRect(230, 110, 41, 31));
        key_mux = new QPushButton(centralWidget);
        key_mux->setObjectName(QStringLiteral("key_mux"));
        key_mux->setGeometry(QRect(230, 160, 41, 31));
        key_plus = new QPushButton(centralWidget);
        key_plus->setObjectName(QStringLiteral("key_plus"));
        key_plus->setGeometry(QRect(230, 60, 41, 31));
        key_dot = new QPushButton(centralWidget);
        key_dot->setObjectName(QStringLiteral("key_dot"));
        key_dot->setGeometry(QRect(110, 210, 41, 31));
        key_backspace = new QPushButton(centralWidget);
        key_backspace->setObjectName(QStringLiteral("key_backspace"));
        key_backspace->setGeometry(QRect(290, 60, 81, 31));
        key_clear = new QPushButton(centralWidget);
        key_clear->setObjectName(QStringLiteral("key_clear"));
        key_clear->setGeometry(QRect(290, 110, 81, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        menuCal = new QMenu(menuBar);
        menuCal->setObjectName(QStringLiteral("menuCal"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCal->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        key1->setText(QApplication::translate("MainWindow", "1", 0));
        key2->setText(QApplication::translate("MainWindow", "2", 0));
        key3->setText(QApplication::translate("MainWindow", "3", 0));
        key4->setText(QApplication::translate("MainWindow", "4", 0));
        key5->setText(QApplication::translate("MainWindow", "5", 0));
        key6->setText(QApplication::translate("MainWindow", "6", 0));
        key7->setText(QApplication::translate("MainWindow", "7", 0));
        key8->setText(QApplication::translate("MainWindow", "8", 0));
        key9->setText(QApplication::translate("MainWindow", "9", 0));
        key0->setText(QApplication::translate("MainWindow", "0", 0));
        key_equal->setText(QApplication::translate("MainWindow", "=", 0));
        key_div->setText(QApplication::translate("MainWindow", "/", 0));
        key_minus->setText(QApplication::translate("MainWindow", "-", 0));
        key_mux->setText(QApplication::translate("MainWindow", "*", 0));
        key_plus->setText(QApplication::translate("MainWindow", "+", 0));
        key_dot->setText(QApplication::translate("MainWindow", ".", 0));
        key_backspace->setText(QApplication::translate("MainWindow", "backspace", 0));
        key_clear->setText(QApplication::translate("MainWindow", "C", 0));
        menuCal->setTitle(QApplication::translate("MainWindow", "cal", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
