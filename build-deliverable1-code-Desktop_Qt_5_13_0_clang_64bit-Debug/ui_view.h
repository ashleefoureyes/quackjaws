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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QPushButton *viewButton;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(400, 300);
        viewButton = new QPushButton(View);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(140, 70, 114, 40));
        addButton = new QPushButton(View);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(140, 130, 114, 40));
        deleteButton = new QPushButton(View);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(140, 190, 114, 40));

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QWidget *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "Form", nullptr));
        viewButton->setText(QCoreApplication::translate("View", "View Animals", nullptr));
        addButton->setText(QCoreApplication::translate("View", "Add Animals", nullptr));
        deleteButton->setText(QCoreApplication::translate("View", "Delete Animals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
