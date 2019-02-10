/********************************************************************************
** Form generated from reading UI file 'viewanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMAL_H
#define UI_VIEWANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAnimal
{
public:

    void setupUi(QWidget *ViewAnimal)
    {
        if (ViewAnimal->objectName().isEmpty())
            ViewAnimal->setObjectName(QString::fromUtf8("ViewAnimal"));
        ViewAnimal->resize(400, 300);

        retranslateUi(ViewAnimal);

        QMetaObject::connectSlotsByName(ViewAnimal);
    } // setupUi

    void retranslateUi(QWidget *ViewAnimal)
    {
        ViewAnimal->setWindowTitle(QCoreApplication::translate("ViewAnimal", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimal: public Ui_ViewAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMAL_H
