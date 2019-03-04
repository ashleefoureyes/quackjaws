/********************************************************************************
** Form generated from reading UI file 'viewanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMALS_H
#define UI_VIEWANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAnimals
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *name;
    QLabel *lbName;
    QLabel *aName;
    QHBoxLayout *species;
    QLabel *lbSpecies;
    QLabel *aSpecies;
    QHBoxLayout *breed;
    QLabel *lbBreed;
    QLabel *aBreed;
    QHBoxLayout *size;
    QLabel *lbSize;
    QLabel *aSize;
    QHBoxLayout *age;
    QLabel *lbAge;
    QLabel *aAge;
    QHBoxLayout *gender;
    QLabel *lbGender;
    QLabel *aGender;
    QHBoxLayout *fur;
    QLabel *lbFur;
    QLabel *aFur;
    QFrame *line_2;
    QLabel *lbAnimalImage;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *likesTravel;
    QLabel *lbLikesTravel;
    QProgressBar *barLikesTravel;
    QHBoxLayout *goodwChildren;
    QLabel *lbChildren;
    QProgressBar *barChildren;
    QHBoxLayout *goodwAnimals;
    QLabel *lbAnimals;
    QProgressBar *barAnimals;
    QHBoxLayout *goodwStrangers;
    QLabel *lbStrangers;
    QProgressBar *barStrangers;
    QHBoxLayout *goodinCrowds;
    QLabel *lbCrowds;
    QProgressBar *barCrowds;
    QHBoxLayout *goodwNoise;
    QLabel *lbNoise;
    QProgressBar *barNoise;
    QHBoxLayout *goodProtector;
    QLabel *lbProtector;
    QProgressBar *barProtector;
    QHBoxLayout *lvlEnergy;
    QLabel *lbEnergy;
    QProgressBar *barEnergy;
    QHBoxLayout *lvlFear;
    QLabel *lbFear;
    QProgressBar *barFear;
    QHBoxLayout *lvlAffection;
    QLabel *lbAffection;
    QProgressBar *barAffection;
    QHBoxLayout *messiness;
    QLabel *lbMessy;
    QProgressBar *barMessy;
    QHBoxLayout *horizontalLayout;
    QLabel *lbNocturnal;
    QLabel *lbIndoor;
    QLabel *lbHistory;
    QFrame *line_3;
    QWidget *tabDog;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *likesTravel_9;
    QLabel *lbLikesTravel_9;
    QProgressBar *barLoudnessDog;
    QHBoxLayout *likesTravel_10;
    QLabel *lbLikesTravel_10;
    QProgressBar *barTrainingDog;
    QLabel *lbBathroomTrained;
    QWidget *tabCat;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *likesTravel_6;
    QLabel *lbLikesTravel_6;
    QProgressBar *barCuriosity;
    QHBoxLayout *likesTravel_7;
    QLabel *lbLikesTravel_7;
    QProgressBar *barTrainingCat;
    QHBoxLayout *likesTravel_8;
    QLabel *lbLikesTravel_8;
    QProgressBar *barShedding;
    QWidget *tabBird;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *likesTravel_4;
    QLabel *lbLikesTravel_4;
    QProgressBar *barLoudnessBird;
    QHBoxLayout *likesTravel_5;
    QLabel *lbLikesTravel_5;
    QProgressBar *barAttentionBird;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLabel *lbColourBird;
    QWidget *tabLizard;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLabel *lbColourLizard;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *lbPreferredDiet;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *lbFeeding;
    QFrame *line_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbSpacialReq;
    QLabel *lbLightingReq;
    QWidget *tabRabbit;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *likesTravel_2;
    QLabel *lbLikesTravel_2;
    QProgressBar *barGrooming;
    QHBoxLayout *likesTravel_3;
    QLabel *lbLikesTravel_3;
    QProgressBar *barAttentionRabbit;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *lbRabbitColour;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *lbRabbitPattern;
    QWidget *widget_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QCheckBox *filterDogs;
    QCheckBox *filterCats;
    QCheckBox *filterBirds;
    QCheckBox *filterLizards;
    QCheckBox *filterRabbits;
    QListWidget *animalList;

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(467, 677);
        ViewAnimals->setMinimumSize(QSize(467, 677));
        ViewAnimals->setMaximumSize(QSize(467, 677));
        gridLayout = new QGridLayout(ViewAnimals);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(ViewAnimals);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 447, 657));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(250, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 430, 450));
        widget_2->setMinimumSize(QSize(430, 430));
        widget_2->setMaximumSize(QSize(430, 450));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(440, 0));
        widget->setMaximumSize(QSize(400, 150));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        name = new QHBoxLayout();
        name->setObjectName(QStringLiteral("name"));
        lbName = new QLabel(widget);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setMinimumSize(QSize(75, 0));
        lbName->setMaximumSize(QSize(75, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbName->setFont(font);

        name->addWidget(lbName);

        aName = new QLabel(widget);
        aName->setObjectName(QStringLiteral("aName"));
        aName->setMinimumSize(QSize(100, 0));

        name->addWidget(aName);


        verticalLayout->addLayout(name);

        species = new QHBoxLayout();
        species->setObjectName(QStringLiteral("species"));
        lbSpecies = new QLabel(widget);
        lbSpecies->setObjectName(QStringLiteral("lbSpecies"));
        lbSpecies->setMinimumSize(QSize(75, 0));
        lbSpecies->setMaximumSize(QSize(75, 16777215));
        lbSpecies->setFont(font);

        species->addWidget(lbSpecies);

        aSpecies = new QLabel(widget);
        aSpecies->setObjectName(QStringLiteral("aSpecies"));
        aSpecies->setMinimumSize(QSize(100, 0));

        species->addWidget(aSpecies);


        verticalLayout->addLayout(species);

        breed = new QHBoxLayout();
        breed->setObjectName(QStringLiteral("breed"));
        lbBreed = new QLabel(widget);
        lbBreed->setObjectName(QStringLiteral("lbBreed"));
        lbBreed->setMinimumSize(QSize(75, 0));
        lbBreed->setMaximumSize(QSize(75, 16777215));
        lbBreed->setFont(font);

        breed->addWidget(lbBreed);

        aBreed = new QLabel(widget);
        aBreed->setObjectName(QStringLiteral("aBreed"));
        aBreed->setMinimumSize(QSize(100, 0));

        breed->addWidget(aBreed);


        verticalLayout->addLayout(breed);

        size = new QHBoxLayout();
        size->setObjectName(QStringLiteral("size"));
        lbSize = new QLabel(widget);
        lbSize->setObjectName(QStringLiteral("lbSize"));
        lbSize->setMinimumSize(QSize(75, 0));
        lbSize->setMaximumSize(QSize(75, 16777215));
        lbSize->setFont(font);

        size->addWidget(lbSize);

        aSize = new QLabel(widget);
        aSize->setObjectName(QStringLiteral("aSize"));
        aSize->setMinimumSize(QSize(100, 0));

        size->addWidget(aSize);


        verticalLayout->addLayout(size);

        age = new QHBoxLayout();
        age->setObjectName(QStringLiteral("age"));
        lbAge = new QLabel(widget);
        lbAge->setObjectName(QStringLiteral("lbAge"));
        lbAge->setMinimumSize(QSize(75, 0));
        lbAge->setMaximumSize(QSize(75, 16777215));
        lbAge->setFont(font);

        age->addWidget(lbAge);

        aAge = new QLabel(widget);
        aAge->setObjectName(QStringLiteral("aAge"));
        aAge->setMinimumSize(QSize(100, 0));

        age->addWidget(aAge);


        verticalLayout->addLayout(age);

        gender = new QHBoxLayout();
        gender->setObjectName(QStringLiteral("gender"));
        lbGender = new QLabel(widget);
        lbGender->setObjectName(QStringLiteral("lbGender"));
        lbGender->setMinimumSize(QSize(75, 0));
        lbGender->setMaximumSize(QSize(75, 16777215));
        lbGender->setFont(font);

        gender->addWidget(lbGender);

        aGender = new QLabel(widget);
        aGender->setObjectName(QStringLiteral("aGender"));
        aGender->setMinimumSize(QSize(100, 0));

        gender->addWidget(aGender);


        verticalLayout->addLayout(gender);

        fur = new QHBoxLayout();
        fur->setObjectName(QStringLiteral("fur"));
        lbFur = new QLabel(widget);
        lbFur->setObjectName(QStringLiteral("lbFur"));
        lbFur->setMinimumSize(QSize(75, 0));
        lbFur->setMaximumSize(QSize(75, 16777215));
        lbFur->setFont(font);

        fur->addWidget(lbFur);

        aFur = new QLabel(widget);
        aFur->setObjectName(QStringLiteral("aFur"));
        aFur->setMinimumSize(QSize(100, 0));

        fur->addWidget(aFur);


        verticalLayout->addLayout(fur);


        horizontalLayout_2->addLayout(verticalLayout);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        lbAnimalImage = new QLabel(widget);
        lbAnimalImage->setObjectName(QStringLiteral("lbAnimalImage"));
        lbAnimalImage->setMinimumSize(QSize(200, 140));
        lbAnimalImage->setMaximumSize(QSize(200, 140));
        QFont font1;
        font1.setPointSize(12);
        lbAnimalImage->setFont(font1);
        lbAnimalImage->setScaledContents(true);
        lbAnimalImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbAnimalImage);


        verticalLayout_4->addWidget(widget);

        line = new QFrame(widget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        gridLayout_3 = new QGridLayout(tabGeneral);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        likesTravel = new QHBoxLayout();
        likesTravel->setObjectName(QStringLiteral("likesTravel"));
        lbLikesTravel = new QLabel(tabGeneral);
        lbLikesTravel->setObjectName(QStringLiteral("lbLikesTravel"));
        lbLikesTravel->setMinimumSize(QSize(175, 0));
        lbLikesTravel->setFont(font);

        likesTravel->addWidget(lbLikesTravel);

        barLikesTravel = new QProgressBar(tabGeneral);
        barLikesTravel->setObjectName(QStringLiteral("barLikesTravel"));
        barLikesTravel->setMinimumSize(QSize(175, 0));
        barLikesTravel->setMinimum(-1);
        barLikesTravel->setMaximum(4);
        barLikesTravel->setValue(0);
        barLikesTravel->setTextVisible(false);

        likesTravel->addWidget(barLikesTravel);


        verticalLayout_2->addLayout(likesTravel);

        goodwChildren = new QHBoxLayout();
        goodwChildren->setObjectName(QStringLiteral("goodwChildren"));
        lbChildren = new QLabel(tabGeneral);
        lbChildren->setObjectName(QStringLiteral("lbChildren"));
        lbChildren->setMinimumSize(QSize(175, 0));
        lbChildren->setFont(font);

        goodwChildren->addWidget(lbChildren);

        barChildren = new QProgressBar(tabGeneral);
        barChildren->setObjectName(QStringLiteral("barChildren"));
        barChildren->setMinimumSize(QSize(175, 0));
        barChildren->setMinimum(-1);
        barChildren->setMaximum(4);
        barChildren->setValue(0);
        barChildren->setTextVisible(false);

        goodwChildren->addWidget(barChildren);


        verticalLayout_2->addLayout(goodwChildren);

        goodwAnimals = new QHBoxLayout();
        goodwAnimals->setObjectName(QStringLiteral("goodwAnimals"));
        lbAnimals = new QLabel(tabGeneral);
        lbAnimals->setObjectName(QStringLiteral("lbAnimals"));
        lbAnimals->setMinimumSize(QSize(175, 0));
        lbAnimals->setFont(font);

        goodwAnimals->addWidget(lbAnimals);

        barAnimals = new QProgressBar(tabGeneral);
        barAnimals->setObjectName(QStringLiteral("barAnimals"));
        barAnimals->setMinimumSize(QSize(175, 0));
        barAnimals->setMinimum(-1);
        barAnimals->setMaximum(4);
        barAnimals->setValue(0);
        barAnimals->setTextVisible(false);

        goodwAnimals->addWidget(barAnimals);


        verticalLayout_2->addLayout(goodwAnimals);

        goodwStrangers = new QHBoxLayout();
        goodwStrangers->setObjectName(QStringLiteral("goodwStrangers"));
        lbStrangers = new QLabel(tabGeneral);
        lbStrangers->setObjectName(QStringLiteral("lbStrangers"));
        lbStrangers->setMinimumSize(QSize(175, 0));
        lbStrangers->setFont(font);

        goodwStrangers->addWidget(lbStrangers);

        barStrangers = new QProgressBar(tabGeneral);
        barStrangers->setObjectName(QStringLiteral("barStrangers"));
        barStrangers->setMinimumSize(QSize(175, 0));
        barStrangers->setMinimum(-1);
        barStrangers->setMaximum(4);
        barStrangers->setValue(0);
        barStrangers->setTextVisible(false);

        goodwStrangers->addWidget(barStrangers);


        verticalLayout_2->addLayout(goodwStrangers);

        goodinCrowds = new QHBoxLayout();
        goodinCrowds->setObjectName(QStringLiteral("goodinCrowds"));
        lbCrowds = new QLabel(tabGeneral);
        lbCrowds->setObjectName(QStringLiteral("lbCrowds"));
        lbCrowds->setMinimumSize(QSize(175, 0));
        lbCrowds->setFont(font);

        goodinCrowds->addWidget(lbCrowds);

        barCrowds = new QProgressBar(tabGeneral);
        barCrowds->setObjectName(QStringLiteral("barCrowds"));
        barCrowds->setMinimumSize(QSize(175, 0));
        barCrowds->setMinimum(-1);
        barCrowds->setMaximum(4);
        barCrowds->setValue(0);
        barCrowds->setTextVisible(false);

        goodinCrowds->addWidget(barCrowds);


        verticalLayout_2->addLayout(goodinCrowds);

        goodwNoise = new QHBoxLayout();
        goodwNoise->setObjectName(QStringLiteral("goodwNoise"));
        lbNoise = new QLabel(tabGeneral);
        lbNoise->setObjectName(QStringLiteral("lbNoise"));
        lbNoise->setMinimumSize(QSize(175, 0));
        lbNoise->setFont(font);

        goodwNoise->addWidget(lbNoise);

        barNoise = new QProgressBar(tabGeneral);
        barNoise->setObjectName(QStringLiteral("barNoise"));
        barNoise->setMinimumSize(QSize(175, 0));
        barNoise->setMinimum(-1);
        barNoise->setMaximum(4);
        barNoise->setValue(0);
        barNoise->setTextVisible(false);

        goodwNoise->addWidget(barNoise);


        verticalLayout_2->addLayout(goodwNoise);

        goodProtector = new QHBoxLayout();
        goodProtector->setObjectName(QStringLiteral("goodProtector"));
        lbProtector = new QLabel(tabGeneral);
        lbProtector->setObjectName(QStringLiteral("lbProtector"));
        lbProtector->setMinimumSize(QSize(175, 0));
        lbProtector->setFont(font);

        goodProtector->addWidget(lbProtector);

        barProtector = new QProgressBar(tabGeneral);
        barProtector->setObjectName(QStringLiteral("barProtector"));
        barProtector->setMinimumSize(QSize(175, 0));
        barProtector->setMinimum(-1);
        barProtector->setMaximum(4);
        barProtector->setValue(0);
        barProtector->setTextVisible(false);

        goodProtector->addWidget(barProtector);


        verticalLayout_2->addLayout(goodProtector);

        lvlEnergy = new QHBoxLayout();
        lvlEnergy->setObjectName(QStringLiteral("lvlEnergy"));
        lbEnergy = new QLabel(tabGeneral);
        lbEnergy->setObjectName(QStringLiteral("lbEnergy"));
        lbEnergy->setMinimumSize(QSize(175, 0));
        lbEnergy->setFont(font);

        lvlEnergy->addWidget(lbEnergy);

        barEnergy = new QProgressBar(tabGeneral);
        barEnergy->setObjectName(QStringLiteral("barEnergy"));
        barEnergy->setMinimumSize(QSize(175, 0));
        barEnergy->setMinimum(-1);
        barEnergy->setMaximum(4);
        barEnergy->setValue(0);
        barEnergy->setTextVisible(false);

        lvlEnergy->addWidget(barEnergy);


        verticalLayout_2->addLayout(lvlEnergy);

        lvlFear = new QHBoxLayout();
        lvlFear->setObjectName(QStringLiteral("lvlFear"));
        lbFear = new QLabel(tabGeneral);
        lbFear->setObjectName(QStringLiteral("lbFear"));
        lbFear->setMinimumSize(QSize(175, 0));
        lbFear->setFont(font);

        lvlFear->addWidget(lbFear);

        barFear = new QProgressBar(tabGeneral);
        barFear->setObjectName(QStringLiteral("barFear"));
        barFear->setMinimumSize(QSize(175, 0));
        barFear->setMinimum(-1);
        barFear->setMaximum(4);
        barFear->setValue(0);
        barFear->setTextVisible(false);

        lvlFear->addWidget(barFear);


        verticalLayout_2->addLayout(lvlFear);

        lvlAffection = new QHBoxLayout();
        lvlAffection->setObjectName(QStringLiteral("lvlAffection"));
        lbAffection = new QLabel(tabGeneral);
        lbAffection->setObjectName(QStringLiteral("lbAffection"));
        lbAffection->setMinimumSize(QSize(175, 0));
        lbAffection->setFont(font);

        lvlAffection->addWidget(lbAffection);

        barAffection = new QProgressBar(tabGeneral);
        barAffection->setObjectName(QStringLiteral("barAffection"));
        barAffection->setMinimumSize(QSize(175, 0));
        barAffection->setMinimum(-1);
        barAffection->setMaximum(4);
        barAffection->setValue(0);
        barAffection->setTextVisible(false);

        lvlAffection->addWidget(barAffection);


        verticalLayout_2->addLayout(lvlAffection);

        messiness = new QHBoxLayout();
        messiness->setObjectName(QStringLiteral("messiness"));
        lbMessy = new QLabel(tabGeneral);
        lbMessy->setObjectName(QStringLiteral("lbMessy"));
        lbMessy->setMinimumSize(QSize(175, 0));
        lbMessy->setFont(font);

        messiness->addWidget(lbMessy);

        barMessy = new QProgressBar(tabGeneral);
        barMessy->setObjectName(QStringLiteral("barMessy"));
        barMessy->setMinimumSize(QSize(175, 0));
        barMessy->setMinimum(-1);
        barMessy->setMaximum(4);
        barMessy->setValue(0);
        barMessy->setTextVisible(false);

        messiness->addWidget(barMessy);


        verticalLayout_2->addLayout(messiness);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbNocturnal = new QLabel(tabGeneral);
        lbNocturnal->setObjectName(QStringLiteral("lbNocturnal"));
        lbNocturnal->setMinimumSize(QSize(100, 15));
        QFont font2;
        font2.setItalic(false);
        lbNocturnal->setFont(font2);
        lbNocturnal->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbNocturnal);

        lbIndoor = new QLabel(tabGeneral);
        lbIndoor->setObjectName(QStringLiteral("lbIndoor"));
        lbIndoor->setMinimumSize(QSize(100, 15));
        lbIndoor->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbIndoor);

        lbHistory = new QLabel(tabGeneral);
        lbHistory->setObjectName(QStringLiteral("lbHistory"));
        lbHistory->setMinimumSize(QSize(100, 15));
        lbHistory->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbHistory);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        line_3 = new QFrame(tabGeneral);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 1, 0, 1, 1);

        tabWidget->addTab(tabGeneral, QString());
        tabDog = new QWidget();
        tabDog->setObjectName(QStringLiteral("tabDog"));
        verticalLayout_9 = new QVBoxLayout(tabDog);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        likesTravel_9 = new QHBoxLayout();
        likesTravel_9->setObjectName(QStringLiteral("likesTravel_9"));
        lbLikesTravel_9 = new QLabel(tabDog);
        lbLikesTravel_9->setObjectName(QStringLiteral("lbLikesTravel_9"));
        lbLikesTravel_9->setMinimumSize(QSize(175, 0));
        lbLikesTravel_9->setFont(font);

        likesTravel_9->addWidget(lbLikesTravel_9);

        barLoudnessDog = new QProgressBar(tabDog);
        barLoudnessDog->setObjectName(QStringLiteral("barLoudnessDog"));
        barLoudnessDog->setMinimumSize(QSize(175, 0));
        barLoudnessDog->setMinimum(-1);
        barLoudnessDog->setMaximum(4);
        barLoudnessDog->setValue(0);
        barLoudnessDog->setTextVisible(false);

        likesTravel_9->addWidget(barLoudnessDog);


        verticalLayout_9->addLayout(likesTravel_9);

        likesTravel_10 = new QHBoxLayout();
        likesTravel_10->setObjectName(QStringLiteral("likesTravel_10"));
        lbLikesTravel_10 = new QLabel(tabDog);
        lbLikesTravel_10->setObjectName(QStringLiteral("lbLikesTravel_10"));
        lbLikesTravel_10->setMinimumSize(QSize(175, 0));
        lbLikesTravel_10->setFont(font);

        likesTravel_10->addWidget(lbLikesTravel_10);

        barTrainingDog = new QProgressBar(tabDog);
        barTrainingDog->setObjectName(QStringLiteral("barTrainingDog"));
        barTrainingDog->setMinimumSize(QSize(175, 0));
        barTrainingDog->setMinimum(-1);
        barTrainingDog->setMaximum(4);
        barTrainingDog->setValue(0);
        barTrainingDog->setTextVisible(false);

        likesTravel_10->addWidget(barTrainingDog);


        verticalLayout_9->addLayout(likesTravel_10);

        lbBathroomTrained = new QLabel(tabDog);
        lbBathroomTrained->setObjectName(QStringLiteral("lbBathroomTrained"));
        lbBathroomTrained->setLayoutDirection(Qt::LeftToRight);
        lbBathroomTrained->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lbBathroomTrained);

        tabWidget->addTab(tabDog, QString());
        tabCat = new QWidget();
        tabCat->setObjectName(QStringLiteral("tabCat"));
        verticalLayout_8 = new QVBoxLayout(tabCat);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        likesTravel_6 = new QHBoxLayout();
        likesTravel_6->setObjectName(QStringLiteral("likesTravel_6"));
        lbLikesTravel_6 = new QLabel(tabCat);
        lbLikesTravel_6->setObjectName(QStringLiteral("lbLikesTravel_6"));
        lbLikesTravel_6->setMinimumSize(QSize(175, 0));
        lbLikesTravel_6->setFont(font);

        likesTravel_6->addWidget(lbLikesTravel_6);

        barCuriosity = new QProgressBar(tabCat);
        barCuriosity->setObjectName(QStringLiteral("barCuriosity"));
        barCuriosity->setMinimumSize(QSize(175, 0));
        barCuriosity->setMinimum(-1);
        barCuriosity->setMaximum(4);
        barCuriosity->setValue(0);
        barCuriosity->setTextVisible(false);

        likesTravel_6->addWidget(barCuriosity);


        verticalLayout_8->addLayout(likesTravel_6);

        likesTravel_7 = new QHBoxLayout();
        likesTravel_7->setObjectName(QStringLiteral("likesTravel_7"));
        lbLikesTravel_7 = new QLabel(tabCat);
        lbLikesTravel_7->setObjectName(QStringLiteral("lbLikesTravel_7"));
        lbLikesTravel_7->setMinimumSize(QSize(175, 0));
        lbLikesTravel_7->setFont(font);

        likesTravel_7->addWidget(lbLikesTravel_7);

        barTrainingCat = new QProgressBar(tabCat);
        barTrainingCat->setObjectName(QStringLiteral("barTrainingCat"));
        barTrainingCat->setMinimumSize(QSize(175, 0));
        barTrainingCat->setMinimum(-1);
        barTrainingCat->setMaximum(4);
        barTrainingCat->setValue(0);
        barTrainingCat->setTextVisible(false);

        likesTravel_7->addWidget(barTrainingCat);


        verticalLayout_8->addLayout(likesTravel_7);

        likesTravel_8 = new QHBoxLayout();
        likesTravel_8->setObjectName(QStringLiteral("likesTravel_8"));
        lbLikesTravel_8 = new QLabel(tabCat);
        lbLikesTravel_8->setObjectName(QStringLiteral("lbLikesTravel_8"));
        lbLikesTravel_8->setMinimumSize(QSize(175, 0));
        lbLikesTravel_8->setFont(font);

        likesTravel_8->addWidget(lbLikesTravel_8);

        barShedding = new QProgressBar(tabCat);
        barShedding->setObjectName(QStringLiteral("barShedding"));
        barShedding->setMinimumSize(QSize(175, 0));
        barShedding->setMinimum(-1);
        barShedding->setMaximum(4);
        barShedding->setValue(0);
        barShedding->setTextVisible(false);

        likesTravel_8->addWidget(barShedding);


        verticalLayout_8->addLayout(likesTravel_8);

        tabWidget->addTab(tabCat, QString());
        tabBird = new QWidget();
        tabBird->setObjectName(QStringLiteral("tabBird"));
        verticalLayout_7 = new QVBoxLayout(tabBird);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        likesTravel_4 = new QHBoxLayout();
        likesTravel_4->setObjectName(QStringLiteral("likesTravel_4"));
        lbLikesTravel_4 = new QLabel(tabBird);
        lbLikesTravel_4->setObjectName(QStringLiteral("lbLikesTravel_4"));
        lbLikesTravel_4->setMinimumSize(QSize(175, 0));
        lbLikesTravel_4->setFont(font);

        likesTravel_4->addWidget(lbLikesTravel_4);

        barLoudnessBird = new QProgressBar(tabBird);
        barLoudnessBird->setObjectName(QStringLiteral("barLoudnessBird"));
        barLoudnessBird->setMinimumSize(QSize(175, 0));
        barLoudnessBird->setMinimum(-1);
        barLoudnessBird->setMaximum(4);
        barLoudnessBird->setValue(0);
        barLoudnessBird->setTextVisible(false);

        likesTravel_4->addWidget(barLoudnessBird);


        verticalLayout_7->addLayout(likesTravel_4);

        likesTravel_5 = new QHBoxLayout();
        likesTravel_5->setObjectName(QStringLiteral("likesTravel_5"));
        lbLikesTravel_5 = new QLabel(tabBird);
        lbLikesTravel_5->setObjectName(QStringLiteral("lbLikesTravel_5"));
        lbLikesTravel_5->setMinimumSize(QSize(175, 0));
        lbLikesTravel_5->setFont(font);

        likesTravel_5->addWidget(lbLikesTravel_5);

        barAttentionBird = new QProgressBar(tabBird);
        barAttentionBird->setObjectName(QStringLiteral("barAttentionBird"));
        barAttentionBird->setMinimumSize(QSize(175, 0));
        barAttentionBird->setMinimum(-1);
        barAttentionBird->setMaximum(4);
        barAttentionBird->setValue(0);
        barAttentionBird->setTextVisible(false);

        likesTravel_5->addWidget(barAttentionBird);


        verticalLayout_7->addLayout(likesTravel_5);

        line_9 = new QFrame(tabBird);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(tabBird);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_10->addWidget(label_5);

        lbColourBird = new QLabel(tabBird);
        lbColourBird->setObjectName(QStringLiteral("lbColourBird"));
        lbColourBird->setFont(font);

        horizontalLayout_10->addWidget(lbColourBird);


        verticalLayout_7->addLayout(horizontalLayout_10);

        tabWidget->addTab(tabBird, QString());
        tabLizard = new QWidget();
        tabLizard->setObjectName(QStringLiteral("tabLizard"));
        verticalLayout_6 = new QVBoxLayout(tabLizard);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(tabLizard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_9->addWidget(label_3);

        lbColourLizard = new QLabel(tabLizard);
        lbColourLizard->setObjectName(QStringLiteral("lbColourLizard"));

        horizontalLayout_9->addWidget(lbColourLizard);


        verticalLayout_6->addLayout(horizontalLayout_9);

        line_6 = new QFrame(tabLizard);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(tabLizard);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_8->addWidget(label_6);

        lbPreferredDiet = new QLabel(tabLizard);
        lbPreferredDiet->setObjectName(QStringLiteral("lbPreferredDiet"));

        horizontalLayout_8->addWidget(lbPreferredDiet);


        verticalLayout_6->addLayout(horizontalLayout_8);

        line_7 = new QFrame(tabLizard);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(tabLizard);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        lbFeeding = new QLabel(tabLizard);
        lbFeeding->setObjectName(QStringLiteral("lbFeeding"));

        horizontalLayout_7->addWidget(lbFeeding);


        verticalLayout_6->addLayout(horizontalLayout_7);

        line_8 = new QFrame(tabLizard);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbSpacialReq = new QLabel(tabLizard);
        lbSpacialReq->setObjectName(QStringLiteral("lbSpacialReq"));

        horizontalLayout_6->addWidget(lbSpacialReq);

        lbLightingReq = new QLabel(tabLizard);
        lbLightingReq->setObjectName(QStringLiteral("lbLightingReq"));

        horizontalLayout_6->addWidget(lbLightingReq);


        verticalLayout_6->addLayout(horizontalLayout_6);

        tabWidget->addTab(tabLizard, QString());
        tabRabbit = new QWidget();
        tabRabbit->setObjectName(QStringLiteral("tabRabbit"));
        verticalLayout_5 = new QVBoxLayout(tabRabbit);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        likesTravel_2 = new QHBoxLayout();
        likesTravel_2->setObjectName(QStringLiteral("likesTravel_2"));
        lbLikesTravel_2 = new QLabel(tabRabbit);
        lbLikesTravel_2->setObjectName(QStringLiteral("lbLikesTravel_2"));
        lbLikesTravel_2->setMinimumSize(QSize(175, 0));
        lbLikesTravel_2->setFont(font);

        likesTravel_2->addWidget(lbLikesTravel_2);

        barGrooming = new QProgressBar(tabRabbit);
        barGrooming->setObjectName(QStringLiteral("barGrooming"));
        barGrooming->setMinimumSize(QSize(175, 0));
        barGrooming->setMinimum(-1);
        barGrooming->setMaximum(4);
        barGrooming->setValue(0);
        barGrooming->setTextVisible(false);

        likesTravel_2->addWidget(barGrooming);


        verticalLayout_5->addLayout(likesTravel_2);

        likesTravel_3 = new QHBoxLayout();
        likesTravel_3->setObjectName(QStringLiteral("likesTravel_3"));
        lbLikesTravel_3 = new QLabel(tabRabbit);
        lbLikesTravel_3->setObjectName(QStringLiteral("lbLikesTravel_3"));
        lbLikesTravel_3->setMinimumSize(QSize(175, 0));
        lbLikesTravel_3->setFont(font);

        likesTravel_3->addWidget(lbLikesTravel_3);

        barAttentionRabbit = new QProgressBar(tabRabbit);
        barAttentionRabbit->setObjectName(QStringLiteral("barAttentionRabbit"));
        barAttentionRabbit->setMinimumSize(QSize(175, 0));
        barAttentionRabbit->setMinimum(-1);
        barAttentionRabbit->setMaximum(4);
        barAttentionRabbit->setValue(0);
        barAttentionRabbit->setTextVisible(false);

        likesTravel_3->addWidget(barAttentionRabbit);


        verticalLayout_5->addLayout(likesTravel_3);

        line_4 = new QFrame(tabRabbit);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(tabRabbit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        lbRabbitColour = new QLabel(tabRabbit);
        lbRabbitColour->setObjectName(QStringLiteral("lbRabbitColour"));

        horizontalLayout_5->addWidget(lbRabbitColour);


        verticalLayout_5->addLayout(horizontalLayout_5);

        line_5 = new QFrame(tabRabbit);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(tabRabbit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lbRabbitPattern = new QLabel(tabRabbit);
        lbRabbitPattern->setObjectName(QStringLiteral("lbRabbitPattern"));

        horizontalLayout_4->addWidget(lbRabbitPattern);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tabWidget->addTab(tabRabbit, QString());

        verticalLayout_4->addWidget(tabWidget);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 25));
        widget_3->setMaximumSize(QSize(16777215, 25));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 421, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        filterDogs = new QCheckBox(layoutWidget);
        filterDogs->setObjectName(QStringLiteral("filterDogs"));
        filterDogs->setChecked(true);

        horizontalLayout_3->addWidget(filterDogs);

        filterCats = new QCheckBox(layoutWidget);
        filterCats->setObjectName(QStringLiteral("filterCats"));
        filterCats->setChecked(true);

        horizontalLayout_3->addWidget(filterCats);

        filterBirds = new QCheckBox(layoutWidget);
        filterBirds->setObjectName(QStringLiteral("filterBirds"));
        filterBirds->setChecked(true);

        horizontalLayout_3->addWidget(filterBirds);

        filterLizards = new QCheckBox(layoutWidget);
        filterLizards->setObjectName(QStringLiteral("filterLizards"));
        filterLizards->setChecked(true);

        horizontalLayout_3->addWidget(filterLizards);

        filterRabbits = new QCheckBox(layoutWidget);
        filterRabbits->setObjectName(QStringLiteral("filterRabbits"));
        filterRabbits->setChecked(true);

        horizontalLayout_3->addWidget(filterRabbits);


        gridLayout_2->addWidget(widget_3, 2, 0, 1, 1);

        animalList = new QListWidget(scrollAreaWidgetContents);
        animalList->setObjectName(QStringLiteral("animalList"));
        animalList->setMinimumSize(QSize(0, 175));
        animalList->setMaximumSize(QSize(500, 175));

        gridLayout_2->addWidget(animalList, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ViewAnimals);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", Q_NULLPTR));
        lbName->setText(QApplication::translate("ViewAnimals", "Name:", Q_NULLPTR));
        aName->setText(QString());
        lbSpecies->setText(QApplication::translate("ViewAnimals", "Species:", Q_NULLPTR));
        aSpecies->setText(QString());
        lbBreed->setText(QApplication::translate("ViewAnimals", "Breed:", Q_NULLPTR));
        aBreed->setText(QString());
        lbSize->setText(QApplication::translate("ViewAnimals", "Size:", Q_NULLPTR));
        aSize->setText(QString());
        lbAge->setText(QApplication::translate("ViewAnimals", "Age:", Q_NULLPTR));
        aAge->setText(QString());
        lbGender->setText(QApplication::translate("ViewAnimals", "Gender:", Q_NULLPTR));
        aGender->setText(QString());
        lbFur->setText(QApplication::translate("ViewAnimals", "Fur:", Q_NULLPTR));
        aFur->setText(QString());
        lbAnimalImage->setText(QApplication::translate("ViewAnimals", "No Image", Q_NULLPTR));
        lbLikesTravel->setText(QApplication::translate("ViewAnimals", "Likes travelling:", Q_NULLPTR));
        lbChildren->setText(QApplication::translate("ViewAnimals", "Good with children:", Q_NULLPTR));
        lbAnimals->setText(QApplication::translate("ViewAnimals", "Good with animals:", Q_NULLPTR));
        lbStrangers->setText(QApplication::translate("ViewAnimals", "Good with strangers:", Q_NULLPTR));
        lbCrowds->setText(QApplication::translate("ViewAnimals", "Good in crowds:", Q_NULLPTR));
        lbNoise->setText(QApplication::translate("ViewAnimals", "Good with loud noises:", Q_NULLPTR));
        lbProtector->setText(QApplication::translate("ViewAnimals", "Good home protector:", Q_NULLPTR));
        lbEnergy->setText(QApplication::translate("ViewAnimals", "Level of energy:", Q_NULLPTR));
        lbFear->setText(QApplication::translate("ViewAnimals", "Level of fear:", Q_NULLPTR));
        lbAffection->setText(QApplication::translate("ViewAnimals", "Level of affection:", Q_NULLPTR));
        lbMessy->setText(QApplication::translate("ViewAnimals", "Messiness:", Q_NULLPTR));
        lbNocturnal->setText(QApplication::translate("ViewAnimals", "Nocturnal", Q_NULLPTR));
        lbIndoor->setText(QApplication::translate("ViewAnimals", "Indoor", Q_NULLPTR));
        lbHistory->setText(QApplication::translate("ViewAnimals", "Rescue", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("ViewAnimals", "General Attributes", Q_NULLPTR));
        lbLikesTravel_9->setText(QApplication::translate("ViewAnimals", "Loudness:", Q_NULLPTR));
        lbLikesTravel_10->setText(QApplication::translate("ViewAnimals", "Training:", Q_NULLPTR));
        lbBathroomTrained->setText(QApplication::translate("ViewAnimals", "Bathroom Trained", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabDog), QApplication::translate("ViewAnimals", "Species Attributes", Q_NULLPTR));
        lbLikesTravel_6->setText(QApplication::translate("ViewAnimals", "Curiosity:", Q_NULLPTR));
        lbLikesTravel_7->setText(QApplication::translate("ViewAnimals", "Training:", Q_NULLPTR));
        lbLikesTravel_8->setText(QApplication::translate("ViewAnimals", "Sheds hair:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabCat), QApplication::translate("ViewAnimals", "Species Attributes", Q_NULLPTR));
        lbLikesTravel_4->setText(QApplication::translate("ViewAnimals", "Loudness:", Q_NULLPTR));
        lbLikesTravel_5->setText(QApplication::translate("ViewAnimals", "Needs attention:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ViewAnimals", "Colour:", Q_NULLPTR));
        lbColourBird->setText(QApplication::translate("ViewAnimals", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabBird), QApplication::translate("ViewAnimals", "Species Attributes", Q_NULLPTR));
        label_3->setText(QApplication::translate("ViewAnimals", "Colour:", Q_NULLPTR));
        lbColourLizard->setText(QApplication::translate("ViewAnimals", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("ViewAnimals", "Preferred Diet:", Q_NULLPTR));
        lbPreferredDiet->setText(QApplication::translate("ViewAnimals", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("ViewAnimals", "Feeding Interval:", Q_NULLPTR));
        lbFeeding->setText(QApplication::translate("ViewAnimals", "TextLabel", Q_NULLPTR));
        lbSpacialReq->setText(QApplication::translate("ViewAnimals", "Has spacial requirements", Q_NULLPTR));
        lbLightingReq->setText(QApplication::translate("ViewAnimals", "Has lighting requirements", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabLizard), QApplication::translate("ViewAnimals", "Species Attributes", Q_NULLPTR));
        lbLikesTravel_2->setText(QApplication::translate("ViewAnimals", "Needs grooming:", Q_NULLPTR));
        lbLikesTravel_3->setText(QApplication::translate("ViewAnimals", "Needs attention:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ViewAnimals", "Colour:", Q_NULLPTR));
        lbRabbitColour->setText(QApplication::translate("ViewAnimals", "lbRabbitColour", Q_NULLPTR));
        label_4->setText(QApplication::translate("ViewAnimals", "Pattern", Q_NULLPTR));
        lbRabbitPattern->setText(QApplication::translate("ViewAnimals", "lbRabbitPattern", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabRabbit), QApplication::translate("ViewAnimals", "Species Attributes", Q_NULLPTR));
        label->setText(QApplication::translate("ViewAnimals", "Filter:", Q_NULLPTR));
        filterDogs->setText(QApplication::translate("ViewAnimals", "Dogs", Q_NULLPTR));
        filterCats->setText(QApplication::translate("ViewAnimals", "Cats", Q_NULLPTR));
        filterBirds->setText(QApplication::translate("ViewAnimals", "Birds", Q_NULLPTR));
        filterLizards->setText(QApplication::translate("ViewAnimals", "Lizards", Q_NULLPTR));
        filterRabbits->setText(QApplication::translate("ViewAnimals", "Rabbits", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
