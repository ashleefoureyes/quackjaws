/********************************************************************************
** Form generated from reading UI file 'addanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMAL_H
#define UI_ADDANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnimal
{
public:
    QWidget *widget;
    QHBoxLayout *Age;
    QLabel *lbAge;
    QSpinBox *sbAge;
    QWidget *widget1;
    QHBoxLayout *Size;
    QLabel *label;
    QComboBox *cbSize;
    QWidget *widget2;
    QHBoxLayout *Breed;
    QLabel *lbBreed;
    QLineEdit *txtSpeciesBox;
    QWidget *widget3;
    QHBoxLayout *Species;
    QLabel *lbSpecies;
    QRadioButton *rbDog;
    QRadioButton *rbCat;
    QWidget *widget4;
    QHBoxLayout *Name;
    QLabel *lbName;
    QLineEdit *txtNameBox;
    QWidget *widget5;
    QHBoxLayout *Gender;
    QLabel *lbGender;
    QRadioButton *rbMale;
    QRadioButton *rbFemale;
    QWidget *widget6;
    QHBoxLayout *Fur;
    QLabel *lbFur;
    QComboBox *cbFur;
    QButtonGroup *groupBreed;
    QButtonGroup *groupGender;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QStringLiteral("AddAnimal"));
        AddAnimal->resize(478, 602);
        widget = new QWidget(AddAnimal);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 180, 70, 23));
        Age = new QHBoxLayout(widget);
        Age->setObjectName(QStringLiteral("Age"));
        Age->setContentsMargins(0, 0, 0, 0);
        lbAge = new QLabel(widget);
        lbAge->setObjectName(QStringLiteral("lbAge"));

        Age->addWidget(lbAge);

        sbAge = new QSpinBox(widget);
        sbAge->setObjectName(QStringLiteral("sbAge"));

        Age->addWidget(sbAge);

        widget1 = new QWidget(AddAnimal);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(110, 150, 95, 24));
        Size = new QHBoxLayout(widget1);
        Size->setObjectName(QStringLiteral("Size"));
        Size->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        Size->addWidget(label);

        cbSize = new QComboBox(widget1);
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->setObjectName(QStringLiteral("cbSize"));

        Size->addWidget(cbSize);

        widget2 = new QWidget(AddAnimal);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(110, 110, 129, 24));
        Breed = new QHBoxLayout(widget2);
        Breed->setObjectName(QStringLiteral("Breed"));
        Breed->setContentsMargins(0, 0, 0, 0);
        lbBreed = new QLabel(widget2);
        lbBreed->setObjectName(QStringLiteral("lbBreed"));

        Breed->addWidget(lbBreed);

        txtSpeciesBox = new QLineEdit(widget2);
        txtSpeciesBox->setObjectName(QStringLiteral("txtSpeciesBox"));

        Breed->addWidget(txtSpeciesBox);

        widget3 = new QWidget(AddAnimal);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(110, 80, 126, 22));
        Species = new QHBoxLayout(widget3);
        Species->setObjectName(QStringLiteral("Species"));
        Species->setContentsMargins(0, 0, 0, 0);
        lbSpecies = new QLabel(widget3);
        lbSpecies->setObjectName(QStringLiteral("lbSpecies"));

        Species->addWidget(lbSpecies);

        rbDog = new QRadioButton(widget3);
        groupBreed = new QButtonGroup(AddAnimal);
        groupBreed->setObjectName(QStringLiteral("groupBreed"));
        groupBreed->addButton(rbDog);
        rbDog->setObjectName(QStringLiteral("rbDog"));

        Species->addWidget(rbDog);

        rbCat = new QRadioButton(widget3);
        groupBreed->addButton(rbCat);
        rbCat->setObjectName(QStringLiteral("rbCat"));

        Species->addWidget(rbCat);

        widget4 = new QWidget(AddAnimal);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(120, 40, 129, 24));
        Name = new QHBoxLayout(widget4);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setContentsMargins(0, 0, 0, 0);
        lbName = new QLabel(widget4);
        lbName->setObjectName(QStringLiteral("lbName"));

        Name->addWidget(lbName);

        txtNameBox = new QLineEdit(widget4);
        txtNameBox->setObjectName(QStringLiteral("txtNameBox"));

        Name->addWidget(txtNameBox);

        widget5 = new QWidget(AddAnimal);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(100, 210, 145, 22));
        Gender = new QHBoxLayout(widget5);
        Gender->setObjectName(QStringLiteral("Gender"));
        Gender->setContentsMargins(0, 0, 0, 0);
        lbGender = new QLabel(widget5);
        lbGender->setObjectName(QStringLiteral("lbGender"));

        Gender->addWidget(lbGender);

        rbMale = new QRadioButton(widget5);
        groupGender = new QButtonGroup(AddAnimal);
        groupGender->setObjectName(QStringLiteral("groupGender"));
        groupGender->addButton(rbMale);
        rbMale->setObjectName(QStringLiteral("rbMale"));

        Gender->addWidget(rbMale);

        rbFemale = new QRadioButton(widget5);
        groupGender->addButton(rbFemale);
        rbFemale->setObjectName(QStringLiteral("rbFemale"));

        Gender->addWidget(rbFemale);

        widget6 = new QWidget(AddAnimal);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(110, 260, 95, 24));
        Fur = new QHBoxLayout(widget6);
        Fur->setObjectName(QStringLiteral("Fur"));
        Fur->setContentsMargins(0, 0, 0, 0);
        lbFur = new QLabel(widget6);
        lbFur->setObjectName(QStringLiteral("lbFur"));

        Fur->addWidget(lbFur);

        cbFur = new QComboBox(widget6);
        cbFur->addItem(QString());
        cbFur->addItem(QString());
        cbFur->addItem(QString());
        cbFur->setObjectName(QStringLiteral("cbFur"));

        Fur->addWidget(cbFur);


        retranslateUi(AddAnimal);

        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", nullptr));
        lbAge->setText(QApplication::translate("AddAnimal", "Age:", nullptr));
        label->setText(QApplication::translate("AddAnimal", "Size:", nullptr));
        cbSize->setItemText(0, QApplication::translate("AddAnimal", "Teacup", nullptr));
        cbSize->setItemText(1, QApplication::translate("AddAnimal", "Small", nullptr));
        cbSize->setItemText(2, QApplication::translate("AddAnimal", "Medium", nullptr));
        cbSize->setItemText(3, QApplication::translate("AddAnimal", "Large", nullptr));

        lbBreed->setText(QApplication::translate("AddAnimal", "Breed:", nullptr));
        lbSpecies->setText(QApplication::translate("AddAnimal", "Species:", nullptr));
        rbDog->setText(QApplication::translate("AddAnimal", "Dog", nullptr));
        rbCat->setText(QApplication::translate("AddAnimal", "Cat", nullptr));
        lbName->setText(QApplication::translate("AddAnimal", "Name:", nullptr));
        lbGender->setText(QApplication::translate("AddAnimal", "Gender:", nullptr));
        rbMale->setText(QApplication::translate("AddAnimal", "Male", nullptr));
        rbFemale->setText(QApplication::translate("AddAnimal", "Female", nullptr));
        lbFur->setText(QApplication::translate("AddAnimal", "Fur: ", nullptr));
        cbFur->setItemText(0, QApplication::translate("AddAnimal", "Short", nullptr));
        cbFur->setItemText(1, QApplication::translate("AddAnimal", "Long", nullptr));
        cbFur->setItemText(2, QApplication::translate("AddAnimal", "Hairless", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
