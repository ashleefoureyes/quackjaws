/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QPushButton *viewButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QLabel *label;
    QLabel *label_2;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(400, 363);
        View->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius: 5px;\n"
"}"));
        viewButton = new QPushButton(View);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(140, 100, 130, 40));
        viewButton->setStyleSheet(QString::fromUtf8("QPushButton#viewButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        addButton = new QPushButton(View);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(140, 150, 130, 40));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton#addButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        deleteButton = new QPushButton(View);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(140, 200, 130, 40));
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton#deleteButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        exitButton = new QPushButton(View);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(170, 310, 61, 32));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightgrey);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        label = new QLabel(View);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 61, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica Neue"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(View);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 121, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Helvetica Neue"));
        font1.setItalic(true);
        label_2->setFont(font1);
        graphicsView = new QGraphicsView(View);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 381, 341));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 rgb(237, 237, 237));\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}\n"
""));
        graphicsView->raise();
        viewButton->raise();
        addButton->raise();
        deleteButton->raise();
        exitButton->raise();
        label->raise();
        label_2->raise();

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QWidget *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "Form", nullptr));
        viewButton->setText(QCoreApplication::translate("View", "View Animals", nullptr));
        addButton->setText(QCoreApplication::translate("View", "Add Animals", nullptr));
        deleteButton->setText(QCoreApplication::translate("View", "Delete Animals", nullptr));
        exitButton->setText(QCoreApplication::translate("View", "Exit", nullptr));
        label->setText(QCoreApplication::translate("View", "cuACS", nullptr));
        label_2->setText(QCoreApplication::translate("View", "animal management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
