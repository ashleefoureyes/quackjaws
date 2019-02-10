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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *sizeBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *hairBox;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QCheckBox *checkBox;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QRadioButton *maleSelect;
    QRadioButton *femaleSelect;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QRadioButton *catSelect;
    QRadioButton *dogSelect;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *AddAnimalView)
    {
        if (AddAnimalView->objectName().isEmpty())
            AddAnimalView->setObjectName(QString::fromUtf8("AddAnimalView"));
        AddAnimalView->resize(400, 419);
        submitButton = new QPushButton(AddAnimalView);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(140, 380, 114, 32));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton#submitButton{\n"
"\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 lightBlue);\n"
"	border: 1px lightgrey;\n"
"	border-radius: 5px;\n"
"\n"
"\n"
"}\n"
"\n"
""));
        label_9 = new QLabel(AddAnimalView);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 20, 71, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica Neue"));
        font.setPointSize(14);
        label_9->setFont(font);
        widget = new QWidget(AddAnimalView);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(104, 197, 191, 23));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);

        widget1 = new QWidget(AddAnimalView);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(104, 166, 191, 32));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        sizeBox = new QComboBox(widget1);
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->setObjectName(QString::fromUtf8("sizeBox"));

        horizontalLayout_5->addWidget(sizeBox);

        widget2 = new QWidget(AddAnimalView);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(104, 258, 191, 32));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        hairBox = new QComboBox(widget2);
        hairBox->addItem(QString());
        hairBox->addItem(QString());
        hairBox->addItem(QString());
        hairBox->setObjectName(QString::fromUtf8("hairBox"));

        horizontalLayout_2->addWidget(hairBox);

        widget3 = new QWidget(AddAnimalView);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(104, 289, 191, 23));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        checkBox = new QCheckBox(widget3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        widget4 = new QWidget(AddAnimalView);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(104, 72, 191, 23));
        horizontalLayout_8 = new QHBoxLayout(widget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        lineEdit = new QLineEdit(widget4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_8->addWidget(lineEdit);

        widget5 = new QWidget(AddAnimalView);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(104, 227, 189, 22));
        horizontalLayout_3 = new QHBoxLayout(widget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        maleSelect = new QRadioButton(widget5);
        maleSelect->setObjectName(QString::fromUtf8("maleSelect"));

        horizontalLayout_3->addWidget(maleSelect);

        femaleSelect = new QRadioButton(widget5);
        femaleSelect->setObjectName(QString::fromUtf8("femaleSelect"));

        horizontalLayout_3->addWidget(femaleSelect);

        widget6 = new QWidget(AddAnimalView);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(104, 104, 191, 22));
        horizontalLayout_7 = new QHBoxLayout(widget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        catSelect = new QRadioButton(widget6);
        catSelect->setObjectName(QString::fromUtf8("catSelect"));

        horizontalLayout_7->addWidget(catSelect);

        dogSelect = new QRadioButton(widget6);
        dogSelect->setObjectName(QString::fromUtf8("dogSelect"));

        horizontalLayout_7->addWidget(dogSelect);

        widget7 = new QWidget(AddAnimalView);
        widget7->setObjectName(QString::fromUtf8("widget7"));
        widget7->setGeometry(QRect(104, 135, 191, 23));
        horizontalLayout_6 = new QHBoxLayout(widget7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        retranslateUi(AddAnimalView);

        QMetaObject::connectSlotsByName(AddAnimalView);
    } // setupUi

    void retranslateUi(QWidget *AddAnimalView)
    {
        AddAnimalView->setWindowTitle(QCoreApplication::translate("AddAnimalView", "Form", nullptr));
        submitButton->setText(QCoreApplication::translate("AddAnimalView", "Submit", nullptr));
        label_9->setText(QCoreApplication::translate("AddAnimalView", "Add Animal", nullptr));
        label_5->setText(QCoreApplication::translate("AddAnimalView", "Age (yrs)", nullptr));
        label_4->setText(QCoreApplication::translate("AddAnimalView", "Size", nullptr));
        sizeBox->setItemText(0, QCoreApplication::translate("AddAnimalView", "Teacup", nullptr));
        sizeBox->setItemText(1, QCoreApplication::translate("AddAnimalView", "Small", nullptr));
        sizeBox->setItemText(2, QCoreApplication::translate("AddAnimalView", "Medium", nullptr));
        sizeBox->setItemText(3, QCoreApplication::translate("AddAnimalView", "Large", nullptr));

        label_7->setText(QCoreApplication::translate("AddAnimalView", "Fur", nullptr));
        hairBox->setItemText(0, QCoreApplication::translate("AddAnimalView", "Hairless", nullptr));
        hairBox->setItemText(1, QCoreApplication::translate("AddAnimalView", "Short", nullptr));
        hairBox->setItemText(2, QCoreApplication::translate("AddAnimalView", "Long", nullptr));

        label_8->setText(QCoreApplication::translate("AddAnimalView", "Hypoallergenic", nullptr));
        checkBox->setText(QCoreApplication::translate("AddAnimalView", "Yes", nullptr));
        label->setText(QCoreApplication::translate("AddAnimalView", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("AddAnimalView", "Gender", nullptr));
        maleSelect->setText(QCoreApplication::translate("AddAnimalView", "Male", nullptr));
        femaleSelect->setText(QCoreApplication::translate("AddAnimalView", "Female", nullptr));
        label_2->setText(QCoreApplication::translate("AddAnimalView", "Species", nullptr));
        catSelect->setText(QCoreApplication::translate("AddAnimalView", "Cat", nullptr));
        dogSelect->setText(QCoreApplication::translate("AddAnimalView", "Dog", nullptr));
        label_3->setText(QCoreApplication::translate("AddAnimalView", "Breed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAnimalView: public Ui_AddAnimalView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMALVIEW_H
