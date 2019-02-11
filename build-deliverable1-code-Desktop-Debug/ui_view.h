/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
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
            View->setObjectName(QStringLiteral("View"));
        View->resize(400, 363);
        View->setStyleSheet(QLatin1String("QWidget{\n"
"	border-radius: 5px;\n"
"}"));
        viewButton = new QPushButton(View);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setGeometry(QRect(140, 100, 130, 40));
        viewButton->setStyleSheet(QLatin1String("QPushButton#viewButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        addButton = new QPushButton(View);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(140, 150, 130, 40));
        addButton->setStyleSheet(QLatin1String("QPushButton#addButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        deleteButton = new QPushButton(View);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(140, 200, 130, 40));
        deleteButton->setStyleSheet(QLatin1String("QPushButton#deleteButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightblue);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        exitButton = new QPushButton(View);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(170, 310, 61, 32));
        exitButton->setStyleSheet(QLatin1String("QPushButton#exitButton{\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightgrey);\n"
"	border-style: solid;\n"
"	border-color: lightgrey;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"}"));
        label = new QLabel(View);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica Neue"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(View);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 40, 211, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica Neue"));
        font1.setItalic(true);
        label_2->setFont(font1);
        graphicsView = new QGraphicsView(View);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 381, 341));
        graphicsView->setStyleSheet(QLatin1String("QGraphicsView{\n"
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
        View->setWindowTitle(QApplication::translate("View", "Form", Q_NULLPTR));
        viewButton->setText(QApplication::translate("View", "View Animals", Q_NULLPTR));
        addButton->setText(QApplication::translate("View", "Add Animals", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("View", "Delete Animals", Q_NULLPTR));
        exitButton->setText(QApplication::translate("View", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("View", "cuACS", Q_NULLPTR));
        label_2->setText(QApplication::translate("View", "animal management", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
