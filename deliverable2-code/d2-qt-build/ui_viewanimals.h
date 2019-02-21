/********************************************************************************
** Form generated from reading UI file 'viewanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMALS_H
#define UI_VIEWANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
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
    QListWidget *animalList;
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

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(467, 562);
        gridLayout = new QGridLayout(ViewAnimals);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(ViewAnimals);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 453, 548));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        animalList = new QListWidget(scrollAreaWidgetContents);
        animalList->setObjectName(QStringLiteral("animalList"));

        gridLayout_2->addWidget(animalList, 1, 0, 1, 1);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(250, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 430, 400));
        widget_2->setMinimumSize(QSize(430, 400));
        widget_2->setMaximumSize(QSize(430, 400));
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
        lbName->setMinimumSize(QSize(50, 0));

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
        lbSpecies->setMinimumSize(QSize(50, 0));

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
        lbBreed->setMinimumSize(QSize(50, 0));

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
        lbSize->setMinimumSize(QSize(50, 0));

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
        lbAge->setMinimumSize(QSize(50, 0));

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
        lbGender->setMinimumSize(QSize(50, 0));

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
        lbFur->setMinimumSize(QSize(50, 0));

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
        lbAnimalImage->setPixmap(QPixmap(QString::fromUtf8("../../../../dog-silhouette-hunting-dog.jpg")));
        lbAnimalImage->setScaledContents(true);

        horizontalLayout_2->addWidget(lbAnimalImage);


        verticalLayout_4->addWidget(widget);

        line = new QFrame(widget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        likesTravel = new QHBoxLayout();
        likesTravel->setObjectName(QStringLiteral("likesTravel"));
        lbLikesTravel = new QLabel(widget_2);
        lbLikesTravel->setObjectName(QStringLiteral("lbLikesTravel"));
        lbLikesTravel->setMinimumSize(QSize(175, 0));

        likesTravel->addWidget(lbLikesTravel);

        barLikesTravel = new QProgressBar(widget_2);
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
        lbChildren = new QLabel(widget_2);
        lbChildren->setObjectName(QStringLiteral("lbChildren"));
        lbChildren->setMinimumSize(QSize(175, 0));

        goodwChildren->addWidget(lbChildren);

        barChildren = new QProgressBar(widget_2);
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
        lbAnimals = new QLabel(widget_2);
        lbAnimals->setObjectName(QStringLiteral("lbAnimals"));
        lbAnimals->setMinimumSize(QSize(175, 0));

        goodwAnimals->addWidget(lbAnimals);

        barAnimals = new QProgressBar(widget_2);
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
        lbStrangers = new QLabel(widget_2);
        lbStrangers->setObjectName(QStringLiteral("lbStrangers"));
        lbStrangers->setMinimumSize(QSize(175, 0));

        goodwStrangers->addWidget(lbStrangers);

        barStrangers = new QProgressBar(widget_2);
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
        lbCrowds = new QLabel(widget_2);
        lbCrowds->setObjectName(QStringLiteral("lbCrowds"));
        lbCrowds->setMinimumSize(QSize(175, 0));

        goodinCrowds->addWidget(lbCrowds);

        barCrowds = new QProgressBar(widget_2);
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
        lbNoise = new QLabel(widget_2);
        lbNoise->setObjectName(QStringLiteral("lbNoise"));
        lbNoise->setMinimumSize(QSize(175, 0));

        goodwNoise->addWidget(lbNoise);

        barNoise = new QProgressBar(widget_2);
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
        lbProtector = new QLabel(widget_2);
        lbProtector->setObjectName(QStringLiteral("lbProtector"));
        lbProtector->setMinimumSize(QSize(175, 0));

        goodProtector->addWidget(lbProtector);

        barProtector = new QProgressBar(widget_2);
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
        lbEnergy = new QLabel(widget_2);
        lbEnergy->setObjectName(QStringLiteral("lbEnergy"));
        lbEnergy->setMinimumSize(QSize(175, 0));

        lvlEnergy->addWidget(lbEnergy);

        barEnergy = new QProgressBar(widget_2);
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
        lbFear = new QLabel(widget_2);
        lbFear->setObjectName(QStringLiteral("lbFear"));
        lbFear->setMinimumSize(QSize(175, 0));

        lvlFear->addWidget(lbFear);

        barFear = new QProgressBar(widget_2);
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
        lbAffection = new QLabel(widget_2);
        lbAffection->setObjectName(QStringLiteral("lbAffection"));
        lbAffection->setMinimumSize(QSize(175, 0));

        lvlAffection->addWidget(lbAffection);

        barAffection = new QProgressBar(widget_2);
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
        lbMessy = new QLabel(widget_2);
        lbMessy->setObjectName(QStringLiteral("lbMessy"));
        lbMessy->setMinimumSize(QSize(175, 0));

        messiness->addWidget(lbMessy);

        barMessy = new QProgressBar(widget_2);
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
        lbNocturnal = new QLabel(widget_2);
        lbNocturnal->setObjectName(QStringLiteral("lbNocturnal"));
        lbNocturnal->setMinimumSize(QSize(100, 0));
        lbNocturnal->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbNocturnal);

        lbIndoor = new QLabel(widget_2);
        lbIndoor->setObjectName(QStringLiteral("lbIndoor"));
        lbIndoor->setMinimumSize(QSize(100, 0));
        lbIndoor->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbIndoor);

        lbHistory = new QLabel(widget_2);
        lbHistory->setObjectName(QStringLiteral("lbHistory"));
        lbHistory->setMinimumSize(QSize(100, 0));
        lbHistory->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbHistory);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ViewAnimals);

        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", nullptr));
        lbName->setText(QApplication::translate("ViewAnimals", "Name:", nullptr));
        aName->setText(QString());
        lbSpecies->setText(QApplication::translate("ViewAnimals", "Species:", nullptr));
        aSpecies->setText(QString());
        lbBreed->setText(QApplication::translate("ViewAnimals", "Breed:", nullptr));
        aBreed->setText(QString());
        lbSize->setText(QApplication::translate("ViewAnimals", "Size:", nullptr));
        aSize->setText(QString());
        lbAge->setText(QApplication::translate("ViewAnimals", "Age:", nullptr));
        aAge->setText(QString());
        lbGender->setText(QApplication::translate("ViewAnimals", "Gender:", nullptr));
        aGender->setText(QString());
        lbFur->setText(QApplication::translate("ViewAnimals", "Fur:", nullptr));
        aFur->setText(QString());
        lbAnimalImage->setText(QString());
        lbLikesTravel->setText(QApplication::translate("ViewAnimals", "Likes travelling:", nullptr));
        lbChildren->setText(QApplication::translate("ViewAnimals", "Good with children:", nullptr));
        lbAnimals->setText(QApplication::translate("ViewAnimals", "Good with animals:", nullptr));
        lbStrangers->setText(QApplication::translate("ViewAnimals", "Good with strangers:", nullptr));
        lbCrowds->setText(QApplication::translate("ViewAnimals", "Good in crowds:", nullptr));
        lbNoise->setText(QApplication::translate("ViewAnimals", "Good with loud noises:", nullptr));
        lbProtector->setText(QApplication::translate("ViewAnimals", "Good home protector:", nullptr));
        lbEnergy->setText(QApplication::translate("ViewAnimals", "Level of energy:", nullptr));
        lbFear->setText(QApplication::translate("ViewAnimals", "Level of fear:", nullptr));
        lbAffection->setText(QApplication::translate("ViewAnimals", "Level of affection:", nullptr));
        lbMessy->setText(QApplication::translate("ViewAnimals", "Messiness:", nullptr));
        lbNocturnal->setText(QApplication::translate("ViewAnimals", "Nocturnal", nullptr));
        lbIndoor->setText(QApplication::translate("ViewAnimals", "Indoor", nullptr));
        lbHistory->setText(QApplication::translate("ViewAnimals", "Rescue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
