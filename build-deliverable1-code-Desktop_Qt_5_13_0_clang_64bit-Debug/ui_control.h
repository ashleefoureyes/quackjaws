/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QPushButton *viewButton;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QString::fromUtf8("Control"));
        Control->resize(400, 300);
        viewButton = new QPushButton(Control);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(140, 90, 114, 40));
        addButton = new QPushButton(Control);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(140, 130, 114, 40));
        deleteButton = new QPushButton(Control);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(140, 170, 114, 40));

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QWidget *Control)
    {
        Control->setWindowTitle(QCoreApplication::translate("Control", "Form", nullptr));
        viewButton->setText(QCoreApplication::translate("Control", "View Animals", nullptr));
        addButton->setText(QCoreApplication::translate("Control", "Add Animals", nullptr));
        deleteButton->setText(QCoreApplication::translate("Control", "Delete Animals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
