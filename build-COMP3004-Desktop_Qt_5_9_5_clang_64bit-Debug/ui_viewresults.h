/********************************************************************************
** Form generated from reading UI file 'viewresults.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRESULTS_H
#define UI_VIEWRESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewResults
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabOptimal;
    QListWidget *listOptimalMatches;
    QLabel *label_13;
    QPushButton *buttonDetailedMatchInfo;
    QLabel *lbClientMatches;
    QLabel *lbAnimalMatches;
    QLabel *lbOptimalMatchScore;
    QWidget *tabDetails;
    QLabel *lbMatchScore;
    QLabel *lbMatchName;
    QWidget *widget;
    QListWidget *listAnimalsDetailed;
    QListWidget *listClientsDetailed;
    QLabel *label;
    QFrame *line;
    QWidget *widget_2;
    QPushButton *buttonNext;
    QPushButton *buttonBack;
    QTabWidget *tabWidgetDetailed;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QProgressBar *barClTravel;
    QLabel *label_2;
    QProgressBar *BarAnTravel;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *barClChildren;
    QLabel *label_3;
    QProgressBar *BarAnChildren;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *barClAnimals;
    QLabel *label_4;
    QProgressBar *barAnAnimals;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *barClStrangers;
    QLabel *label_5;
    QProgressBar *barAnStrangers;
    QHBoxLayout *horizontalLayout_5;
    QProgressBar *barClCrowds;
    QLabel *label_6;
    QProgressBar *barAnCrowds;
    QHBoxLayout *horizontalLayout_6;
    QProgressBar *barClNoise;
    QLabel *label_7;
    QProgressBar *barAnNoise;
    QHBoxLayout *horizontalLayout_7;
    QProgressBar *barClProtective;
    QLabel *label_8;
    QProgressBar *barAnProtective;
    QHBoxLayout *horizontalLayout_8;
    QProgressBar *barClEnergetic;
    QLabel *label_9;
    QProgressBar *barAnEnergetic;
    QHBoxLayout *horizontalLayout_9;
    QProgressBar *barClFearful;
    QLabel *label_10;
    QProgressBar *barAnFearful;
    QHBoxLayout *horizontalLayout_10;
    QProgressBar *barClAffectionate;
    QLabel *label_11;
    QProgressBar *barAnAffectionate;
    QHBoxLayout *horizontalLayout_11;
    QProgressBar *barClMessy;
    QLabel *label_12;
    QProgressBar *barAnMessy;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbDetailedAnimalInfo;

    void setupUi(QDialog *ViewResults)
    {
        if (ViewResults->objectName().isEmpty())
            ViewResults->setObjectName(QStringLiteral("ViewResults"));
        ViewResults->resize(447, 579);
        ViewResults->setStyleSheet(QLatin1String("QDialog{\n"
"background-color:#191919;\n"
"}\n"
"\n"
"Line{\n"
"color:#fff;\n"
"}\n"
"\n"
"QProgressBar{\n"
"border: 2px solid grey;\n"
"border-radius: 5px;\n"
"max-height: 15px;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color: #c23b22;\n"
"}\n"
"\n"
"QPushButton{\n"
"color: #fff;\n"
"background-color:#c23b22;\n"
"border-radius:7px;\n"
"min-height: 20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:ccc;\n"
"border-color:#2d89ef;\n"
"border-width:2px;\n"
"}\n"
"\n"
"QLabel{\n"
"color: #ffffff\n"
"}\n"
"\n"
"QTabWidget{\n"
"background-color: #1d1d1d;\n"
"}\n"
"\n"
"QTabWidget::pane{\n"
"background-color: #1d1d1d;\n"
"}\n"
"\n"
"QTabWidget QStackedWidget > QWidget {\n"
"background-color: #1d1d1d;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius: 4px;\n"
"min-height: 20px;\n"
"}\n"
"\n"
"QTabBar{\n"
"background-color: #1d1d1d;\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"background-color: #4d4d4d;\n"
"border: 1px solid black;\n"
"min-height: 15px;\n"
"min-width: 100px;\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QTabBar::tab:select"
                        "ed{\n"
"background-color: #ffffff;\n"
"color: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:hover{\n"
"background-color: #aaaaaa;\n"
"}\n"
"\n"
"QRadioButton{\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover{\n"
"background-color: #c23b22;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked{\n"
"background-color: #c23b22;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled{\n"
"background-color: #e6aea4;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked{\n"
"background-color: #ffffff;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover{\n"
"background-color: #e6aea4;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed{\n"
"background-color: #aaaaaa;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled{\n"
"background-color: #555555;\n"
"border: 0px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked{\n"
"background-color: #000000;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"Q"
                        "CheckBox::indicator:unchecked{\n"
"background-color: #ffffff;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QCheckBox{\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled{\n"
"background-color: #aaaaaa;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed{\n"
"background-color: #aaaaaa\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"selection-background-color: #c23b22;\n"
"}\n"
"\n"
"QListWidget::item:selected!active{\n"
"selection-background-color: #e6aea4;\n"
"}\n"
""));
        gridLayout = new QGridLayout(ViewResults);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(ViewResults);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabOptimal = new QWidget();
        tabOptimal->setObjectName(QStringLiteral("tabOptimal"));
        listOptimalMatches = new QListWidget(tabOptimal);
        listOptimalMatches->setObjectName(QStringLiteral("listOptimalMatches"));
        listOptimalMatches->setGeometry(QRect(0, 201, 431, 321));
        label_13 = new QLabel(tabOptimal);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 10, 191, 51));
        QFont font;
        font.setPointSize(25);
        label_13->setFont(font);
        buttonDetailedMatchInfo = new QPushButton(tabOptimal);
        buttonDetailedMatchInfo->setObjectName(QStringLiteral("buttonDetailedMatchInfo"));
        buttonDetailedMatchInfo->setGeometry(QRect(90, 530, 271, 20));
        lbClientMatches = new QLabel(tabOptimal);
        lbClientMatches->setObjectName(QStringLiteral("lbClientMatches"));
        lbClientMatches->setGeometry(QRect(20, 70, 211, 16));
        lbAnimalMatches = new QLabel(tabOptimal);
        lbAnimalMatches->setObjectName(QStringLiteral("lbAnimalMatches"));
        lbAnimalMatches->setGeometry(QRect(20, 90, 221, 16));
        lbOptimalMatchScore = new QLabel(tabOptimal);
        lbOptimalMatchScore->setObjectName(QStringLiteral("lbOptimalMatchScore"));
        lbOptimalMatchScore->setGeometry(QRect(30, 130, 121, 16));
        tabWidget->addTab(tabOptimal, QString());
        tabDetails = new QWidget();
        tabDetails->setObjectName(QStringLiteral("tabDetails"));
        lbMatchScore = new QLabel(tabDetails);
        lbMatchScore->setObjectName(QStringLiteral("lbMatchScore"));
        lbMatchScore->setGeometry(QRect(90, 40, 151, 16));
        lbMatchName = new QLabel(tabDetails);
        lbMatchName->setObjectName(QStringLiteral("lbMatchName"));
        lbMatchName->setGeometry(QRect(50, 10, 291, 16));
        widget = new QWidget(tabDetails);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 390, 451, 151));
        listAnimalsDetailed = new QListWidget(widget);
        listAnimalsDetailed->setObjectName(QStringLiteral("listAnimalsDetailed"));
        listAnimalsDetailed->setGeometry(QRect(240, 40, 181, 101));
        listClientsDetailed = new QListWidget(widget);
        listClientsDetailed->setObjectName(QStringLiteral("listClientsDetailed"));
        listClientsDetailed->setGeometry(QRect(10, 40, 181, 101));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 80, 21, 16));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 20, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 0, 414, 21));
        widget_2->setMinimumSize(QSize(0, 20));
        buttonNext = new QPushButton(widget_2);
        buttonNext->setObjectName(QStringLiteral("buttonNext"));
        buttonNext->setGeometry(QRect(390, 0, 20, 20));
        buttonBack = new QPushButton(widget_2);
        buttonBack->setObjectName(QStringLiteral("buttonBack"));
        buttonBack->setGeometry(QRect(0, 0, 20, 20));
        tabWidgetDetailed = new QTabWidget(tabDetails);
        tabWidgetDetailed->setObjectName(QStringLiteral("tabWidgetDetailed"));
        tabWidgetDetailed->setGeometry(QRect(0, 110, 426, 266));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        barClTravel = new QProgressBar(tab);
        barClTravel->setObjectName(QStringLiteral("barClTravel"));
        barClTravel->setMinimumSize(QSize(170, 0));
        barClTravel->setMaximumSize(QSize(170, 19));
        barClTravel->setLayoutDirection(Qt::LeftToRight);
        barClTravel->setMinimum(-1);
        barClTravel->setMaximum(4);
        barClTravel->setValue(0);
        barClTravel->setTextVisible(false);
        barClTravel->setInvertedAppearance(true);

        horizontalLayout->addWidget(barClTravel);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 15));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        BarAnTravel = new QProgressBar(tab);
        BarAnTravel->setObjectName(QStringLiteral("BarAnTravel"));
        BarAnTravel->setMinimumSize(QSize(170, 0));
        BarAnTravel->setMaximumSize(QSize(170, 19));
        BarAnTravel->setLayoutDirection(Qt::LeftToRight);
        BarAnTravel->setMinimum(-1);
        BarAnTravel->setMaximum(4);
        BarAnTravel->setValue(0);
        BarAnTravel->setTextVisible(false);
        BarAnTravel->setInvertedAppearance(false);

        horizontalLayout->addWidget(BarAnTravel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        barClChildren = new QProgressBar(tab);
        barClChildren->setObjectName(QStringLiteral("barClChildren"));
        barClChildren->setMinimumSize(QSize(170, 0));
        barClChildren->setMaximumSize(QSize(170, 19));
        barClChildren->setLayoutDirection(Qt::LeftToRight);
        barClChildren->setMinimum(-1);
        barClChildren->setMaximum(4);
        barClChildren->setValue(0);
        barClChildren->setTextVisible(false);
        barClChildren->setInvertedAppearance(true);

        horizontalLayout_2->addWidget(barClChildren);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        BarAnChildren = new QProgressBar(tab);
        BarAnChildren->setObjectName(QStringLiteral("BarAnChildren"));
        BarAnChildren->setMinimumSize(QSize(170, 0));
        BarAnChildren->setMaximumSize(QSize(170, 19));
        BarAnChildren->setLayoutDirection(Qt::LeftToRight);
        BarAnChildren->setMinimum(-1);
        BarAnChildren->setMaximum(4);
        BarAnChildren->setValue(0);
        BarAnChildren->setTextVisible(false);
        BarAnChildren->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(BarAnChildren);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        barClAnimals = new QProgressBar(tab);
        barClAnimals->setObjectName(QStringLiteral("barClAnimals"));
        barClAnimals->setMinimumSize(QSize(170, 0));
        barClAnimals->setMaximumSize(QSize(170, 19));
        barClAnimals->setLayoutDirection(Qt::LeftToRight);
        barClAnimals->setMinimum(-1);
        barClAnimals->setMaximum(4);
        barClAnimals->setValue(0);
        barClAnimals->setTextVisible(false);
        barClAnimals->setInvertedAppearance(true);

        horizontalLayout_3->addWidget(barClAnimals);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 15));
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        barAnAnimals = new QProgressBar(tab);
        barAnAnimals->setObjectName(QStringLiteral("barAnAnimals"));
        barAnAnimals->setMinimumSize(QSize(170, 0));
        barAnAnimals->setMaximumSize(QSize(170, 19));
        barAnAnimals->setLayoutDirection(Qt::LeftToRight);
        barAnAnimals->setMinimum(-1);
        barAnAnimals->setMaximum(4);
        barAnAnimals->setValue(0);
        barAnAnimals->setTextVisible(false);
        barAnAnimals->setInvertedAppearance(false);

        horizontalLayout_3->addWidget(barAnAnimals);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        barClStrangers = new QProgressBar(tab);
        barClStrangers->setObjectName(QStringLiteral("barClStrangers"));
        barClStrangers->setMinimumSize(QSize(170, 0));
        barClStrangers->setMaximumSize(QSize(170, 19));
        barClStrangers->setLayoutDirection(Qt::LeftToRight);
        barClStrangers->setMinimum(-1);
        barClStrangers->setMaximum(4);
        barClStrangers->setValue(0);
        barClStrangers->setTextVisible(false);
        barClStrangers->setInvertedAppearance(true);

        horizontalLayout_4->addWidget(barClStrangers);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 15));
        label_5->setMaximumSize(QSize(16777215, 15));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        barAnStrangers = new QProgressBar(tab);
        barAnStrangers->setObjectName(QStringLiteral("barAnStrangers"));
        barAnStrangers->setMinimumSize(QSize(170, 0));
        barAnStrangers->setMaximumSize(QSize(170, 19));
        barAnStrangers->setLayoutDirection(Qt::LeftToRight);
        barAnStrangers->setMinimum(-1);
        barAnStrangers->setMaximum(4);
        barAnStrangers->setValue(0);
        barAnStrangers->setTextVisible(false);
        barAnStrangers->setInvertedAppearance(false);

        horizontalLayout_4->addWidget(barAnStrangers);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        barClCrowds = new QProgressBar(tab);
        barClCrowds->setObjectName(QStringLiteral("barClCrowds"));
        barClCrowds->setMinimumSize(QSize(170, 0));
        barClCrowds->setMaximumSize(QSize(170, 19));
        barClCrowds->setLayoutDirection(Qt::LeftToRight);
        barClCrowds->setMinimum(-1);
        barClCrowds->setMaximum(4);
        barClCrowds->setValue(0);
        barClCrowds->setTextVisible(false);
        barClCrowds->setInvertedAppearance(true);

        horizontalLayout_5->addWidget(barClCrowds);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 15));
        label_6->setMaximumSize(QSize(16777215, 15));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        barAnCrowds = new QProgressBar(tab);
        barAnCrowds->setObjectName(QStringLiteral("barAnCrowds"));
        barAnCrowds->setMinimumSize(QSize(170, 0));
        barAnCrowds->setMaximumSize(QSize(170, 19));
        barAnCrowds->setLayoutDirection(Qt::LeftToRight);
        barAnCrowds->setMinimum(-1);
        barAnCrowds->setMaximum(4);
        barAnCrowds->setValue(0);
        barAnCrowds->setTextVisible(false);
        barAnCrowds->setInvertedAppearance(false);

        horizontalLayout_5->addWidget(barAnCrowds);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        barClNoise = new QProgressBar(tab);
        barClNoise->setObjectName(QStringLiteral("barClNoise"));
        barClNoise->setMinimumSize(QSize(170, 0));
        barClNoise->setMaximumSize(QSize(170, 19));
        barClNoise->setLayoutDirection(Qt::LeftToRight);
        barClNoise->setMinimum(-1);
        barClNoise->setMaximum(4);
        barClNoise->setValue(0);
        barClNoise->setTextVisible(false);
        barClNoise->setInvertedAppearance(true);

        horizontalLayout_6->addWidget(barClNoise);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 15));
        label_7->setMaximumSize(QSize(16777215, 15));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        barAnNoise = new QProgressBar(tab);
        barAnNoise->setObjectName(QStringLiteral("barAnNoise"));
        barAnNoise->setMinimumSize(QSize(170, 0));
        barAnNoise->setMaximumSize(QSize(170, 19));
        barAnNoise->setLayoutDirection(Qt::LeftToRight);
        barAnNoise->setMinimum(-1);
        barAnNoise->setMaximum(4);
        barAnNoise->setValue(0);
        barAnNoise->setTextVisible(false);
        barAnNoise->setInvertedAppearance(false);

        horizontalLayout_6->addWidget(barAnNoise);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        barClProtective = new QProgressBar(tab);
        barClProtective->setObjectName(QStringLiteral("barClProtective"));
        barClProtective->setMinimumSize(QSize(170, 0));
        barClProtective->setMaximumSize(QSize(170, 19));
        barClProtective->setLayoutDirection(Qt::LeftToRight);
        barClProtective->setMinimum(-1);
        barClProtective->setMaximum(4);
        barClProtective->setValue(0);
        barClProtective->setTextVisible(false);
        barClProtective->setInvertedAppearance(true);

        horizontalLayout_7->addWidget(barClProtective);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 15));
        label_8->setMaximumSize(QSize(16777215, 15));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);

        barAnProtective = new QProgressBar(tab);
        barAnProtective->setObjectName(QStringLiteral("barAnProtective"));
        barAnProtective->setMinimumSize(QSize(170, 0));
        barAnProtective->setMaximumSize(QSize(170, 19));
        barAnProtective->setLayoutDirection(Qt::LeftToRight);
        barAnProtective->setMinimum(-1);
        barAnProtective->setMaximum(4);
        barAnProtective->setValue(0);
        barAnProtective->setTextVisible(false);
        barAnProtective->setInvertedAppearance(false);

        horizontalLayout_7->addWidget(barAnProtective);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        barClEnergetic = new QProgressBar(tab);
        barClEnergetic->setObjectName(QStringLiteral("barClEnergetic"));
        barClEnergetic->setMinimumSize(QSize(170, 0));
        barClEnergetic->setMaximumSize(QSize(170, 19));
        barClEnergetic->setLayoutDirection(Qt::LeftToRight);
        barClEnergetic->setMinimum(-1);
        barClEnergetic->setMaximum(4);
        barClEnergetic->setValue(0);
        barClEnergetic->setTextVisible(false);
        barClEnergetic->setInvertedAppearance(true);

        horizontalLayout_8->addWidget(barClEnergetic);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 15));
        label_9->setMaximumSize(QSize(16777215, 15));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);

        barAnEnergetic = new QProgressBar(tab);
        barAnEnergetic->setObjectName(QStringLiteral("barAnEnergetic"));
        barAnEnergetic->setMinimumSize(QSize(170, 0));
        barAnEnergetic->setMaximumSize(QSize(170, 19));
        barAnEnergetic->setLayoutDirection(Qt::LeftToRight);
        barAnEnergetic->setMinimum(-1);
        barAnEnergetic->setMaximum(4);
        barAnEnergetic->setValue(0);
        barAnEnergetic->setTextVisible(false);
        barAnEnergetic->setInvertedAppearance(false);

        horizontalLayout_8->addWidget(barAnEnergetic);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        barClFearful = new QProgressBar(tab);
        barClFearful->setObjectName(QStringLiteral("barClFearful"));
        barClFearful->setMinimumSize(QSize(170, 0));
        barClFearful->setMaximumSize(QSize(170, 19));
        barClFearful->setLayoutDirection(Qt::LeftToRight);
        barClFearful->setMinimum(-1);
        barClFearful->setMaximum(4);
        barClFearful->setValue(0);
        barClFearful->setTextVisible(false);
        barClFearful->setInvertedAppearance(true);

        horizontalLayout_9->addWidget(barClFearful);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 15));
        label_10->setMaximumSize(QSize(16777215, 15));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_10);

        barAnFearful = new QProgressBar(tab);
        barAnFearful->setObjectName(QStringLiteral("barAnFearful"));
        barAnFearful->setMinimumSize(QSize(170, 0));
        barAnFearful->setMaximumSize(QSize(170, 19));
        barAnFearful->setLayoutDirection(Qt::LeftToRight);
        barAnFearful->setMinimum(-1);
        barAnFearful->setMaximum(4);
        barAnFearful->setValue(0);
        barAnFearful->setTextVisible(false);
        barAnFearful->setInvertedAppearance(false);

        horizontalLayout_9->addWidget(barAnFearful);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        barClAffectionate = new QProgressBar(tab);
        barClAffectionate->setObjectName(QStringLiteral("barClAffectionate"));
        barClAffectionate->setMinimumSize(QSize(170, 0));
        barClAffectionate->setMaximumSize(QSize(170, 19));
        barClAffectionate->setLayoutDirection(Qt::LeftToRight);
        barClAffectionate->setMinimum(-1);
        barClAffectionate->setMaximum(4);
        barClAffectionate->setValue(0);
        barClAffectionate->setTextVisible(false);
        barClAffectionate->setInvertedAppearance(true);

        horizontalLayout_10->addWidget(barClAffectionate);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 15));
        label_11->setMaximumSize(QSize(16777215, 15));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_11);

        barAnAffectionate = new QProgressBar(tab);
        barAnAffectionate->setObjectName(QStringLiteral("barAnAffectionate"));
        barAnAffectionate->setMinimumSize(QSize(170, 0));
        barAnAffectionate->setMaximumSize(QSize(170, 19));
        barAnAffectionate->setLayoutDirection(Qt::LeftToRight);
        barAnAffectionate->setMinimum(-1);
        barAnAffectionate->setMaximum(4);
        barAnAffectionate->setValue(0);
        barAnAffectionate->setTextVisible(false);
        barAnAffectionate->setInvertedAppearance(false);

        horizontalLayout_10->addWidget(barAnAffectionate);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        barClMessy = new QProgressBar(tab);
        barClMessy->setObjectName(QStringLiteral("barClMessy"));
        barClMessy->setMinimumSize(QSize(170, 0));
        barClMessy->setMaximumSize(QSize(170, 19));
        barClMessy->setLayoutDirection(Qt::LeftToRight);
        barClMessy->setMinimum(-1);
        barClMessy->setMaximum(4);
        barClMessy->setValue(0);
        barClMessy->setTextVisible(false);
        barClMessy->setInvertedAppearance(true);

        horizontalLayout_11->addWidget(barClMessy);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(0, 15));
        label_12->setMaximumSize(QSize(16777215, 15));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_12);

        barAnMessy = new QProgressBar(tab);
        barAnMessy->setObjectName(QStringLiteral("barAnMessy"));
        barAnMessy->setMinimumSize(QSize(170, 0));
        barAnMessy->setMaximumSize(QSize(170, 19));
        barAnMessy->setLayoutDirection(Qt::LeftToRight);
        barAnMessy->setMinimum(-1);
        barAnMessy->setMaximum(4);
        barAnMessy->setValue(0);
        barAnMessy->setTextVisible(false);
        barAnMessy->setInvertedAppearance(false);

        horizontalLayout_11->addWidget(barAnMessy);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidgetDetailed->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbDetailedAnimalInfo = new QLabel(tab_2);
        lbDetailedAnimalInfo->setObjectName(QStringLiteral("lbDetailedAnimalInfo"));

        verticalLayout_2->addWidget(lbDetailedAnimalInfo);

        tabWidgetDetailed->addTab(tab_2, QString());
        tabWidget->addTab(tabDetails, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ViewResults);

        tabWidget->setCurrentIndex(0);
        tabWidgetDetailed->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewResults);
    } // setupUi

    void retranslateUi(QDialog *ViewResults)
    {
        ViewResults->setWindowTitle(QApplication::translate("ViewResults", "Dialog", Q_NULLPTR));
        label_13->setText(QApplication::translate("ViewResults", "Optimal Matches", Q_NULLPTR));
        buttonDetailedMatchInfo->setText(QApplication::translate("ViewResults", "View Detailed Information For Selected Match", Q_NULLPTR));
        lbClientMatches->setText(QApplication::translate("ViewResults", "X/X out of X clients have an optimal match", Q_NULLPTR));
        lbAnimalMatches->setText(QApplication::translate("ViewResults", "X/X out of X animals have an optimal match", Q_NULLPTR));
        lbOptimalMatchScore->setText(QApplication::translate("ViewResults", "Match score:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabOptimal), QApplication::translate("ViewResults", "Optimal Matches", Q_NULLPTR));
        lbMatchScore->setText(QApplication::translate("ViewResults", "Match score:", Q_NULLPTR));
        lbMatchName->setText(QString());
        label->setText(QApplication::translate("ViewResults", "->", Q_NULLPTR));
        buttonNext->setText(QApplication::translate("ViewResults", ">", Q_NULLPTR));
        buttonBack->setText(QApplication::translate("ViewResults", "<", Q_NULLPTR));
        label_2->setText(QApplication::translate("ViewResults", "Travel", Q_NULLPTR));
        label_3->setText(QApplication::translate("ViewResults", "Children", Q_NULLPTR));
        label_4->setText(QApplication::translate("ViewResults", "Animals", Q_NULLPTR));
        label_5->setText(QApplication::translate("ViewResults", "Strangers", Q_NULLPTR));
        label_6->setText(QApplication::translate("ViewResults", "Crowds", Q_NULLPTR));
        label_7->setText(QApplication::translate("ViewResults", "Noise", Q_NULLPTR));
        label_8->setText(QApplication::translate("ViewResults", "Protective", Q_NULLPTR));
        label_9->setText(QApplication::translate("ViewResults", "Energetic", Q_NULLPTR));
        label_10->setText(QApplication::translate("ViewResults", "Fearful", Q_NULLPTR));
        label_11->setText(QApplication::translate("ViewResults", "Affectionate", Q_NULLPTR));
        label_12->setText(QApplication::translate("ViewResults", "Messy", Q_NULLPTR));
        tabWidgetDetailed->setTabText(tabWidgetDetailed->indexOf(tab), QApplication::translate("ViewResults", "Tab 1", Q_NULLPTR));
        lbDetailedAnimalInfo->setText(QApplication::translate("ViewResults", "Detailed animal info", Q_NULLPTR));
        tabWidgetDetailed->setTabText(tabWidgetDetailed->indexOf(tab_2), QApplication::translate("ViewResults", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabDetails), QApplication::translate("ViewResults", "Detailed Match Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewResults: public Ui_ViewResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRESULTS_H
