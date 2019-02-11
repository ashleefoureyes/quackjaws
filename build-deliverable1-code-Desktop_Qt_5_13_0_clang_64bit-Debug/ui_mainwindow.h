/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *enterButton;
    QLabel *label;
    QFrame *line;
    QGraphicsView *graphicsView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(461, 317);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        enterButton = new QPushButton(centralWidget);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(140, 140, 190, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica Neue"));
        enterButton->setFont(font);
        enterButton->setAutoFillBackground(false);
        enterButton->setStyleSheet(QString::fromUtf8("QPushButton#enterButton{\n"
"	border: 1px lightgrey;\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightgrey);\n"
"\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 60, 59, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Helvetica Neue"));
        font1.setPointSize(18);
        label->setFont(font1);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 80, 261, 31));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color: rgb(60, 60, 60);\n"
"	border-color: black;\n"
"}"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 461, 281));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightBlue);\n"
"\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        enterButton->raise();
        label->raise();
        line->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "cuACS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
