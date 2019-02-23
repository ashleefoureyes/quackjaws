/********************************************************************************
** Form generated from reading UI file 'clienthomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTHOMEPAGE_H
#define UI_CLIENTHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClientHomepage
{
public:
    QPushButton *lbViewAnimals;
    QPushButton *lbLogout;
    QLabel *label;

    void setupUi(QDialog *ClientHomepage)
    {
        if (ClientHomepage->objectName().isEmpty())
            ClientHomepage->setObjectName(QStringLiteral("ClientHomepage"));
        ClientHomepage->resize(400, 300);
        lbViewAnimals = new QPushButton(ClientHomepage);
        lbViewAnimals->setObjectName(QStringLiteral("lbViewAnimals"));
        lbViewAnimals->setGeometry(QRect(160, 100, 80, 16));
        lbLogout = new QPushButton(ClientHomepage);
        lbLogout->setObjectName(QStringLiteral("lbLogout"));
        lbLogout->setGeometry(QRect(160, 130, 80, 16));
        label = new QLabel(ClientHomepage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 351, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ClientHomepage);

        QMetaObject::connectSlotsByName(ClientHomepage);
    } // setupUi

    void retranslateUi(QDialog *ClientHomepage)
    {
        ClientHomepage->setWindowTitle(QApplication::translate("ClientHomepage", "Dialog", nullptr));
        lbViewAnimals->setText(QApplication::translate("ClientHomepage", "View Animals", nullptr));
        lbLogout->setText(QApplication::translate("ClientHomepage", "Logout", nullptr));
        label->setText(QApplication::translate("ClientHomepage", "Full Client Features Coming Soon!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientHomepage: public Ui_ClientHomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTHOMEPAGE_H
