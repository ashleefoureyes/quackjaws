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
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tabOptimal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *lbClientMatches;
    QLabel *lbAnimalMatches;
    QLabel *lbOptimalMatchScore;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listOptimalMatches;
    QPushButton *buttonDetailedMatchInfo;
    QWidget *tabDetails;
    QWidget *widget;
    QListWidget *listAnimalsDetailed;
    QListWidget *listClientsDetailed;
    QLabel *label;
    QFrame *line;
    QWidget *widget_2;
    QPushButton *buttonNext;
    QTabWidget *tabWidgetDetailed;
    QWidget *tab;
    QWidget *widget_4;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *layoutWidget1;
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
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QLabel *lbMatchName;
    QLabel *lbMatchScore;

    void setupUi(QDialog *ViewResults)
    {
        if (ViewResults->objectName().isEmpty())
            ViewResults->setObjectName(QStringLiteral("ViewResults"));
        ViewResults->resize(468, 602);
        ViewResults->setMinimumSize(QSize(468, 602));
        ViewResults->setMaximumSize(QSize(468, 602));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/cuacs_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewResults->setWindowIcon(icon);
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
        verticalLayout_5 = new QVBoxLayout(ViewResults);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(ViewResults);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabOptimal = new QWidget();
        tabOptimal->setObjectName(QStringLiteral("tabOptimal"));
        layoutWidget = new QWidget(tabOptimal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 9, 451, 551));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font;
        font.setPointSize(25);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        lbClientMatches = new QLabel(widget_3);
        lbClientMatches->setObjectName(QStringLiteral("lbClientMatches"));

        gridLayout_3->addWidget(lbClientMatches, 1, 0, 1, 1);

        lbAnimalMatches = new QLabel(widget_3);
        lbAnimalMatches->setObjectName(QStringLiteral("lbAnimalMatches"));

        gridLayout_3->addWidget(lbAnimalMatches, 2, 0, 1, 1);

        lbOptimalMatchScore = new QLabel(widget_3);
        lbOptimalMatchScore->setObjectName(QStringLiteral("lbOptimalMatchScore"));

        gridLayout_3->addWidget(lbOptimalMatchScore, 3, 0, 1, 1);


        verticalLayout_4->addWidget(widget_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listOptimalMatches = new QListWidget(layoutWidget);
        listOptimalMatches->setObjectName(QStringLiteral("listOptimalMatches"));

        verticalLayout_3->addWidget(listOptimalMatches);

        buttonDetailedMatchInfo = new QPushButton(layoutWidget);
        buttonDetailedMatchInfo->setObjectName(QStringLiteral("buttonDetailedMatchInfo"));

        verticalLayout_3->addWidget(buttonDetailedMatchInfo);


        verticalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(tabOptimal, QString());
        tabDetails = new QWidget();
        tabDetails->setObjectName(QStringLiteral("tabDetails"));
        widget = new QWidget(tabDetails);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 390, 451, 181));
        listAnimalsDetailed = new QListWidget(widget);
        listAnimalsDetailed->setObjectName(QStringLiteral("listAnimalsDetailed"));
        listAnimalsDetailed->setGeometry(QRect(260, 40, 181, 121));
        listClientsDetailed = new QListWidget(widget);
        listClientsDetailed->setObjectName(QStringLiteral("listClientsDetailed"));
        listClientsDetailed->setGeometry(QRect(10, 40, 181, 121));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 80, 21, 16));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 20, 431, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 0, 431, 21));
        widget_2->setMinimumSize(QSize(0, 20));
        buttonNext = new QPushButton(widget_2);
        buttonNext->setObjectName(QStringLiteral("buttonNext"));
        buttonNext->setGeometry(QRect(10, 0, 411, 20));
        tabWidgetDetailed = new QTabWidget(tabDetails);
        tabWidgetDetailed->setObjectName(QStringLiteral("tabWidgetDetailed"));
        tabWidgetDetailed->setGeometry(QRect(0, 70, 451, 311));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget_4 = new QWidget(tab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(9, 9, 460, 41));
        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 10, 141, 17));
        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 10, 141, 17));
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(4, 41, 441, 233));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        barClTravel = new QProgressBar(layoutWidget1);
        barClTravel->setObjectName(QStringLiteral("barClTravel"));
        barClTravel->setMinimumSize(QSize(150, 0));
        barClTravel->setMaximumSize(QSize(170, 19));
        barClTravel->setLayoutDirection(Qt::LeftToRight);
        barClTravel->setMinimum(-1);
        barClTravel->setMaximum(4);
        barClTravel->setValue(0);
        barClTravel->setTextVisible(false);
        barClTravel->setInvertedAppearance(true);

        horizontalLayout->addWidget(barClTravel);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 15));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        BarAnTravel = new QProgressBar(layoutWidget1);
        BarAnTravel->setObjectName(QStringLiteral("BarAnTravel"));
        BarAnTravel->setMinimumSize(QSize(150, 0));
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
        barClChildren = new QProgressBar(layoutWidget1);
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

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 15));
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        BarAnChildren = new QProgressBar(layoutWidget1);
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
        barClAnimals = new QProgressBar(layoutWidget1);
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

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(50, 15));
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        barAnAnimals = new QProgressBar(layoutWidget1);
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
        barClStrangers = new QProgressBar(layoutWidget1);
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

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(50, 15));
        label_5->setMaximumSize(QSize(16777215, 15));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        barAnStrangers = new QProgressBar(layoutWidget1);
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
        barClCrowds = new QProgressBar(layoutWidget1);
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

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(50, 15));
        label_6->setMaximumSize(QSize(16777215, 15));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        barAnCrowds = new QProgressBar(layoutWidget1);
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
        barClNoise = new QProgressBar(layoutWidget1);
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

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(50, 15));
        label_7->setMaximumSize(QSize(16777215, 15));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        barAnNoise = new QProgressBar(layoutWidget1);
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
        barClProtective = new QProgressBar(layoutWidget1);
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

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(50, 15));
        label_8->setMaximumSize(QSize(16777215, 15));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);

        barAnProtective = new QProgressBar(layoutWidget1);
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
        barClEnergetic = new QProgressBar(layoutWidget1);
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

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(50, 15));
        label_9->setMaximumSize(QSize(16777215, 15));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);

        barAnEnergetic = new QProgressBar(layoutWidget1);
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
        barClFearful = new QProgressBar(layoutWidget1);
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

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(50, 15));
        label_10->setMaximumSize(QSize(16777215, 15));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_10);

        barAnFearful = new QProgressBar(layoutWidget1);
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
        barClAffectionate = new QProgressBar(layoutWidget1);
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

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(50, 15));
        label_11->setMaximumSize(QSize(16777215, 15));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_11);

        barAnAffectionate = new QProgressBar(layoutWidget1);
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
        barClMessy = new QProgressBar(layoutWidget1);
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

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(50, 15));
        label_12->setMaximumSize(QSize(16777215, 15));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_12);

        barAnMessy = new QProgressBar(layoutWidget1);
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

        tabWidgetDetailed->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbDetailedAnimalInfo = new QLabel(tab_2);
        lbDetailedAnimalInfo->setObjectName(QStringLiteral("lbDetailedAnimalInfo"));

        verticalLayout_2->addWidget(lbDetailedAnimalInfo);

        tabWidgetDetailed->addTab(tab_2, QString());
        layoutWidget2 = new QWidget(tabDetails);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 421, 40));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lbMatchName = new QLabel(layoutWidget2);
        lbMatchName->setObjectName(QStringLiteral("lbMatchName"));

        verticalLayout_6->addWidget(lbMatchName);

        lbMatchScore = new QLabel(layoutWidget2);
        lbMatchScore->setObjectName(QStringLiteral("lbMatchScore"));

        verticalLayout_6->addWidget(lbMatchScore);

        tabWidget->addTab(tabDetails, QString());

        verticalLayout_5->addWidget(tabWidget);


        retranslateUi(ViewResults);

        tabWidget->setCurrentIndex(1);
        tabWidgetDetailed->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewResults);
    } // setupUi

    void retranslateUi(QDialog *ViewResults)
    {
        ViewResults->setWindowTitle(QApplication::translate("ViewResults", "Match Results", Q_NULLPTR));
        label_13->setText(QApplication::translate("ViewResults", "Optimal Matches", Q_NULLPTR));
        lbClientMatches->setText(QApplication::translate("ViewResults", "X/X out of X clients have an optimal match", Q_NULLPTR));
        lbAnimalMatches->setText(QApplication::translate("ViewResults", "X/X out of X animals have an optimal match", Q_NULLPTR));
        lbOptimalMatchScore->setText(QString());
        buttonDetailedMatchInfo->setText(QApplication::translate("ViewResults", "View Detailed Information For Selected Match", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabOptimal), QApplication::translate("ViewResults", "Optimal Matches", Q_NULLPTR));
        label->setText(QApplication::translate("ViewResults", "->", Q_NULLPTR));
        buttonNext->setText(QApplication::translate("ViewResults", "View Species-specific information", Q_NULLPTR));
        label_14->setText(QApplication::translate("ViewResults", "Client Preferences:", Q_NULLPTR));
        label_15->setText(QApplication::translate("ViewResults", "Animal Attributes:", Q_NULLPTR));
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
        lbDetailedAnimalInfo->setText(QApplication::translate("ViewResults", "Please select client and animal to match", Q_NULLPTR));
        tabWidgetDetailed->setTabText(tabWidgetDetailed->indexOf(tab_2), QApplication::translate("ViewResults", "Tab 2", Q_NULLPTR));
        lbMatchName->setText(QString());
        lbMatchScore->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabDetails), QApplication::translate("ViewResults", "Detailed Match Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewResults: public Ui_ViewResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRESULTS_H
