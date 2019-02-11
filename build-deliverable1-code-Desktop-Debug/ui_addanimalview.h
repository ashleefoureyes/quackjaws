/********************************************************************************
** Form generated from reading UI file 'addanimalview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMALVIEW_H
#define UI_ADDANIMALVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            AddAnimalView->setObjectName(QStringLiteral("AddAnimalView"));
        AddAnimalView->resize(400, 419);
        submitButton = new QPushButton(AddAnimalView);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(140, 380, 114, 32));
        submitButton->setStyleSheet(QLatin1String("QPushButton#submitButton{\n"
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
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 20, 71, 20));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica Neue"));
        font.setPointSize(14);
        label_9->setFont(font);
        widget = new QWidget(AddAnimalView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(104, 197, 191, 23));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);

        widget1 = new QWidget(AddAnimalView);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(104, 166, 191, 32));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        sizeBox = new QComboBox(widget1);
        sizeBox->setObjectName(QStringLiteral("sizeBox"));

        horizontalLayout_5->addWidget(sizeBox);

        widget2 = new QWidget(AddAnimalView);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(104, 258, 191, 32));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        hairBox = new QComboBox(widget2);
        hairBox->setObjectName(QStringLiteral("hairBox"));

        horizontalLayout_2->addWidget(hairBox);

        widget3 = new QWidget(AddAnimalView);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(104, 289, 191, 23));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        checkBox = new QCheckBox(widget3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        widget4 = new QWidget(AddAnimalView);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(104, 72, 191, 23));
        horizontalLayout_8 = new QHBoxLayout(widget4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        lineEdit = new QLineEdit(widget4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_8->addWidget(lineEdit);

        widget5 = new QWidget(AddAnimalView);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(104, 227, 189, 22));
        horizontalLayout_3 = new QHBoxLayout(widget5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        maleSelect = new QRadioButton(widget5);
        maleSelect->setObjectName(QStringLiteral("maleSelect"));

        horizontalLayout_3->addWidget(maleSelect);

        femaleSelect = new QRadioButton(widget5);
        femaleSelect->setObjectName(QStringLiteral("femaleSelect"));

        horizontalLayout_3->addWidget(femaleSelect);

        widget6 = new QWidget(AddAnimalView);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(104, 104, 191, 22));
        horizontalLayout_7 = new QHBoxLayout(widget6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget6);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        catSelect = new QRadioButton(widget6);
        catSelect->setObjectName(QStringLiteral("catSelect"));

        horizontalLayout_7->addWidget(catSelect);

        dogSelect = new QRadioButton(widget6);
        dogSelect->setObjectName(QStringLiteral("dogSelect"));

        horizontalLayout_7->addWidget(dogSelect);

        widget7 = new QWidget(AddAnimalView);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(104, 135, 191, 23));
        horizontalLayout_6 = new QHBoxLayout(widget7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        retranslateUi(AddAnimalView);

        QMetaObject::connectSlotsByName(AddAnimalView);
    } // setupUi

    void retranslateUi(QWidget *AddAnimalView)
    {
        AddAnimalView->setWindowTitle(QApplication::translate("AddAnimalView", "Form", Q_NULLPTR));
        submitButton->setText(QApplication::translate("AddAnimalView", "Submit", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddAnimalView", "Add Animal", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddAnimalView", "Age (yrs)", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddAnimalView", "Size", Q_NULLPTR));
        sizeBox->clear();
        sizeBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimalView", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddAnimalView", "Small", Q_NULLPTR)
         << QApplication::translate("AddAnimalView", "Medium", Q_NULLPTR)
         << QApplication::translate("AddAnimalView", "Large", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("AddAnimalView", "Fur", Q_NULLPTR));
        hairBox->clear();
        hairBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimalView", "Hairless", Q_NULLPTR)
         << QApplication::translate("AddAnimalView", "Short", Q_NULLPTR)
         << QApplication::translate("AddAnimalView", "Long", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("AddAnimalView", "Hypoallergenic", Q_NULLPTR));
        checkBox->setText(QApplication::translate("AddAnimalView", "Yes", Q_NULLPTR));
        label->setText(QApplication::translate("AddAnimalView", "Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddAnimalView", "Gender", Q_NULLPTR));
        maleSelect->setText(QApplication::translate("AddAnimalView", "Male", Q_NULLPTR));
        femaleSelect->setText(QApplication::translate("AddAnimalView", "Female", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddAnimalView", "Species", Q_NULLPTR));
        catSelect->setText(QApplication::translate("AddAnimalView", "Cat", Q_NULLPTR));
        dogSelect->setText(QApplication::translate("AddAnimalView", "Dog", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddAnimalView", "Breed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddAnimalView: public Ui_AddAnimalView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMALVIEW_H
