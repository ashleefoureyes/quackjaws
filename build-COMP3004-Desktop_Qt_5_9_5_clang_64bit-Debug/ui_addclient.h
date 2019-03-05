/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbFirstName;
    QLabel *lbLastName;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtFirstName;
    QLineEdit *txtLastName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbProvince;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cbProvince;
    QLineEdit *txtCity;
    QLabel *label_2;
    QLineEdit *txtAddress;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpinBox *cbAge;
    QSpinBox *sbAreaCode;
    QSpinBox *sbPhone;
    QVBoxLayout *verticalLayout;
    QLabel *lbEmail;
    QLineEdit *txtEmail;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pbSubmit;
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
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbFirstName = new QLabel(tab);
        lbFirstName->setObjectName(QStringLiteral("lbFirstName"));

        horizontalLayout_6->addWidget(lbFirstName);

        lbLastName = new QLabel(tab);
        lbLastName->setObjectName(QStringLiteral("lbLastName"));

        horizontalLayout_6->addWidget(lbLastName);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        txtFirstName = new QLineEdit(tab);
        txtFirstName->setObjectName(QStringLiteral("txtFirstName"));

        horizontalLayout_5->addWidget(txtFirstName);

        txtLastName = new QLineEdit(tab);
        txtLastName->setObjectName(QStringLiteral("txtLastName"));

        horizontalLayout_5->addWidget(txtLastName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lbProvince = new QLabel(tab);
        lbProvince->setObjectName(QStringLiteral("lbProvince"));
        lbProvince->setMinimumSize(QSize(150, 0));
        lbProvince->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lbProvince);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbProvince = new QComboBox(tab);
        cbProvince->setObjectName(QStringLiteral("cbProvince"));
        cbProvince->setMinimumSize(QSize(150, 0));
        cbProvince->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(cbProvince);

        txtCity = new QLineEdit(tab);
        txtCity->setObjectName(QStringLiteral("txtCity"));

        horizontalLayout_3->addWidget(txtCity);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        txtAddress = new QLineEdit(tab);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));

        verticalLayout_2->addWidget(txtAddress);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(150, 0));
        label_3->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbAge = new QSpinBox(tab);
        cbAge->setObjectName(QStringLiteral("cbAge"));

        horizontalLayout->addWidget(cbAge);

        sbAreaCode = new QSpinBox(tab);
        sbAreaCode->setObjectName(QStringLiteral("sbAreaCode"));
        sbAreaCode->setMinimumSize(QSize(50, 0));
        sbAreaCode->setMaximumSize(QSize(50, 16777215));
        sbAreaCode->setMinimum(100);
        sbAreaCode->setMaximum(999);
        sbAreaCode->setValue(999);

        horizontalLayout->addWidget(sbAreaCode);

        sbPhone = new QSpinBox(tab);
        sbPhone->setObjectName(QStringLiteral("sbPhone"));
        sbPhone->setMinimum(1000000);
        sbPhone->setMaximum(9999999);
        sbPhone->setValue(9999999);

        horizontalLayout->addWidget(sbPhone);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbEmail = new QLabel(tab);
        lbEmail->setObjectName(QStringLiteral("lbEmail"));

        verticalLayout->addWidget(lbEmail);

        txtEmail = new QLineEdit(tab);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));

        verticalLayout->addWidget(txtEmail);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pbSubmit = new QPushButton(tab);
        pbSubmit->setObjectName(QStringLiteral("pbSubmit"));

        horizontalLayout_7->addWidget(pbSubmit);

        pbExit = new QPushButton(tab);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        horizontalLayout_7->addWidget(pbExit);


        verticalLayout_2->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(AddClient);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Dialog", Q_NULLPTR));
        lbFirstName->setText(QApplication::translate("AddClient", "First name", Q_NULLPTR));
        lbLastName->setText(QApplication::translate("AddClient", "Last name", Q_NULLPTR));
        txtFirstName->setPlaceholderText(QString());
        txtLastName->setPlaceholderText(QString());
        lbProvince->setText(QApplication::translate("AddClient", "Province", Q_NULLPTR));
        label->setText(QApplication::translate("AddClient", "City", Q_NULLPTR));
        cbProvince->clear();
        cbProvince->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Alberta", Q_NULLPTR)
         << QApplication::translate("AddClient", "British Columbia", Q_NULLPTR)
         << QApplication::translate("AddClient", "Manitoba", Q_NULLPTR)
         << QApplication::translate("AddClient", "New Brunswick", Q_NULLPTR)
         << QApplication::translate("AddClient", "Newfoundland and Labrador", Q_NULLPTR)
         << QApplication::translate("AddClient", "Northwest Territories", Q_NULLPTR)
         << QApplication::translate("AddClient", "Nova Scotia", Q_NULLPTR)
         << QApplication::translate("AddClient", "Nunavut", Q_NULLPTR)
         << QApplication::translate("AddClient", "Ontario", Q_NULLPTR)
         << QApplication::translate("AddClient", "Prince Edward Island", Q_NULLPTR)
         << QApplication::translate("AddClient", "Quebec", Q_NULLPTR)
         << QApplication::translate("AddClient", "Sakatchewan", Q_NULLPTR)
         << QApplication::translate("AddClient", "Yukon", Q_NULLPTR)
        );
        txtCity->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("AddClient", "Home address", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddClient", "Age", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddClient", "Phone #", Q_NULLPTR));
        lbEmail->setText(QApplication::translate("AddClient", "Email", Q_NULLPTR));
        pbSubmit->setText(QApplication::translate("AddClient", "Submit", Q_NULLPTR));
        pbExit->setText(QApplication::translate("AddClient", "Exit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddClient", "Contact Information", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
