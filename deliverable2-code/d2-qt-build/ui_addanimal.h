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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnimal
{
public:
    QGridLayout *gridLayout;
    QPushButton *bSubmit;
    QPushButton *bExit;
    QTabWidget *Tabs;
    QWidget *tabPhysical;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *lbAnimalPhoto;
    QPushButton *bUpload;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *Name;
    QLabel *lbName;
    QLineEdit *txtNameBox;
    QHBoxLayout *Species;
    QLabel *lbSpecies;
    QRadioButton *rbDog;
    QRadioButton *rbCat;
    QHBoxLayout *Breed;
    QLabel *lbBreed;
    QLineEdit *txtBreedBox;
    QHBoxLayout *Size;
    QLabel *label;
    QComboBox *cbSize;
    QHBoxLayout *Age;
    QLabel *lbAge;
    QSpinBox *sbAge;
    QHBoxLayout *Gender;
    QLabel *lbGender;
    QRadioButton *rbMale;
    QRadioButton *rbFemale;
    QHBoxLayout *Fur;
    QLabel *lbFur;
    QComboBox *cbFur;
    QWidget *tabNonPhysical;
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *likesTravelling;
    QLabel *lbLikesTravel;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbTravel1;
    QRadioButton *rbTravel2;
    QRadioButton *rbTravel3;
    QRadioButton *rbTravel4;
    QRadioButton *rbTravel5;
    QWidget *layoutWidget_10;
    QHBoxLayout *messy;
    QLabel *lbMessy;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *rbMessy1;
    QRadioButton *rbMessy2;
    QRadioButton *rbMessy4;
    QRadioButton *rbMessy5;
    QRadioButton *rbMessy3;
    QWidget *layoutWidget_2;
    QHBoxLayout *goodWithAnimals;
    QLabel *lbGoodWithAnimals;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbGdAnimals1;
    QRadioButton *rbGdAnimals2;
    QRadioButton *rbGdAnimals3;
    QRadioButton *rbGdAnimals4;
    QRadioButton *rbGdAnimals5;
    QWidget *layoutWidget_8;
    QHBoxLayout *noise;
    QLabel *lbNoise;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *rbNoise1;
    QRadioButton *rbNoise2;
    QRadioButton *rbNoise3;
    QRadioButton *rbNoise4;
    QRadioButton *rbNoise5;
    QWidget *layoutWidget1;
    QHBoxLayout *goodWithChildren;
    QLabel *lbGoodWithChildren;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbChildren1;
    QRadioButton *rbChildren2;
    QRadioButton *rbChildren3;
    QRadioButton *rbChildren4;
    QRadioButton *rbChildren5;
    QWidget *layoutWidget_9;
    QHBoxLayout *affection;
    QLabel *lbAffection;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *rbAffection1;
    QRadioButton *rbAffection2;
    QRadioButton *rbAffection3;
    QRadioButton *rbAffection4;
    QRadioButton *rbAffection5;
    QWidget *layoutWidget_3;
    QHBoxLayout *lotsOfEnergy;
    QLabel *lbEnergy;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rbEnergy1;
    QRadioButton *rbEnergy2;
    QRadioButton *rbEnergy3;
    QRadioButton *rbEnergy4;
    QRadioButton *rbEnergy5;
    QWidget *layoutWidget_7;
    QHBoxLayout *crowds;
    QLabel *lbCrowds;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *rbCrowds1;
    QRadioButton *rbCrowds2;
    QRadioButton *rbCrowds3;
    QRadioButton *rbCrowds4;
    QRadioButton *rbCrowds5;
    QWidget *layoutWidget_6;
    QHBoxLayout *strangers;
    QLabel *lbStrange;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *rbStrange1;
    QRadioButton *rbStrange2;
    QRadioButton *rbStrange3;
    QRadioButton *rbStrange4;
    QRadioButton *rbStrange5;
    QWidget *layoutWidget_5;
    QHBoxLayout *protect;
    QLabel *lbProtect;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rbProtect1;
    QRadioButton *rbProtect2;
    QRadioButton *rbProtect3;
    QRadioButton *rbProtect4;
    QRadioButton *rbProtect5;
    QWidget *layoutWidget_4;
    QHBoxLayout *isVeryFearful;
    QLabel *lbFear;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *rbFear1;
    QRadioButton *rbFear2;
    QRadioButton *rbFear3;
    QRadioButton *rbFear4;
    QRadioButton *rbFear5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbHistory;
    QComboBox *cbHistory;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rbIndoor;
    QRadioButton *rbOutdoor;
    QRadioButton *rbBoth;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *boxNocturnal;
    QCheckBox *boxAllergies;
    QButtonGroup *groupChildren;
    QButtonGroup *groupProtect;
    QButtonGroup *groupTravel;
    QButtonGroup *groupCrowds;
    QButtonGroup *groupLifestyle;
    QButtonGroup *groupStrange;
    QButtonGroup *groupGender;
    QButtonGroup *groupAffection;
    QButtonGroup *groupGoodAnimals;
    QButtonGroup *groupNoise;
    QButtonGroup *groupEnergy;
    QButtonGroup *groupFear;
    QButtonGroup *groupBreed;
    QButtonGroup *groupMessy;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QStringLiteral("AddAnimal"));
        AddAnimal->resize(258, 397);
        AddAnimal->setMinimumSize(QSize(258, 397));
        AddAnimal->setMaximumSize(QSize(258, 398));
        gridLayout = new QGridLayout(AddAnimal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bSubmit = new QPushButton(AddAnimal);
        bSubmit->setObjectName(QStringLiteral("bSubmit"));

        gridLayout->addWidget(bSubmit, 1, 0, 1, 1);

        bExit = new QPushButton(AddAnimal);
        bExit->setObjectName(QStringLiteral("bExit"));

        gridLayout->addWidget(bExit, 1, 1, 1, 1);

        Tabs = new QTabWidget(AddAnimal);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        tabPhysical = new QWidget();
        tabPhysical->setObjectName(QStringLiteral("tabPhysical"));
        verticalLayout_3 = new QVBoxLayout(tabPhysical);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_3 = new QWidget(tabPhysical);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lbAnimalPhoto = new QLabel(widget_3);
        lbAnimalPhoto->setObjectName(QStringLiteral("lbAnimalPhoto"));
        lbAnimalPhoto->setMinimumSize(QSize(218, 95));
        lbAnimalPhoto->setMaximumSize(QSize(218, 95));

        verticalLayout_5->addWidget(lbAnimalPhoto);

        bUpload = new QPushButton(widget_3);
        bUpload->setObjectName(QStringLiteral("bUpload"));

        verticalLayout_5->addWidget(bUpload);


        verticalLayout_3->addWidget(widget_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Name = new QHBoxLayout();
        Name->setObjectName(QStringLiteral("Name"));
        lbName = new QLabel(tabPhysical);
        lbName->setObjectName(QStringLiteral("lbName"));

        Name->addWidget(lbName);

        txtNameBox = new QLineEdit(tabPhysical);
        txtNameBox->setObjectName(QStringLiteral("txtNameBox"));

        Name->addWidget(txtNameBox);


        verticalLayout_2->addLayout(Name);

        Species = new QHBoxLayout();
        Species->setObjectName(QStringLiteral("Species"));
        lbSpecies = new QLabel(tabPhysical);
        lbSpecies->setObjectName(QStringLiteral("lbSpecies"));

        Species->addWidget(lbSpecies);

        rbDog = new QRadioButton(tabPhysical);
        groupBreed = new QButtonGroup(AddAnimal);
        groupBreed->setObjectName(QStringLiteral("groupBreed"));
        groupBreed->setExclusive(true);
        groupBreed->addButton(rbDog);
        rbDog->setObjectName(QStringLiteral("rbDog"));
        rbDog->setChecked(false);

        Species->addWidget(rbDog);

        rbCat = new QRadioButton(tabPhysical);
        groupBreed->addButton(rbCat);
        rbCat->setObjectName(QStringLiteral("rbCat"));

        Species->addWidget(rbCat);


        verticalLayout_2->addLayout(Species);

        Breed = new QHBoxLayout();
        Breed->setObjectName(QStringLiteral("Breed"));
        lbBreed = new QLabel(tabPhysical);
        lbBreed->setObjectName(QStringLiteral("lbBreed"));

        Breed->addWidget(lbBreed);

        txtBreedBox = new QLineEdit(tabPhysical);
        txtBreedBox->setObjectName(QStringLiteral("txtBreedBox"));

        Breed->addWidget(txtBreedBox);


        verticalLayout_2->addLayout(Breed);

        Size = new QHBoxLayout();
        Size->setObjectName(QStringLiteral("Size"));
        label = new QLabel(tabPhysical);
        label->setObjectName(QStringLiteral("label"));

        Size->addWidget(label);

        cbSize = new QComboBox(tabPhysical);
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->addItem(QString());
        cbSize->setObjectName(QStringLiteral("cbSize"));

        Size->addWidget(cbSize);


        verticalLayout_2->addLayout(Size);

        Age = new QHBoxLayout();
        Age->setObjectName(QStringLiteral("Age"));
        lbAge = new QLabel(tabPhysical);
        lbAge->setObjectName(QStringLiteral("lbAge"));

        Age->addWidget(lbAge);

        sbAge = new QSpinBox(tabPhysical);
        sbAge->setObjectName(QStringLiteral("sbAge"));

        Age->addWidget(sbAge);


        verticalLayout_2->addLayout(Age);

        Gender = new QHBoxLayout();
        Gender->setObjectName(QStringLiteral("Gender"));
        lbGender = new QLabel(tabPhysical);
        lbGender->setObjectName(QStringLiteral("lbGender"));

        Gender->addWidget(lbGender);

        rbMale = new QRadioButton(tabPhysical);
        groupGender = new QButtonGroup(AddAnimal);
        groupGender->setObjectName(QStringLiteral("groupGender"));
        groupGender->setExclusive(true);
        groupGender->addButton(rbMale);
        rbMale->setObjectName(QStringLiteral("rbMale"));
        rbMale->setChecked(false);

        Gender->addWidget(rbMale);

        rbFemale = new QRadioButton(tabPhysical);
        groupGender->addButton(rbFemale);
        rbFemale->setObjectName(QStringLiteral("rbFemale"));

        Gender->addWidget(rbFemale);


        verticalLayout_2->addLayout(Gender);

        Fur = new QHBoxLayout();
        Fur->setObjectName(QStringLiteral("Fur"));
        lbFur = new QLabel(tabPhysical);
        lbFur->setObjectName(QStringLiteral("lbFur"));

        Fur->addWidget(lbFur);

        cbFur = new QComboBox(tabPhysical);
        cbFur->addItem(QString());
        cbFur->addItem(QString());
        cbFur->addItem(QString());
        cbFur->setObjectName(QStringLiteral("cbFur"));

        Fur->addWidget(cbFur);


        verticalLayout_2->addLayout(Fur);


        verticalLayout_3->addLayout(verticalLayout_2);

        Tabs->addTab(tabPhysical, QString());
        tabNonPhysical = new QWidget();
        tabNonPhysical->setObjectName(QStringLiteral("tabNonPhysical"));
        widget = new QWidget(tabNonPhysical);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(6, 6, 230, 221));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 221, 16));
        likesTravelling = new QHBoxLayout(layoutWidget);
        likesTravelling->setObjectName(QStringLiteral("likesTravelling"));
        likesTravelling->setContentsMargins(0, 0, 0, 0);
        lbLikesTravel = new QLabel(layoutWidget);
        lbLikesTravel->setObjectName(QStringLiteral("lbLikesTravel"));

        likesTravelling->addWidget(lbLikesTravel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbTravel1 = new QRadioButton(layoutWidget);
        groupTravel = new QButtonGroup(AddAnimal);
        groupTravel->setObjectName(QStringLiteral("groupTravel"));
        groupTravel->setExclusive(true);
        groupTravel->addButton(rbTravel1);
        rbTravel1->setObjectName(QStringLiteral("rbTravel1"));

        horizontalLayout->addWidget(rbTravel1);

        rbTravel2 = new QRadioButton(layoutWidget);
        groupTravel->addButton(rbTravel2);
        rbTravel2->setObjectName(QStringLiteral("rbTravel2"));

        horizontalLayout->addWidget(rbTravel2);

        rbTravel3 = new QRadioButton(layoutWidget);
        groupTravel->addButton(rbTravel3);
        rbTravel3->setObjectName(QStringLiteral("rbTravel3"));
        rbTravel3->setChecked(false);

        horizontalLayout->addWidget(rbTravel3);

        rbTravel4 = new QRadioButton(layoutWidget);
        groupTravel->addButton(rbTravel4);
        rbTravel4->setObjectName(QStringLiteral("rbTravel4"));

        horizontalLayout->addWidget(rbTravel4);

        rbTravel5 = new QRadioButton(layoutWidget);
        groupTravel->addButton(rbTravel5);
        rbTravel5->setObjectName(QStringLiteral("rbTravel5"));

        horizontalLayout->addWidget(rbTravel5);


        likesTravelling->addLayout(horizontalLayout);

        layoutWidget_10 = new QWidget(widget);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(0, 200, 221, 16));
        messy = new QHBoxLayout(layoutWidget_10);
        messy->setObjectName(QStringLiteral("messy"));
        messy->setContentsMargins(0, 0, 0, 0);
        lbMessy = new QLabel(layoutWidget_10);
        lbMessy->setObjectName(QStringLiteral("lbMessy"));

        messy->addWidget(lbMessy);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        rbMessy1 = new QRadioButton(layoutWidget_10);
        groupMessy = new QButtonGroup(AddAnimal);
        groupMessy->setObjectName(QStringLiteral("groupMessy"));
        groupMessy->setExclusive(true);
        groupMessy->addButton(rbMessy1);
        rbMessy1->setObjectName(QStringLiteral("rbMessy1"));

        horizontalLayout_14->addWidget(rbMessy1);

        rbMessy2 = new QRadioButton(layoutWidget_10);
        groupMessy->addButton(rbMessy2);
        rbMessy2->setObjectName(QStringLiteral("rbMessy2"));

        horizontalLayout_14->addWidget(rbMessy2);

        rbMessy4 = new QRadioButton(layoutWidget_10);
        groupMessy->addButton(rbMessy4);
        rbMessy4->setObjectName(QStringLiteral("rbMessy4"));
        rbMessy4->setChecked(false);

        horizontalLayout_14->addWidget(rbMessy4);

        rbMessy5 = new QRadioButton(layoutWidget_10);
        groupMessy->addButton(rbMessy5);
        rbMessy5->setObjectName(QStringLiteral("rbMessy5"));

        horizontalLayout_14->addWidget(rbMessy5);

        rbMessy3 = new QRadioButton(layoutWidget_10);
        groupMessy->addButton(rbMessy3);
        rbMessy3->setObjectName(QStringLiteral("rbMessy3"));

        horizontalLayout_14->addWidget(rbMessy3);


        messy->addLayout(horizontalLayout_14);

        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 40, 221, 16));
        goodWithAnimals = new QHBoxLayout(layoutWidget_2);
        goodWithAnimals->setObjectName(QStringLiteral("goodWithAnimals"));
        goodWithAnimals->setContentsMargins(0, 0, 0, 0);
        lbGoodWithAnimals = new QLabel(layoutWidget_2);
        lbGoodWithAnimals->setObjectName(QStringLiteral("lbGoodWithAnimals"));

        goodWithAnimals->addWidget(lbGoodWithAnimals);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        rbGdAnimals1 = new QRadioButton(layoutWidget_2);
        groupGoodAnimals = new QButtonGroup(AddAnimal);
        groupGoodAnimals->setObjectName(QStringLiteral("groupGoodAnimals"));
        groupGoodAnimals->setExclusive(true);
        groupGoodAnimals->addButton(rbGdAnimals1);
        rbGdAnimals1->setObjectName(QStringLiteral("rbGdAnimals1"));

        horizontalLayout_6->addWidget(rbGdAnimals1);

        rbGdAnimals2 = new QRadioButton(layoutWidget_2);
        groupGoodAnimals->addButton(rbGdAnimals2);
        rbGdAnimals2->setObjectName(QStringLiteral("rbGdAnimals2"));

        horizontalLayout_6->addWidget(rbGdAnimals2);

        rbGdAnimals3 = new QRadioButton(layoutWidget_2);
        groupGoodAnimals->addButton(rbGdAnimals3);
        rbGdAnimals3->setObjectName(QStringLiteral("rbGdAnimals3"));
        rbGdAnimals3->setChecked(false);

        horizontalLayout_6->addWidget(rbGdAnimals3);

        rbGdAnimals4 = new QRadioButton(layoutWidget_2);
        groupGoodAnimals->addButton(rbGdAnimals4);
        rbGdAnimals4->setObjectName(QStringLiteral("rbGdAnimals4"));

        horizontalLayout_6->addWidget(rbGdAnimals4);

        rbGdAnimals5 = new QRadioButton(layoutWidget_2);
        groupGoodAnimals->addButton(rbGdAnimals5);
        rbGdAnimals5->setObjectName(QStringLiteral("rbGdAnimals5"));

        horizontalLayout_6->addWidget(rbGdAnimals5);


        goodWithAnimals->addLayout(horizontalLayout_6);

        layoutWidget_8 = new QWidget(widget);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 100, 221, 16));
        noise = new QHBoxLayout(layoutWidget_8);
        noise->setObjectName(QStringLiteral("noise"));
        noise->setContentsMargins(0, 0, 0, 0);
        lbNoise = new QLabel(layoutWidget_8);
        lbNoise->setObjectName(QStringLiteral("lbNoise"));

        noise->addWidget(lbNoise);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        rbNoise1 = new QRadioButton(layoutWidget_8);
        groupNoise = new QButtonGroup(AddAnimal);
        groupNoise->setObjectName(QStringLiteral("groupNoise"));
        groupNoise->setExclusive(true);
        groupNoise->addButton(rbNoise1);
        rbNoise1->setObjectName(QStringLiteral("rbNoise1"));

        horizontalLayout_12->addWidget(rbNoise1);

        rbNoise2 = new QRadioButton(layoutWidget_8);
        groupNoise->addButton(rbNoise2);
        rbNoise2->setObjectName(QStringLiteral("rbNoise2"));

        horizontalLayout_12->addWidget(rbNoise2);

        rbNoise3 = new QRadioButton(layoutWidget_8);
        groupNoise->addButton(rbNoise3);
        rbNoise3->setObjectName(QStringLiteral("rbNoise3"));
        rbNoise3->setChecked(false);

        horizontalLayout_12->addWidget(rbNoise3);

        rbNoise4 = new QRadioButton(layoutWidget_8);
        groupNoise->addButton(rbNoise4);
        rbNoise4->setObjectName(QStringLiteral("rbNoise4"));

        horizontalLayout_12->addWidget(rbNoise4);

        rbNoise5 = new QRadioButton(layoutWidget_8);
        groupNoise->addButton(rbNoise5);
        rbNoise5->setObjectName(QStringLiteral("rbNoise5"));

        horizontalLayout_12->addWidget(rbNoise5);


        noise->addLayout(horizontalLayout_12);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 20, 221, 16));
        goodWithChildren = new QHBoxLayout(layoutWidget1);
        goodWithChildren->setObjectName(QStringLiteral("goodWithChildren"));
        goodWithChildren->setContentsMargins(0, 0, 0, 0);
        lbGoodWithChildren = new QLabel(layoutWidget1);
        lbGoodWithChildren->setObjectName(QStringLiteral("lbGoodWithChildren"));

        goodWithChildren->addWidget(lbGoodWithChildren);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rbChildren1 = new QRadioButton(layoutWidget1);
        groupChildren = new QButtonGroup(AddAnimal);
        groupChildren->setObjectName(QStringLiteral("groupChildren"));
        groupChildren->setExclusive(true);
        groupChildren->addButton(rbChildren1);
        rbChildren1->setObjectName(QStringLiteral("rbChildren1"));

        horizontalLayout_4->addWidget(rbChildren1);

        rbChildren2 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren2);
        rbChildren2->setObjectName(QStringLiteral("rbChildren2"));

        horizontalLayout_4->addWidget(rbChildren2);

        rbChildren3 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren3);
        rbChildren3->setObjectName(QStringLiteral("rbChildren3"));
        rbChildren3->setChecked(false);

        horizontalLayout_4->addWidget(rbChildren3);

        rbChildren4 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren4);
        rbChildren4->setObjectName(QStringLiteral("rbChildren4"));

        horizontalLayout_4->addWidget(rbChildren4);

        rbChildren5 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren5);
        rbChildren5->setObjectName(QStringLiteral("rbChildren5"));

        horizontalLayout_4->addWidget(rbChildren5);


        goodWithChildren->addLayout(horizontalLayout_4);

        layoutWidget_9 = new QWidget(widget);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(0, 180, 221, 16));
        affection = new QHBoxLayout(layoutWidget_9);
        affection->setObjectName(QStringLiteral("affection"));
        affection->setContentsMargins(0, 0, 0, 0);
        lbAffection = new QLabel(layoutWidget_9);
        lbAffection->setObjectName(QStringLiteral("lbAffection"));

        affection->addWidget(lbAffection);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        rbAffection1 = new QRadioButton(layoutWidget_9);
        groupAffection = new QButtonGroup(AddAnimal);
        groupAffection->setObjectName(QStringLiteral("groupAffection"));
        groupAffection->setExclusive(true);
        groupAffection->addButton(rbAffection1);
        rbAffection1->setObjectName(QStringLiteral("rbAffection1"));

        horizontalLayout_13->addWidget(rbAffection1);

        rbAffection2 = new QRadioButton(layoutWidget_9);
        groupAffection->addButton(rbAffection2);
        rbAffection2->setObjectName(QStringLiteral("rbAffection2"));

        horizontalLayout_13->addWidget(rbAffection2);

        rbAffection3 = new QRadioButton(layoutWidget_9);
        groupAffection->addButton(rbAffection3);
        rbAffection3->setObjectName(QStringLiteral("rbAffection3"));
        rbAffection3->setChecked(false);

        horizontalLayout_13->addWidget(rbAffection3);

        rbAffection4 = new QRadioButton(layoutWidget_9);
        groupAffection->addButton(rbAffection4);
        rbAffection4->setObjectName(QStringLiteral("rbAffection4"));

        horizontalLayout_13->addWidget(rbAffection4);

        rbAffection5 = new QRadioButton(layoutWidget_9);
        groupAffection->addButton(rbAffection5);
        rbAffection5->setObjectName(QStringLiteral("rbAffection5"));

        horizontalLayout_13->addWidget(rbAffection5);


        affection->addLayout(horizontalLayout_13);

        layoutWidget_3 = new QWidget(widget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 140, 221, 16));
        lotsOfEnergy = new QHBoxLayout(layoutWidget_3);
        lotsOfEnergy->setObjectName(QStringLiteral("lotsOfEnergy"));
        lotsOfEnergy->setContentsMargins(0, 0, 0, 0);
        lbEnergy = new QLabel(layoutWidget_3);
        lbEnergy->setObjectName(QStringLiteral("lbEnergy"));

        lotsOfEnergy->addWidget(lbEnergy);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        rbEnergy1 = new QRadioButton(layoutWidget_3);
        groupEnergy = new QButtonGroup(AddAnimal);
        groupEnergy->setObjectName(QStringLiteral("groupEnergy"));
        groupEnergy->setExclusive(true);
        groupEnergy->addButton(rbEnergy1);
        rbEnergy1->setObjectName(QStringLiteral("rbEnergy1"));

        horizontalLayout_7->addWidget(rbEnergy1);

        rbEnergy2 = new QRadioButton(layoutWidget_3);
        groupEnergy->addButton(rbEnergy2);
        rbEnergy2->setObjectName(QStringLiteral("rbEnergy2"));

        horizontalLayout_7->addWidget(rbEnergy2);

        rbEnergy3 = new QRadioButton(layoutWidget_3);
        groupEnergy->addButton(rbEnergy3);
        rbEnergy3->setObjectName(QStringLiteral("rbEnergy3"));
        rbEnergy3->setChecked(false);

        horizontalLayout_7->addWidget(rbEnergy3);

        rbEnergy4 = new QRadioButton(layoutWidget_3);
        groupEnergy->addButton(rbEnergy4);
        rbEnergy4->setObjectName(QStringLiteral("rbEnergy4"));

        horizontalLayout_7->addWidget(rbEnergy4);

        rbEnergy5 = new QRadioButton(layoutWidget_3);
        groupEnergy->addButton(rbEnergy5);
        rbEnergy5->setObjectName(QStringLiteral("rbEnergy5"));

        horizontalLayout_7->addWidget(rbEnergy5);


        lotsOfEnergy->addLayout(horizontalLayout_7);

        layoutWidget_7 = new QWidget(widget);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(0, 80, 221, 16));
        crowds = new QHBoxLayout(layoutWidget_7);
        crowds->setObjectName(QStringLiteral("crowds"));
        crowds->setContentsMargins(0, 0, 0, 0);
        lbCrowds = new QLabel(layoutWidget_7);
        lbCrowds->setObjectName(QStringLiteral("lbCrowds"));

        crowds->addWidget(lbCrowds);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        rbCrowds1 = new QRadioButton(layoutWidget_7);
        groupCrowds = new QButtonGroup(AddAnimal);
        groupCrowds->setObjectName(QStringLiteral("groupCrowds"));
        groupCrowds->setExclusive(true);
        groupCrowds->addButton(rbCrowds1);
        rbCrowds1->setObjectName(QStringLiteral("rbCrowds1"));

        horizontalLayout_11->addWidget(rbCrowds1);

        rbCrowds2 = new QRadioButton(layoutWidget_7);
        groupCrowds->addButton(rbCrowds2);
        rbCrowds2->setObjectName(QStringLiteral("rbCrowds2"));

        horizontalLayout_11->addWidget(rbCrowds2);

        rbCrowds3 = new QRadioButton(layoutWidget_7);
        groupCrowds->addButton(rbCrowds3);
        rbCrowds3->setObjectName(QStringLiteral("rbCrowds3"));
        rbCrowds3->setChecked(false);

        horizontalLayout_11->addWidget(rbCrowds3);

        rbCrowds4 = new QRadioButton(layoutWidget_7);
        groupCrowds->addButton(rbCrowds4);
        rbCrowds4->setObjectName(QStringLiteral("rbCrowds4"));

        horizontalLayout_11->addWidget(rbCrowds4);

        rbCrowds5 = new QRadioButton(layoutWidget_7);
        groupCrowds->addButton(rbCrowds5);
        rbCrowds5->setObjectName(QStringLiteral("rbCrowds5"));

        horizontalLayout_11->addWidget(rbCrowds5);


        crowds->addLayout(horizontalLayout_11);

        layoutWidget_6 = new QWidget(widget);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(0, 60, 221, 16));
        strangers = new QHBoxLayout(layoutWidget_6);
        strangers->setObjectName(QStringLiteral("strangers"));
        strangers->setContentsMargins(0, 0, 0, 0);
        lbStrange = new QLabel(layoutWidget_6);
        lbStrange->setObjectName(QStringLiteral("lbStrange"));

        strangers->addWidget(lbStrange);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        rbStrange1 = new QRadioButton(layoutWidget_6);
        groupStrange = new QButtonGroup(AddAnimal);
        groupStrange->setObjectName(QStringLiteral("groupStrange"));
        groupStrange->setExclusive(true);
        groupStrange->addButton(rbStrange1);
        rbStrange1->setObjectName(QStringLiteral("rbStrange1"));

        horizontalLayout_10->addWidget(rbStrange1);

        rbStrange2 = new QRadioButton(layoutWidget_6);
        groupStrange->addButton(rbStrange2);
        rbStrange2->setObjectName(QStringLiteral("rbStrange2"));

        horizontalLayout_10->addWidget(rbStrange2);

        rbStrange3 = new QRadioButton(layoutWidget_6);
        groupStrange->addButton(rbStrange3);
        rbStrange3->setObjectName(QStringLiteral("rbStrange3"));
        rbStrange3->setChecked(false);

        horizontalLayout_10->addWidget(rbStrange3);

        rbStrange4 = new QRadioButton(layoutWidget_6);
        groupStrange->addButton(rbStrange4);
        rbStrange4->setObjectName(QStringLiteral("rbStrange4"));

        horizontalLayout_10->addWidget(rbStrange4);

        rbStrange5 = new QRadioButton(layoutWidget_6);
        groupStrange->addButton(rbStrange5);
        rbStrange5->setObjectName(QStringLiteral("rbStrange5"));

        horizontalLayout_10->addWidget(rbStrange5);


        strangers->addLayout(horizontalLayout_10);

        layoutWidget_5 = new QWidget(widget);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(0, 120, 221, 16));
        protect = new QHBoxLayout(layoutWidget_5);
        protect->setObjectName(QStringLiteral("protect"));
        protect->setContentsMargins(0, 0, 0, 0);
        lbProtect = new QLabel(layoutWidget_5);
        lbProtect->setObjectName(QStringLiteral("lbProtect"));

        protect->addWidget(lbProtect);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        rbProtect1 = new QRadioButton(layoutWidget_5);
        groupProtect = new QButtonGroup(AddAnimal);
        groupProtect->setObjectName(QStringLiteral("groupProtect"));
        groupProtect->setExclusive(true);
        groupProtect->addButton(rbProtect1);
        rbProtect1->setObjectName(QStringLiteral("rbProtect1"));

        horizontalLayout_9->addWidget(rbProtect1);

        rbProtect2 = new QRadioButton(layoutWidget_5);
        groupProtect->addButton(rbProtect2);
        rbProtect2->setObjectName(QStringLiteral("rbProtect2"));

        horizontalLayout_9->addWidget(rbProtect2);

        rbProtect3 = new QRadioButton(layoutWidget_5);
        groupProtect->addButton(rbProtect3);
        rbProtect3->setObjectName(QStringLiteral("rbProtect3"));
        rbProtect3->setChecked(false);

        horizontalLayout_9->addWidget(rbProtect3);

        rbProtect4 = new QRadioButton(layoutWidget_5);
        groupProtect->addButton(rbProtect4);
        rbProtect4->setObjectName(QStringLiteral("rbProtect4"));

        horizontalLayout_9->addWidget(rbProtect4);

        rbProtect5 = new QRadioButton(layoutWidget_5);
        groupProtect->addButton(rbProtect5);
        rbProtect5->setObjectName(QStringLiteral("rbProtect5"));

        horizontalLayout_9->addWidget(rbProtect5);


        protect->addLayout(horizontalLayout_9);

        layoutWidget_4 = new QWidget(widget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 160, 221, 16));
        isVeryFearful = new QHBoxLayout(layoutWidget_4);
        isVeryFearful->setObjectName(QStringLiteral("isVeryFearful"));
        isVeryFearful->setContentsMargins(0, 0, 0, 0);
        lbFear = new QLabel(layoutWidget_4);
        lbFear->setObjectName(QStringLiteral("lbFear"));

        isVeryFearful->addWidget(lbFear);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        rbFear1 = new QRadioButton(layoutWidget_4);
        groupFear = new QButtonGroup(AddAnimal);
        groupFear->setObjectName(QStringLiteral("groupFear"));
        groupFear->setExclusive(true);
        groupFear->addButton(rbFear1);
        rbFear1->setObjectName(QStringLiteral("rbFear1"));

        horizontalLayout_8->addWidget(rbFear1);

        rbFear2 = new QRadioButton(layoutWidget_4);
        groupFear->addButton(rbFear2);
        rbFear2->setObjectName(QStringLiteral("rbFear2"));

        horizontalLayout_8->addWidget(rbFear2);

        rbFear3 = new QRadioButton(layoutWidget_4);
        groupFear->addButton(rbFear3);
        rbFear3->setObjectName(QStringLiteral("rbFear3"));
        rbFear3->setChecked(false);

        horizontalLayout_8->addWidget(rbFear3);

        rbFear4 = new QRadioButton(layoutWidget_4);
        groupFear->addButton(rbFear4);
        rbFear4->setObjectName(QStringLiteral("rbFear4"));

        horizontalLayout_8->addWidget(rbFear4);

        rbFear5 = new QRadioButton(layoutWidget_4);
        groupFear->addButton(rbFear5);
        rbFear5->setObjectName(QStringLiteral("rbFear5"));

        horizontalLayout_8->addWidget(rbFear5);


        isVeryFearful->addLayout(horizontalLayout_8);

        widget_2 = new QWidget(tabNonPhysical);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 230, 231, 88));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        line = new QFrame(widget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbHistory = new QLabel(widget_2);
        lbHistory->setObjectName(QStringLiteral("lbHistory"));

        horizontalLayout_2->addWidget(lbHistory);

        cbHistory = new QComboBox(widget_2);
        cbHistory->addItem(QString());
        cbHistory->addItem(QString());
        cbHistory->addItem(QString());
        cbHistory->addItem(QString());
        cbHistory->setObjectName(QStringLiteral("cbHistory"));

        horizontalLayout_2->addWidget(cbHistory);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rbIndoor = new QRadioButton(widget_2);
        groupLifestyle = new QButtonGroup(AddAnimal);
        groupLifestyle->setObjectName(QStringLiteral("groupLifestyle"));
        groupLifestyle->setExclusive(true);
        groupLifestyle->addButton(rbIndoor);
        rbIndoor->setObjectName(QStringLiteral("rbIndoor"));
        rbIndoor->setChecked(true);

        horizontalLayout_3->addWidget(rbIndoor);

        rbOutdoor = new QRadioButton(widget_2);
        groupLifestyle->addButton(rbOutdoor);
        rbOutdoor->setObjectName(QStringLiteral("rbOutdoor"));

        horizontalLayout_3->addWidget(rbOutdoor);

        rbBoth = new QRadioButton(widget_2);
        groupLifestyle->addButton(rbBoth);
        rbBoth->setObjectName(QStringLiteral("rbBoth"));

        horizontalLayout_3->addWidget(rbBoth);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        boxNocturnal = new QCheckBox(widget_2);
        boxNocturnal->setObjectName(QStringLiteral("boxNocturnal"));

        horizontalLayout_15->addWidget(boxNocturnal);

        boxAllergies = new QCheckBox(widget_2);
        boxAllergies->setObjectName(QStringLiteral("boxAllergies"));

        horizontalLayout_15->addWidget(boxAllergies);


        verticalLayout_4->addLayout(horizontalLayout_15);

        Tabs->addTab(tabNonPhysical, QString());

        gridLayout->addWidget(Tabs, 0, 0, 1, 2);


        retranslateUi(AddAnimal);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", nullptr));
        bSubmit->setText(QApplication::translate("AddAnimal", "Submit", nullptr));
        bExit->setText(QApplication::translate("AddAnimal", "Exit", nullptr));
        lbAnimalPhoto->setText(QString());
        bUpload->setText(QApplication::translate("AddAnimal", "Upload Photo", nullptr));
        lbName->setText(QApplication::translate("AddAnimal", "Name:", nullptr));
        lbSpecies->setText(QApplication::translate("AddAnimal", "Species:", nullptr));
        rbDog->setText(QApplication::translate("AddAnimal", "Dog", nullptr));
        rbCat->setText(QApplication::translate("AddAnimal", "Cat", nullptr));
        lbBreed->setText(QApplication::translate("AddAnimal", "Breed:", nullptr));
        label->setText(QApplication::translate("AddAnimal", "Size:", nullptr));
        cbSize->setItemText(0, QApplication::translate("AddAnimal", "Teacup", nullptr));
        cbSize->setItemText(1, QApplication::translate("AddAnimal", "Small", nullptr));
        cbSize->setItemText(2, QApplication::translate("AddAnimal", "Medium", nullptr));
        cbSize->setItemText(3, QApplication::translate("AddAnimal", "Large", nullptr));

        lbAge->setText(QApplication::translate("AddAnimal", "Age:", nullptr));
        lbGender->setText(QApplication::translate("AddAnimal", "Gender:", nullptr));
        rbMale->setText(QApplication::translate("AddAnimal", "Male", nullptr));
        rbFemale->setText(QApplication::translate("AddAnimal", "Female", nullptr));
        lbFur->setText(QApplication::translate("AddAnimal", "Fur: ", nullptr));
        cbFur->setItemText(0, QApplication::translate("AddAnimal", "Hairless", nullptr));
        cbFur->setItemText(1, QApplication::translate("AddAnimal", "Short", nullptr));
        cbFur->setItemText(2, QApplication::translate("AddAnimal", "Long", nullptr));

        Tabs->setTabText(Tabs->indexOf(tabPhysical), QApplication::translate("AddAnimal", "Physical", nullptr));
        lbLikesTravel->setText(QApplication::translate("AddAnimal", "Likes travelling:", nullptr));
        rbTravel1->setText(QString());
        rbTravel2->setText(QString());
        rbTravel3->setText(QString());
        rbTravel4->setText(QString());
        rbTravel5->setText(QString());
        lbMessy->setText(QApplication::translate("AddAnimal", "Is messy:", nullptr));
        rbMessy1->setText(QString());
        rbMessy2->setText(QString());
        rbMessy4->setText(QString());
        rbMessy5->setText(QString());
        rbMessy3->setText(QString());
        lbGoodWithAnimals->setText(QApplication::translate("AddAnimal", "Good with animals:", nullptr));
        rbGdAnimals1->setText(QString());
        rbGdAnimals2->setText(QString());
        rbGdAnimals3->setText(QString());
        rbGdAnimals4->setText(QString());
        rbGdAnimals5->setText(QString());
        lbNoise->setText(QApplication::translate("AddAnimal", "Good with loud noise:", nullptr));
        rbNoise1->setText(QString());
        rbNoise2->setText(QString());
        rbNoise3->setText(QString());
        rbNoise4->setText(QString());
        rbNoise5->setText(QString());
        lbGoodWithChildren->setText(QApplication::translate("AddAnimal", "Good with children:", nullptr));
        rbChildren1->setText(QString());
        rbChildren2->setText(QString());
        rbChildren3->setText(QString());
        rbChildren4->setText(QString());
        rbChildren5->setText(QString());
        lbAffection->setText(QApplication::translate("AddAnimal", "Is affectionate:", nullptr));
        rbAffection1->setText(QString());
        rbAffection2->setText(QString());
        rbAffection3->setText(QString());
        rbAffection4->setText(QString());
        rbAffection5->setText(QString());
        lbEnergy->setText(QApplication::translate("AddAnimal", "Lots of energy:", nullptr));
        rbEnergy1->setText(QString());
        rbEnergy2->setText(QString());
        rbEnergy3->setText(QString());
        rbEnergy4->setText(QString());
        rbEnergy5->setText(QString());
        lbCrowds->setText(QApplication::translate("AddAnimal", "Good in crowds:", nullptr));
        rbCrowds1->setText(QString());
        rbCrowds2->setText(QString());
        rbCrowds3->setText(QString());
        rbCrowds4->setText(QString());
        rbCrowds5->setText(QString());
        lbStrange->setText(QApplication::translate("AddAnimal", "Good with strangers:", nullptr));
        rbStrange1->setText(QString());
        rbStrange2->setText(QString());
        rbStrange3->setText(QString());
        rbStrange4->setText(QString());
        rbStrange5->setText(QString());
        lbProtect->setText(QApplication::translate("AddAnimal", "Good home protector:", nullptr));
        rbProtect1->setText(QString());
        rbProtect2->setText(QString());
        rbProtect3->setText(QString());
        rbProtect4->setText(QString());
        rbProtect5->setText(QString());
        lbFear->setText(QApplication::translate("AddAnimal", "Is fearful:", nullptr));
        rbFear1->setText(QString());
        rbFear2->setText(QString());
        rbFear3->setText(QString());
        rbFear4->setText(QString());
        rbFear5->setText(QString());
        lbHistory->setText(QApplication::translate("AddAnimal", "History:", nullptr));
        cbHistory->setItemText(0, QApplication::translate("AddAnimal", "Given up by owner", nullptr));
        cbHistory->setItemText(1, QApplication::translate("AddAnimal", "Street animal", nullptr));
        cbHistory->setItemText(2, QApplication::translate("AddAnimal", "Rescue", nullptr));
        cbHistory->setItemText(3, QApplication::translate("AddAnimal", "Unknown", nullptr));

        rbIndoor->setText(QApplication::translate("AddAnimal", "Indoor", nullptr));
        rbOutdoor->setText(QApplication::translate("AddAnimal", "Outdoor", nullptr));
        rbBoth->setText(QApplication::translate("AddAnimal", "Both", nullptr));
        boxNocturnal->setText(QApplication::translate("AddAnimal", "Nocturnal", nullptr));
        boxAllergies->setText(QApplication::translate("AddAnimal", "Hypoallergenic", nullptr));
        Tabs->setTabText(Tabs->indexOf(tabNonPhysical), QApplication::translate("AddAnimal", "Non-Physical", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
