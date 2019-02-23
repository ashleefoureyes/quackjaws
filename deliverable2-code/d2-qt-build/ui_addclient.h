/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *txtFirstName;
    QLineEdit *txtLastName;
    QLabel *lbFirstName;
    QComboBox *cbProvince;
    QLineEdit *txtCity;
    QLabel *lbProvince;
    QLabel *lbLastName;
    QLabel *label;
    QSpinBox *cbAge;
    QLineEdit *txtAddress;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pbSubmit;
    QSpinBox *sbAreaCode;
    QSpinBox *sbPhone;
    QLineEdit *txtEmail;
    QLabel *lbEmail;
    QPushButton *pbExit;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QStringLiteral("AddClient"));
        AddClient->resize(400, 393);
        gridLayout = new QGridLayout(AddClient);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(AddClient);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        txtFirstName = new QLineEdit(tab);
        txtFirstName->setObjectName(QStringLiteral("txtFirstName"));
        txtFirstName->setGeometry(QRect(90, 60, 113, 21));
        txtLastName = new QLineEdit(tab);
        txtLastName->setObjectName(QStringLiteral("txtLastName"));
        txtLastName->setGeometry(QRect(220, 60, 113, 21));
        lbFirstName = new QLabel(tab);
        lbFirstName->setObjectName(QStringLiteral("lbFirstName"));
        lbFirstName->setGeometry(QRect(90, 40, 61, 16));
        cbProvince = new QComboBox(tab);
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->addItem(QString());
        cbProvince->setObjectName(QStringLiteral("cbProvince"));
        cbProvince->setGeometry(QRect(90, 120, 111, 22));
        txtCity = new QLineEdit(tab);
        txtCity->setObjectName(QStringLiteral("txtCity"));
        txtCity->setGeometry(QRect(220, 120, 113, 21));
        lbProvince = new QLabel(tab);
        lbProvince->setObjectName(QStringLiteral("lbProvince"));
        lbProvince->setGeometry(QRect(90, 100, 47, 14));
        lbLastName = new QLabel(tab);
        lbLastName->setObjectName(QStringLiteral("lbLastName"));
        lbLastName->setGeometry(QRect(220, 40, 61, 16));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 100, 47, 14));
        cbAge = new QSpinBox(tab);
        cbAge->setObjectName(QStringLiteral("cbAge"));
        cbAge->setGeometry(QRect(90, 220, 101, 22));
        txtAddress = new QLineEdit(tab);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));
        txtAddress->setGeometry(QRect(90, 170, 241, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 81, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 200, 47, 14));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 200, 51, 16));
        pbSubmit = new QPushButton(tab);
        pbSubmit->setObjectName(QStringLiteral("pbSubmit"));
        pbSubmit->setGeometry(QRect(140, 310, 80, 20));
        sbAreaCode = new QSpinBox(tab);
        sbAreaCode->setObjectName(QStringLiteral("sbAreaCode"));
        sbAreaCode->setGeometry(QRect(210, 220, 42, 22));
        sbAreaCode->setMinimum(0);
        sbAreaCode->setMaximum(999);
        sbAreaCode->setValue(0);
        sbPhone = new QSpinBox(tab);
        sbPhone->setObjectName(QStringLiteral("sbPhone"));
        sbPhone->setGeometry(QRect(260, 220, 91, 22));
        sbPhone->setMinimum(0);
        sbPhone->setMaximum(9999999);
        sbPhone->setValue(0);
        txtEmail = new QLineEdit(tab);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(90, 270, 241, 21));
        lbEmail = new QLabel(tab);
        lbEmail->setObjectName(QStringLiteral("lbEmail"));
        lbEmail->setGeometry(QRect(90, 250, 81, 16));
        pbExit = new QPushButton(tab);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(230, 310, 80, 20));
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(AddClient);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Dialog", nullptr));
        txtFirstName->setPlaceholderText(QString());
        txtLastName->setPlaceholderText(QString());
        lbFirstName->setText(QApplication::translate("AddClient", "First name", nullptr));
        cbProvince->setItemText(0, QApplication::translate("AddClient", "Alberta", nullptr));
        cbProvince->setItemText(1, QApplication::translate("AddClient", "British Columbia", nullptr));
        cbProvince->setItemText(2, QApplication::translate("AddClient", "Manitoba", nullptr));
        cbProvince->setItemText(3, QApplication::translate("AddClient", "New Brunswick", nullptr));
        cbProvince->setItemText(4, QApplication::translate("AddClient", "Newfoundland and Labrador", nullptr));
        cbProvince->setItemText(5, QApplication::translate("AddClient", "Northwest Territories", nullptr));
        cbProvince->setItemText(6, QApplication::translate("AddClient", "Nova Scotia", nullptr));
        cbProvince->setItemText(7, QApplication::translate("AddClient", "Nunavut", nullptr));
        cbProvince->setItemText(8, QApplication::translate("AddClient", "Ontario", nullptr));
        cbProvince->setItemText(9, QApplication::translate("AddClient", "Prince Edward Island", nullptr));
        cbProvince->setItemText(10, QApplication::translate("AddClient", "Quebec", nullptr));
        cbProvince->setItemText(11, QApplication::translate("AddClient", "Sakatchewan", nullptr));
        cbProvince->setItemText(12, QApplication::translate("AddClient", "Yukon", nullptr));

        txtCity->setPlaceholderText(QString());
        lbProvince->setText(QApplication::translate("AddClient", "Province", nullptr));
        lbLastName->setText(QApplication::translate("AddClient", "Last name", nullptr));
        label->setText(QApplication::translate("AddClient", "City", nullptr));
        label_2->setText(QApplication::translate("AddClient", "Home address", nullptr));
        label_3->setText(QApplication::translate("AddClient", "Age", nullptr));
        label_4->setText(QApplication::translate("AddClient", "Phone #", nullptr));
        pbSubmit->setText(QApplication::translate("AddClient", "Submit", nullptr));
        lbEmail->setText(QApplication::translate("AddClient", "Email", nullptr));
        pbExit->setText(QApplication::translate("AddClient", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddClient", "Contact Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
