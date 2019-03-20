/********************************************************************************
** Form generated from reading UI file 'viewclients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTS_H
#define UI_VIEWCLIENTS_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *lbContactInfo;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QLabel *lbClientAttributes;
    QFrame *line_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *likesTravel_2;
    QLabel *lbLikesTravel_2;
    QProgressBar *barLikesTravel_2;
    QHBoxLayout *goodwChildren_2;
    QLabel *lbChildren_2;
    QProgressBar *barChildren_2;
    QHBoxLayout *goodwAnimals_2;
    QLabel *lbAnimals_2;
    QProgressBar *barAnimals_2;
    QHBoxLayout *goodwStrangers_2;
    QLabel *lbStrangers_2;
    QProgressBar *barStrangers_2;
    QHBoxLayout *goodinCrowds_2;
    QLabel *lbCrowds_2;
    QProgressBar *barCrowds_2;
    QHBoxLayout *goodwNoise_2;
    QLabel *lbNoise_2;
    QProgressBar *barNoise_2;
    QHBoxLayout *goodProtector_2;
    QLabel *lbProtector_2;
    QProgressBar *barProtector_2;
    QHBoxLayout *lvlEnergy_2;
    QLabel *lbEnergy_2;
    QProgressBar *barEnergy_2;
    QHBoxLayout *lvlFear_2;
    QLabel *lbFear_2;
    QProgressBar *barFear_2;
    QHBoxLayout *lvlAffection_2;
    QLabel *lbAffection_2;
    QProgressBar *barAffection_2;
    QHBoxLayout *messiness_2;
    QLabel *lbMessy_2;
    QProgressBar *barMessy_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbSpeciesDog;
    QRadioButton *rbSpeciesCat;
    QRadioButton *rbSpeciesBird;
    QRadioButton *rbSpeciesLizard;
    QRadioButton *rbSpeciesRabbit;
    QFrame *line;
    QLabel *lbBreedPreferences;
    QListWidget *clientList;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonEdit;
    QButtonGroup *groupSpecies;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(467, 677);
        ViewClients->setMinimumSize(QSize(467, 420));
        ViewClients->setMaximumSize(QSize(467, 677));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/cuacs_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewClients->setWindowIcon(icon);
        ViewClients->setStyleSheet(QLatin1String("QDialog{\n"
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
"QTabBar::tab:selected{\n"
"background-col"
                        "or: #ffffff;\n"
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
"QCheckBox::indicator:un"
                        "checked{\n"
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
        gridLayout = new QGridLayout(ViewClients);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(ViewClients);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lbContactInfo = new QLabel(frame);
        lbContactInfo->setObjectName(QStringLiteral("lbContactInfo"));
        lbContactInfo->setMinimumSize(QSize(440, 80));
        lbContactInfo->setMaximumSize(QSize(440, 80));
        lbContactInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(lbContactInfo, 0, 0, 1, 1);

        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 380));
        tabWidget->setMaximumSize(QSize(485, 380));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lbClientAttributes = new QLabel(tab);
        lbClientAttributes->setObjectName(QStringLiteral("lbClientAttributes"));
        lbClientAttributes->setMinimumSize(QSize(0, 90));
        lbClientAttributes->setMaximumSize(QSize(485, 90));

        verticalLayout_5->addWidget(lbClientAttributes);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(1);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        likesTravel_2 = new QHBoxLayout();
        likesTravel_2->setObjectName(QStringLiteral("likesTravel_2"));
        lbLikesTravel_2 = new QLabel(tab);
        lbLikesTravel_2->setObjectName(QStringLiteral("lbLikesTravel_2"));
        lbLikesTravel_2->setMinimumSize(QSize(175, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbLikesTravel_2->setFont(font1);

        likesTravel_2->addWidget(lbLikesTravel_2);

        barLikesTravel_2 = new QProgressBar(tab);
        barLikesTravel_2->setObjectName(QStringLiteral("barLikesTravel_2"));
        barLikesTravel_2->setMinimumSize(QSize(175, 0));
        barLikesTravel_2->setMinimum(-1);
        barLikesTravel_2->setMaximum(4);
        barLikesTravel_2->setValue(0);
        barLikesTravel_2->setTextVisible(false);

        likesTravel_2->addWidget(barLikesTravel_2);


        verticalLayout_7->addLayout(likesTravel_2);

        goodwChildren_2 = new QHBoxLayout();
        goodwChildren_2->setObjectName(QStringLiteral("goodwChildren_2"));
        lbChildren_2 = new QLabel(tab);
        lbChildren_2->setObjectName(QStringLiteral("lbChildren_2"));
        lbChildren_2->setMinimumSize(QSize(175, 0));
        lbChildren_2->setFont(font1);

        goodwChildren_2->addWidget(lbChildren_2);

        barChildren_2 = new QProgressBar(tab);
        barChildren_2->setObjectName(QStringLiteral("barChildren_2"));
        barChildren_2->setMinimumSize(QSize(175, 0));
        barChildren_2->setMinimum(-1);
        barChildren_2->setMaximum(4);
        barChildren_2->setValue(0);
        barChildren_2->setTextVisible(false);

        goodwChildren_2->addWidget(barChildren_2);


        verticalLayout_7->addLayout(goodwChildren_2);

        goodwAnimals_2 = new QHBoxLayout();
        goodwAnimals_2->setObjectName(QStringLiteral("goodwAnimals_2"));
        lbAnimals_2 = new QLabel(tab);
        lbAnimals_2->setObjectName(QStringLiteral("lbAnimals_2"));
        lbAnimals_2->setMinimumSize(QSize(175, 0));
        lbAnimals_2->setFont(font1);

        goodwAnimals_2->addWidget(lbAnimals_2);

        barAnimals_2 = new QProgressBar(tab);
        barAnimals_2->setObjectName(QStringLiteral("barAnimals_2"));
        barAnimals_2->setMinimumSize(QSize(175, 0));
        barAnimals_2->setMinimum(-1);
        barAnimals_2->setMaximum(4);
        barAnimals_2->setValue(0);
        barAnimals_2->setTextVisible(false);

        goodwAnimals_2->addWidget(barAnimals_2);


        verticalLayout_7->addLayout(goodwAnimals_2);

        goodwStrangers_2 = new QHBoxLayout();
        goodwStrangers_2->setObjectName(QStringLiteral("goodwStrangers_2"));
        lbStrangers_2 = new QLabel(tab);
        lbStrangers_2->setObjectName(QStringLiteral("lbStrangers_2"));
        lbStrangers_2->setMinimumSize(QSize(175, 0));
        lbStrangers_2->setFont(font1);

        goodwStrangers_2->addWidget(lbStrangers_2);

        barStrangers_2 = new QProgressBar(tab);
        barStrangers_2->setObjectName(QStringLiteral("barStrangers_2"));
        barStrangers_2->setMinimumSize(QSize(175, 0));
        barStrangers_2->setMinimum(-1);
        barStrangers_2->setMaximum(4);
        barStrangers_2->setValue(0);
        barStrangers_2->setTextVisible(false);

        goodwStrangers_2->addWidget(barStrangers_2);


        verticalLayout_7->addLayout(goodwStrangers_2);

        goodinCrowds_2 = new QHBoxLayout();
        goodinCrowds_2->setObjectName(QStringLiteral("goodinCrowds_2"));
        lbCrowds_2 = new QLabel(tab);
        lbCrowds_2->setObjectName(QStringLiteral("lbCrowds_2"));
        lbCrowds_2->setMinimumSize(QSize(175, 0));
        lbCrowds_2->setFont(font1);

        goodinCrowds_2->addWidget(lbCrowds_2);

        barCrowds_2 = new QProgressBar(tab);
        barCrowds_2->setObjectName(QStringLiteral("barCrowds_2"));
        barCrowds_2->setMinimumSize(QSize(175, 0));
        barCrowds_2->setMinimum(-1);
        barCrowds_2->setMaximum(4);
        barCrowds_2->setValue(0);
        barCrowds_2->setTextVisible(false);

        goodinCrowds_2->addWidget(barCrowds_2);


        verticalLayout_7->addLayout(goodinCrowds_2);

        goodwNoise_2 = new QHBoxLayout();
        goodwNoise_2->setObjectName(QStringLiteral("goodwNoise_2"));
        lbNoise_2 = new QLabel(tab);
        lbNoise_2->setObjectName(QStringLiteral("lbNoise_2"));
        lbNoise_2->setMinimumSize(QSize(175, 0));
        lbNoise_2->setFont(font1);

        goodwNoise_2->addWidget(lbNoise_2);

        barNoise_2 = new QProgressBar(tab);
        barNoise_2->setObjectName(QStringLiteral("barNoise_2"));
        barNoise_2->setMinimumSize(QSize(175, 0));
        barNoise_2->setMinimum(-1);
        barNoise_2->setMaximum(4);
        barNoise_2->setValue(0);
        barNoise_2->setTextVisible(false);

        goodwNoise_2->addWidget(barNoise_2);


        verticalLayout_7->addLayout(goodwNoise_2);

        goodProtector_2 = new QHBoxLayout();
        goodProtector_2->setObjectName(QStringLiteral("goodProtector_2"));
        lbProtector_2 = new QLabel(tab);
        lbProtector_2->setObjectName(QStringLiteral("lbProtector_2"));
        lbProtector_2->setMinimumSize(QSize(175, 0));
        lbProtector_2->setFont(font1);

        goodProtector_2->addWidget(lbProtector_2);

        barProtector_2 = new QProgressBar(tab);
        barProtector_2->setObjectName(QStringLiteral("barProtector_2"));
        barProtector_2->setMinimumSize(QSize(175, 0));
        barProtector_2->setMinimum(-1);
        barProtector_2->setMaximum(4);
        barProtector_2->setValue(0);
        barProtector_2->setTextVisible(false);

        goodProtector_2->addWidget(barProtector_2);


        verticalLayout_7->addLayout(goodProtector_2);

        lvlEnergy_2 = new QHBoxLayout();
        lvlEnergy_2->setObjectName(QStringLiteral("lvlEnergy_2"));
        lbEnergy_2 = new QLabel(tab);
        lbEnergy_2->setObjectName(QStringLiteral("lbEnergy_2"));
        lbEnergy_2->setMinimumSize(QSize(175, 0));
        lbEnergy_2->setFont(font1);

        lvlEnergy_2->addWidget(lbEnergy_2);

        barEnergy_2 = new QProgressBar(tab);
        barEnergy_2->setObjectName(QStringLiteral("barEnergy_2"));
        barEnergy_2->setMinimumSize(QSize(175, 0));
        barEnergy_2->setMinimum(-1);
        barEnergy_2->setMaximum(4);
        barEnergy_2->setValue(0);
        barEnergy_2->setTextVisible(false);

        lvlEnergy_2->addWidget(barEnergy_2);


        verticalLayout_7->addLayout(lvlEnergy_2);

        lvlFear_2 = new QHBoxLayout();
        lvlFear_2->setObjectName(QStringLiteral("lvlFear_2"));
        lbFear_2 = new QLabel(tab);
        lbFear_2->setObjectName(QStringLiteral("lbFear_2"));
        lbFear_2->setMinimumSize(QSize(175, 0));
        lbFear_2->setFont(font1);

        lvlFear_2->addWidget(lbFear_2);

        barFear_2 = new QProgressBar(tab);
        barFear_2->setObjectName(QStringLiteral("barFear_2"));
        barFear_2->setMinimumSize(QSize(175, 0));
        barFear_2->setMinimum(-1);
        barFear_2->setMaximum(4);
        barFear_2->setValue(0);
        barFear_2->setTextVisible(false);

        lvlFear_2->addWidget(barFear_2);


        verticalLayout_7->addLayout(lvlFear_2);

        lvlAffection_2 = new QHBoxLayout();
        lvlAffection_2->setObjectName(QStringLiteral("lvlAffection_2"));
        lbAffection_2 = new QLabel(tab);
        lbAffection_2->setObjectName(QStringLiteral("lbAffection_2"));
        lbAffection_2->setMinimumSize(QSize(175, 0));
        lbAffection_2->setFont(font1);

        lvlAffection_2->addWidget(lbAffection_2);

        barAffection_2 = new QProgressBar(tab);
        barAffection_2->setObjectName(QStringLiteral("barAffection_2"));
        barAffection_2->setMinimumSize(QSize(175, 0));
        barAffection_2->setMinimum(-1);
        barAffection_2->setMaximum(4);
        barAffection_2->setValue(0);
        barAffection_2->setTextVisible(false);

        lvlAffection_2->addWidget(barAffection_2);


        verticalLayout_7->addLayout(lvlAffection_2);

        messiness_2 = new QHBoxLayout();
        messiness_2->setObjectName(QStringLiteral("messiness_2"));
        lbMessy_2 = new QLabel(tab);
        lbMessy_2->setObjectName(QStringLiteral("lbMessy_2"));
        lbMessy_2->setMinimumSize(QSize(175, 0));
        lbMessy_2->setFont(font1);

        messiness_2->addWidget(lbMessy_2);

        barMessy_2 = new QProgressBar(tab);
        barMessy_2->setObjectName(QStringLiteral("barMessy_2"));
        barMessy_2->setMinimumSize(QSize(175, 0));
        barMessy_2->setMinimum(-1);
        barMessy_2->setMaximum(4);
        barMessy_2->setValue(0);
        barMessy_2->setTextVisible(false);

        messiness_2->addWidget(barMessy_2);


        verticalLayout_7->addLayout(messiness_2);


        verticalLayout_5->addLayout(verticalLayout_7);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rbSpeciesDog = new QRadioButton(tab_3);
        groupSpecies = new QButtonGroup(ViewClients);
        groupSpecies->setObjectName(QStringLiteral("groupSpecies"));
        groupSpecies->addButton(rbSpeciesDog);
        rbSpeciesDog->setObjectName(QStringLiteral("rbSpeciesDog"));
        rbSpeciesDog->setChecked(true);

        horizontalLayout_2->addWidget(rbSpeciesDog);

        rbSpeciesCat = new QRadioButton(tab_3);
        groupSpecies->addButton(rbSpeciesCat);
        rbSpeciesCat->setObjectName(QStringLiteral("rbSpeciesCat"));

        horizontalLayout_2->addWidget(rbSpeciesCat);

        rbSpeciesBird = new QRadioButton(tab_3);
        groupSpecies->addButton(rbSpeciesBird);
        rbSpeciesBird->setObjectName(QStringLiteral("rbSpeciesBird"));

        horizontalLayout_2->addWidget(rbSpeciesBird);

        rbSpeciesLizard = new QRadioButton(tab_3);
        groupSpecies->addButton(rbSpeciesLizard);
        rbSpeciesLizard->setObjectName(QStringLiteral("rbSpeciesLizard"));

        horizontalLayout_2->addWidget(rbSpeciesLizard);

        rbSpeciesRabbit = new QRadioButton(tab_3);
        groupSpecies->addButton(rbSpeciesRabbit);
        rbSpeciesRabbit->setObjectName(QStringLiteral("rbSpeciesRabbit"));

        horizontalLayout_2->addWidget(rbSpeciesRabbit);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        line = new QFrame(tab_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 1);

        lbBreedPreferences = new QLabel(tab_3);
        lbBreedPreferences->setObjectName(QStringLiteral("lbBreedPreferences"));
        lbBreedPreferences->setMinimumSize(QSize(425, 240));
        QFont font2;
        font2.setPointSize(9);
        lbBreedPreferences->setFont(font2);
        lbBreedPreferences->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(lbBreedPreferences, 2, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        clientList = new QListWidget(ViewClients);
        clientList->setObjectName(QStringLiteral("clientList"));
        clientList->setMinimumSize(QSize(300, 110));
        clientList->setMaximumSize(QSize(485, 110));

        gridLayout->addWidget(clientList, 1, 0, 1, 1);

        widget = new QWidget(ViewClients);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(467, 35));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonEdit = new QPushButton(widget);
        buttonEdit->setObjectName(QStringLiteral("buttonEdit"));

        verticalLayout->addWidget(buttonEdit);


        gridLayout->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(ViewClients);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "View Clients", Q_NULLPTR));
        lbContactInfo->setText(QString());
        lbClientAttributes->setText(QString());
        label->setText(QApplication::translate("ViewClients", "Preference for an animal that:", Q_NULLPTR));
        lbLikesTravel_2->setText(QApplication::translate("ViewClients", "Likes travelling:", Q_NULLPTR));
        lbChildren_2->setText(QApplication::translate("ViewClients", "Good with children:", Q_NULLPTR));
        lbAnimals_2->setText(QApplication::translate("ViewClients", "Good with animals:", Q_NULLPTR));
        lbStrangers_2->setText(QApplication::translate("ViewClients", "Good with strangers:", Q_NULLPTR));
        lbCrowds_2->setText(QApplication::translate("ViewClients", "Good in crowds:", Q_NULLPTR));
        lbNoise_2->setText(QApplication::translate("ViewClients", "Good with loud noises:", Q_NULLPTR));
        lbProtector_2->setText(QApplication::translate("ViewClients", "Good home protector:", Q_NULLPTR));
        lbEnergy_2->setText(QApplication::translate("ViewClients", "Lots of energy:", Q_NULLPTR));
        lbFear_2->setText(QApplication::translate("ViewClients", "Is not fearful:", Q_NULLPTR));
        lbAffection_2->setText(QApplication::translate("ViewClients", "Is affectionate:", Q_NULLPTR));
        lbMessy_2->setText(QApplication::translate("ViewClients", "Is not messy:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ViewClients", "Client Attributes", Q_NULLPTR));
        rbSpeciesDog->setText(QApplication::translate("ViewClients", "Dog", Q_NULLPTR));
        rbSpeciesCat->setText(QApplication::translate("ViewClients", "Cat", Q_NULLPTR));
        rbSpeciesBird->setText(QApplication::translate("ViewClients", "Bird", Q_NULLPTR));
        rbSpeciesLizard->setText(QApplication::translate("ViewClients", "Lizard", Q_NULLPTR));
        rbSpeciesRabbit->setText(QApplication::translate("ViewClients", "Rabbit", Q_NULLPTR));
        lbBreedPreferences->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ViewClients", "Species Preferences", Q_NULLPTR));
        buttonEdit->setText(QApplication::translate("ViewClients", "Edit Profile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
