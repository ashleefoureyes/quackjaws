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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *StaffHomepage)
    {
        if (StaffHomepage->objectName().isEmpty())
            StaffHomepage->setObjectName(QStringLiteral("StaffHomepage"));
        StaffHomepage->resize(400, 300);
        pushButton = new QPushButton(StaffHomepage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 50, 80, 20));
        pushButton_2 = new QPushButton(StaffHomepage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 80, 80, 20));
        pushButton_3 = new QPushButton(StaffHomepage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 110, 80, 20));
        pushButton_4 = new QPushButton(StaffHomepage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 140, 80, 20));
        pushButton_5 = new QPushButton(StaffHomepage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 170, 80, 20));
        pushButton_6 = new QPushButton(StaffHomepage);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 200, 80, 20));

        retranslateUi(StaffHomepage);

        QMetaObject::connectSlotsByName(StaffHomepage);
    } // setupUi

    void retranslateUi(QDialog *StaffHomepage)
    {
        StaffHomepage->setWindowTitle(QApplication::translate("StaffHomepage", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("StaffHomepage", "Add Animal", nullptr));
        pushButton_2->setText(QApplication::translate("StaffHomepage", "Add Client", nullptr));
        pushButton_3->setText(QApplication::translate("StaffHomepage", "View Animals", nullptr));
        pushButton_4->setText(QApplication::translate("StaffHomepage", "View Clients", nullptr));
        pushButton_5->setText(QApplication::translate("StaffHomepage", "Run Algorithm", nullptr));
        pushButton_6->setText(QApplication::translate("StaffHomepage", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffHomepage: public Ui_StaffHomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFHOMEPAGE_H
