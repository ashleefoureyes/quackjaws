/********************************************************************************
** Form generated from reading UI file 'navigate.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATE_H
#define UI_NAVIGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Navigate
{
public:
    QPushButton *addButton;
    QPushButton *viewButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *Navigate)
    {
        if (Navigate->objectName().isEmpty())
            Navigate->setObjectName(QString::fromUtf8("Navigate"));
        Navigate->resize(400, 300);
        addButton = new QPushButton(Navigate);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(150, 120, 114, 40));
        viewButton = new QPushButton(Navigate);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(150, 70, 114, 40));
        deleteButton = new QPushButton(Navigate);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(150, 170, 114, 40));

        retranslateUi(Navigate);

        QMetaObject::connectSlotsByName(Navigate);
    } // setupUi

    void retranslateUi(QWidget *Navigate)
    {
        Navigate->setWindowTitle(QCoreApplication::translate("Navigate", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("Navigate", "Add Animals", nullptr));
        viewButton->setText(QCoreApplication::translate("Navigate", "View Animals", nullptr));
        deleteButton->setText(QCoreApplication::translate("Navigate", "Delete Animals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Navigate: public Ui_Navigate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATE_H
