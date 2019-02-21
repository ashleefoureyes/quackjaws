/********************************************************************************
** Form generated from reading UI file 'staffhomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFHOMEPAGE_H
#define UI_STAFFHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StaffHomepage
{
public:
    QPushButton *bAddAnimal;
    QPushButton *bAddClient;
    QPushButton *bViewAnimals;
    QPushButton *bViewClients;
    QPushButton *bRunAlgorithm;
    QPushButton *bLogout;

    void setupUi(QDialog *StaffHomepage)
    {
        if (StaffHomepage->objectName().isEmpty())
            StaffHomepage->setObjectName(QStringLiteral("StaffHomepage"));
        StaffHomepage->resize(400, 300);
        bAddAnimal = new QPushButton(StaffHomepage);
        bAddAnimal->setObjectName(QStringLiteral("bAddAnimal"));
        bAddAnimal->setGeometry(QRect(160, 50, 80, 20));
        bAddClient = new QPushButton(StaffHomepage);
        bAddClient->setObjectName(QStringLiteral("bAddClient"));
        bAddClient->setGeometry(QRect(160, 80, 80, 20));
        bViewAnimals = new QPushButton(StaffHomepage);
        bViewAnimals->setObjectName(QStringLiteral("bViewAnimals"));
        bViewAnimals->setGeometry(QRect(160, 110, 80, 20));
        bViewClients = new QPushButton(StaffHomepage);
        bViewClients->setObjectName(QStringLiteral("bViewClients"));
        bViewClients->setGeometry(QRect(160, 140, 80, 20));
        bRunAlgorithm = new QPushButton(StaffHomepage);
        bRunAlgorithm->setObjectName(QStringLiteral("bRunAlgorithm"));
        bRunAlgorithm->setGeometry(QRect(160, 170, 80, 20));
        bLogout = new QPushButton(StaffHomepage);
        bLogout->setObjectName(QStringLiteral("bLogout"));
        bLogout->setGeometry(QRect(160, 200, 80, 20));

        retranslateUi(StaffHomepage);

        QMetaObject::connectSlotsByName(StaffHomepage);
    } // setupUi

    void retranslateUi(QDialog *StaffHomepage)
    {
        StaffHomepage->setWindowTitle(QApplication::translate("StaffHomepage", "Dialog", nullptr));
        bAddAnimal->setText(QApplication::translate("StaffHomepage", "Add Animal", nullptr));
        bAddClient->setText(QApplication::translate("StaffHomepage", "Add Client", nullptr));
        bViewAnimals->setText(QApplication::translate("StaffHomepage", "View Animals", nullptr));
        bViewClients->setText(QApplication::translate("StaffHomepage", "View Clients", nullptr));
        bRunAlgorithm->setText(QApplication::translate("StaffHomepage", "Run Algorithm", nullptr));
        bLogout->setText(QApplication::translate("StaffHomepage", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffHomepage: public Ui_StaffHomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFHOMEPAGE_H
