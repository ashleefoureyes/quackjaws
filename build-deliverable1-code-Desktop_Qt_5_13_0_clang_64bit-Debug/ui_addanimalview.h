/********************************************************************************
** Form generated from reading UI file 'addanimalview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMALVIEW_H
#define UI_ADDANIMALVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnimalView
{
public:
    QPushButton *submitButton;
    QCheckBox *checkBox;
    QComboBox *sizeBox;
    QComboBox *hairBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QRadioButton *dogSelect;
    QLineEdit *lineEdit_3;
    QRadioButton *maleSelect;
    QRadioButton *catSelect;
    QRadioButton *femaleSelect;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QWidget *AddAnimalView)
    {
        if (AddAnimalView->objectName().isEmpty())
            AddAnimalView->setObjectName(QString::fromUtf8("AddAnimalView"));
        AddAnimalView->resize(400, 419);
        submitButton = new QPushButton(AddAnimalView);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(130, 380, 114, 32));
        checkBox = new QCheckBox(AddAnimalView);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(210, 290, 47, 21));
        sizeBox = new QComboBox(AddAnimalView);
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->setObjectName(QString::fromUtf8("sizeBox"));
        sizeBox->setGeometry(QRect(200, 170, 111, 21));
        hairBox = new QComboBox(AddAnimalView);
        hairBox->addItem(QString());
        hairBox->addItem(QString());
        hairBox->addItem(QString());
        hairBox->setObjectName(QString::fromUtf8("hairBox"));
        hairBox->setGeometry(QRect(200, 260, 90, 21));
        lineEdit = new QLineEdit(AddAnimalView);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 72, 125, 21));
        lineEdit_2 = new QLineEdit(AddAnimalView);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 137, 125, 21));
        dogSelect = new QRadioButton(AddAnimalView);
        dogSelect->setObjectName(QString::fromUtf8("dogSelect"));
        dogSelect->setGeometry(QRect(260, 105, 51, 20));
        lineEdit_3 = new QLineEdit(AddAnimalView);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 200, 125, 21));
        maleSelect = new QRadioButton(AddAnimalView);
        maleSelect->setObjectName(QString::fromUtf8("maleSelect"));
        maleSelect->setGeometry(QRect(200, 230, 55, 20));
        catSelect = new QRadioButton(AddAnimalView);
        catSelect->setObjectName(QString::fromUtf8("catSelect"));
        catSelect->setGeometry(QRect(200, 105, 47, 20));
        femaleSelect = new QRadioButton(AddAnimalView);
        femaleSelect->setObjectName(QString::fromUtf8("femaleSelect"));
        femaleSelect->setGeometry(QRect(260, 230, 70, 20));
        label = new QLabel(AddAnimalView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(104, 73, 36, 16));
        label_2 = new QLabel(AddAnimalView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(104, 104, 49, 16));
        label_3 = new QLabel(AddAnimalView);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(104, 135, 37, 16));
        label_7 = new QLabel(AddAnimalView);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(104, 258, 20, 16));
        label_8 = new QLabel(AddAnimalView);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(104, 289, 92, 16));
        label_5 = new QLabel(AddAnimalView);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(104, 197, 56, 16));
        label_4 = new QLabel(AddAnimalView);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(104, 166, 26, 16));
        label_6 = new QLabel(AddAnimalView);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(104, 227, 46, 16));

        retranslateUi(AddAnimalView);

        QMetaObject::connectSlotsByName(AddAnimalView);
    } // setupUi

    void retranslateUi(QWidget *AddAnimalView)
    {
        AddAnimalView->setWindowTitle(QCoreApplication::translate("AddAnimalView", "Form", nullptr));
        submitButton->setText(QCoreApplication::translate("AddAnimalView", "Submit", nullptr));
        checkBox->setText(QCoreApplication::translate("AddAnimalView", "Yes", nullptr));
        sizeBox->setItemText(0, QCoreApplication::translate("AddAnimalView", "Teacup", nullptr));
        sizeBox->setItemText(1, QCoreApplication::translate("AddAnimalView", "Small", nullptr));
        sizeBox->setItemText(2, QCoreApplication::translate("AddAnimalView", "Medium", nullptr));
        sizeBox->setItemText(3, QCoreApplication::translate("AddAnimalView", "Large", nullptr));

        hairBox->setItemText(0, QCoreApplication::translate("AddAnimalView", "Hairless", nullptr));
        hairBox->setItemText(1, QCoreApplication::translate("AddAnimalView", "Short", nullptr));
        hairBox->setItemText(2, QCoreApplication::translate("AddAnimalView", "Long", nullptr));

        dogSelect->setText(QCoreApplication::translate("AddAnimalView", "Dog", nullptr));
        maleSelect->setText(QCoreApplication::translate("AddAnimalView", "Male", nullptr));
        catSelect->setText(QCoreApplication::translate("AddAnimalView", "Cat", nullptr));
        femaleSelect->setText(QCoreApplication::translate("AddAnimalView", "Female", nullptr));
        label->setText(QCoreApplication::translate("AddAnimalView", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddAnimalView", "Species", nullptr));
        label_3->setText(QCoreApplication::translate("AddAnimalView", "Breed", nullptr));
        label_7->setText(QCoreApplication::translate("AddAnimalView", "Fur", nullptr));
        label_8->setText(QCoreApplication::translate("AddAnimalView", "Hypoallergenic", nullptr));
        label_5->setText(QCoreApplication::translate("AddAnimalView", "Age (yrs)", nullptr));
        label_4->setText(QCoreApplication::translate("AddAnimalView", "Size", nullptr));
        label_6->setText(QCoreApplication::translate("AddAnimalView", "Gender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAnimalView: public Ui_AddAnimalView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMALVIEW_H
