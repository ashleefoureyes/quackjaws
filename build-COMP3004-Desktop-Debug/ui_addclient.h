/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QTabWidget *tabClientInfo;
    QWidget *tabContact;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbFirstName;
    QLabel *lbLastName;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtFirstName;
    QLineEdit *txtLastName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbProvince;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cbProvince;
    QLineEdit *txtCity;
    QLabel *label_2;
    QLineEdit *txtAddress;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpinBox *cbAge;
    QSpinBox *sbAreaCode;
    QSpinBox *sbPhone;
    QVBoxLayout *verticalLayout;
    QLabel *lbEmail;
    QLineEdit *txtEmail;
    QHBoxLayout *horizontalLayout_7;
    QWidget *tabInformation;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_22;
    QLabel *lbDwellingType;
    QComboBox *cbDwellingType;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lbDwellingLocation;
    QComboBox *cbLocation;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lbChildren;
    QRadioButton *rbYoungChildrenYes;
    QRadioButton *rbYoungChildrenNo;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lbOtherAnimals;
    QRadioButton *rbOtherAnimalsYes;
    QRadioButton *rbOtherAnimalsNo;
    QHBoxLayout *horizontalLayout_23;
    QLabel *lbActivityLevel;
    QRadioButton *rbActivityLevel1;
    QRadioButton *rbActivityLevel2;
    QRadioButton *rbActivityLevel3;
    QRadioButton *rbActivityLevel4;
    QRadioButton *rbActivityLevel5;
    QHBoxLayout *horizontalLayout_24;
    QLabel *lbWorkSchedule;
    QComboBox *cbWorkSchedule;
    QLabel *label_26;
    QWidget *tabPhysical;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_28;
    QCheckBox *boxDog;
    QCheckBox *boxCat;
    QCheckBox *boxBird;
    QCheckBox *boxLizard;
    QCheckBox *boxRabbit;
    QTabWidget *tabWidgetBreeds;
    QWidget *tab_5;
    QGridLayout *gridLayout;
    QWidget *widgetDogInfo;
    QRadioButton *rbDogAllergiesNo;
    QComboBox *cbFurPrefDog;
    QLabel *label_18;
    QLabel *label_7;
    QComboBox *cbDogSex;
    QComboBox *cbDogBreeds;
    QComboBox *cbAgeDog;
    QRadioButton *rbDogAllergiesYes;
    QPushButton *bDogBreedAdd;
    QFrame *line_2;
    QLabel *label_14;
    QComboBox *cbSizeDog;
    QPushButton *bDogBreedRemove;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_16;
    QFrame *line;
    QListWidget *listDog;
    QWidget *tab_6;
    QGridLayout *gridLayout_3;
    QWidget *widgetCatInfo;
    QRadioButton *rbCatAllergiesNo;
    QComboBox *cbFurPrefCat;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *cbCatSex;
    QComboBox *cbCatBreeds;
    QComboBox *cbAgeCat;
    QRadioButton *rbCatAllergiesYes;
    QPushButton *bCatBreedAdd;
    QFrame *line_3;
    QLabel *label_22;
    QComboBox *cbSizeCat;
    QPushButton *bCatBreedRemove;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QFrame *line_4;
    QListWidget *listCat;
    QWidget *tab_7;
    QGridLayout *gridLayout_4;
    QWidget *widgetBirdInfo;
    QRadioButton *rbBirdAllergiesNo;
    QComboBox *cbFurPrefBird;
    QLabel *label_32;
    QLabel *label_33;
    QComboBox *cbBirdSex;
    QComboBox *cbBirdBreeds;
    QComboBox *cbAgeBird;
    QRadioButton *rbBirdAllergiesYes;
    QPushButton *bBirdBreedAdd;
    QFrame *line_7;
    QLabel *label_34;
    QComboBox *cbSizeBird;
    QPushButton *bBirdBreedRemove;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QFrame *line_8;
    QListWidget *listBird;
    QLabel *label_85;
    QComboBox *cbColourBird;
    QWidget *tab_8;
    QGridLayout *gridLayout_5;
    QWidget *widgetLizardInfo;
    QRadioButton *rbLizardAllergiesNo;
    QComboBox *cbFurPrefLizard;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *cbLizardSex;
    QComboBox *cbLizardBreeds;
    QComboBox *cbAgeLizard;
    QRadioButton *rbLizardAllergiesYes;
    QPushButton *bLizardBreedAdd;
    QFrame *line_9;
    QLabel *label_40;
    QComboBox *cbSizeLizard;
    QPushButton *bLizardBreedRemove;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QFrame *line_10;
    QListWidget *listLizard;
    QComboBox *cbColorLizard;
    QLabel *label_86;
    QWidget *tab_9;
    QGridLayout *gridLayout_6;
    QWidget *widgetRabbitInfo;
    QRadioButton *rbRabbitAllergiesNo;
    QComboBox *cbFurPrefRabbit;
    QLabel *label_44;
    QLabel *label_45;
    QComboBox *cbRabbitSex;
    QComboBox *cbRabbitBreeds;
    QComboBox *cbAgeRabbit;
    QRadioButton *rbRabbitAllergiesYes;
    QPushButton *bRabbitBreedAdd;
    QFrame *line_11;
    QLabel *label_46;
    QComboBox *cbSizeRabbit;
    QPushButton *bRabbitBreedRemove;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QFrame *line_12;
    QListWidget *listRabbit;
    QComboBox *cbColourRabbit;
    QLabel *label_87;
    QLabel *label_19;
    QLabel *label_28;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_97;
    QFrame *line_21;
    QWidget *widgetDog;
    QComboBox *cbQuietDog;
    QComboBox *cdCommandsDog;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QComboBox *cbHouseTrainedDog;
    QFrame *line_5;
    QWidget *widgetCat;
    QComboBox *cbCuriousCat;
    QComboBox *cbCommandsCat;
    QComboBox *cbShedCat;
    QLabel *label_81;
    QLabel *label_83;
    QLabel *label_82;
    QLabel *label_84;
    QFrame *line_6;
    QWidget *widgetBird;
    QComboBox *cbQuietBird;
    QLabel *label_88;
    QLabel *label_89;
    QComboBox *cbSocialBird;
    QLabel *label_90;
    QFrame *line_13;
    QWidget *widgetLizard;
    QLabel *label_91;
    QComboBox *cbLizardFeed;
    QComboBox *cbLivingSpaceLizard;
    QLabel *label_92;
    QLabel *label_93;
    QFrame *line_14;
    QWidget *widgetRabbit;
    QLabel *label_94;
    QComboBox *cbSocialRabbit;
    QLabel *label_95;
    QComboBox *cbNeedsGroomingRabbit;
    QLabel *label_96;
    QWidget *tabNonPhysical;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *lbLikesTravel;
    QLabel *lbGoodWithChildren;
    QLabel *lbGoodWithAnimals;
    QLabel *lbStrange;
    QLabel *lbCrowds;
    QLabel *lbNoise;
    QLabel *lbProtect;
    QLabel *lbEnergy;
    QLabel *lbFear;
    QLabel *lbAffection;
    QLabel *lbMessy;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *rbTravel1;
    QRadioButton *rbTravel2;
    QRadioButton *rbTravel3;
    QRadioButton *rbTravel4;
    QRadioButton *rbTravel5;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rbChildren1;
    QRadioButton *rbChildren2;
    QRadioButton *rbChildren3;
    QRadioButton *rbChildren4;
    QRadioButton *rbChildren5;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *rbGdAnimals1;
    QRadioButton *rbGdAnimals2;
    QRadioButton *rbGdAnimals3;
    QRadioButton *rbGdAnimals4;
    QRadioButton *rbGdAnimals5;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *rbStrange1;
    QRadioButton *rbStrange2;
    QRadioButton *rbStrange3;
    QRadioButton *rbStrange4;
    QRadioButton *rbStrange5;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *rbCrowds1;
    QRadioButton *rbCrowds2;
    QRadioButton *rbCrowds3;
    QRadioButton *rbCrowds4;
    QRadioButton *rbCrowds5;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *rbNoise1;
    QRadioButton *rbNoise2;
    QRadioButton *rbNoise3;
    QRadioButton *rbNoise4;
    QRadioButton *rbNoise5;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *rbProtect1;
    QRadioButton *rbProtect2;
    QRadioButton *rbProtect3;
    QRadioButton *rbProtect4;
    QRadioButton *rbProtect5;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *rbEnergy1;
    QRadioButton *rbEnergy2;
    QRadioButton *rbEnergy3;
    QRadioButton *rbEnergy4;
    QRadioButton *rbEnergy5;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *rbFear1;
    QRadioButton *rbFear2;
    QRadioButton *rbFear3;
    QRadioButton *rbFear4;
    QRadioButton *rbFear5;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *rbAffection1;
    QRadioButton *rbAffection2;
    QRadioButton *rbAffection3;
    QRadioButton *rbAffection4;
    QRadioButton *rbAffection5;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *rbMessy1;
    QRadioButton *rbMessy2;
    QRadioButton *rbMessy4;
    QRadioButton *rbMessy5;
    QRadioButton *rbMessy3;
    QLabel *label_9;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QProgressBar *barCompleted;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *pbExit;
    QPushButton *pbSubmit;
    QButtonGroup *groupChildren;
    QButtonGroup *groupTravel;
    QButtonGroup *groupFearful;
    QButtonGroup *groupProtector;
    QButtonGroup *groupOtherAnimals;
    QButtonGroup *groupActivityLevel;
    QButtonGroup *groupYoungChildren;
    QButtonGroup *groupCrowds;
    QButtonGroup *groupBirdAllergies;
    QButtonGroup *groupAffection;
    QButtonGroup *groupCatAllergies;
    QButtonGroup *groupLizardAllergies;
    QButtonGroup *groupRabbitAllergies;
    QButtonGroup *groupDogAllergies;
    QButtonGroup *groupStrangers;
    QButtonGroup *groupEnergy;
    QButtonGroup *groupMessy;
    QButtonGroup *groupAnimals;
    QButtonGroup *groupLoudNoise;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QStringLiteral("AddClient"));
        AddClient->resize(433, 451);
        AddClient->setMinimumSize(QSize(433, 451));
        AddClient->setBaseSize(QSize(433, 451));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/cuacs_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddClient->setWindowIcon(icon);
        AddClient->setStyleSheet(QLatin1String("QDialog{\n"
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
"min-width: 50px;\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"background-colo"
                        "r: #ffffff;\n"
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
"background-color: #aaaaaa\n"
"}\n"
"\n"
"QCheckBox::indicator:checked{\n"
"background-color: #000000;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked{\n"
"background-color: #ffffff;\n"
"border: 3px solid white;\n"
"}\n"
"\n"
"QCheckBox{\n"
"color: #ffffff;\n"
"}\n"
""
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
"QComboBox QAbstractItemView{\n"
"selection-background-color: #c23b22;\n"
"background-color: white;\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"selection-background-color: #c23b22;\n"
"}\n"
"\n"
"QListWidget::item:selected!active{\n"
"selection-background-color: #e6aea4;\n"
"}"));
        tabClientInfo = new QTabWidget(AddClient);
        tabClientInfo->setObjectName(QStringLiteral("tabClientInfo"));
        tabClientInfo->setEnabled(true);
        tabClientInfo->setGeometry(QRect(7, 7, 420, 380));
        tabClientInfo->setMinimumSize(QSize(420, 380));
        tabClientInfo->setMaximumSize(QSize(420, 380));
        tabContact = new QWidget();
        tabContact->setObjectName(QStringLiteral("tabContact"));
        gridLayout_2 = new QGridLayout(tabContact);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(75, -1, 75, 25);
        label_27 = new QLabel(tabContact);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(254, 24));
        label_27->setMaximumSize(QSize(254, 24));
        QFont font;
        font.setPointSize(16);
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_27);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbFirstName = new QLabel(tabContact);
        lbFirstName->setObjectName(QStringLiteral("lbFirstName"));

        horizontalLayout_6->addWidget(lbFirstName);

        lbLastName = new QLabel(tabContact);
        lbLastName->setObjectName(QStringLiteral("lbLastName"));

        horizontalLayout_6->addWidget(lbLastName);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        txtFirstName = new QLineEdit(tabContact);
        txtFirstName->setObjectName(QStringLiteral("txtFirstName"));

        horizontalLayout_5->addWidget(txtFirstName);

        txtLastName = new QLineEdit(tabContact);
        txtLastName->setObjectName(QStringLiteral("txtLastName"));

        horizontalLayout_5->addWidget(txtLastName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lbProvince = new QLabel(tabContact);
        lbProvince->setObjectName(QStringLiteral("lbProvince"));
        lbProvince->setMinimumSize(QSize(122, 0));
        lbProvince->setMaximumSize(QSize(122, 16777215));

        horizontalLayout_4->addWidget(lbProvince);

        label = new QLabel(tabContact);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbProvince = new QComboBox(tabContact);
        cbProvince->setObjectName(QStringLiteral("cbProvince"));
        cbProvince->setMinimumSize(QSize(122, 0));
        cbProvince->setMaximumSize(QSize(122, 16777215));

        horizontalLayout_3->addWidget(cbProvince);

        txtCity = new QLineEdit(tabContact);
        txtCity->setObjectName(QStringLiteral("txtCity"));

        horizontalLayout_3->addWidget(txtCity);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_2 = new QLabel(tabContact);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        txtAddress = new QLineEdit(tabContact);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));

        verticalLayout_2->addWidget(txtAddress);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tabContact);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(150, 0));
        label_3->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(tabContact);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbAge = new QSpinBox(tabContact);
        cbAge->setObjectName(QStringLiteral("cbAge"));

        horizontalLayout->addWidget(cbAge);

        sbAreaCode = new QSpinBox(tabContact);
        sbAreaCode->setObjectName(QStringLiteral("sbAreaCode"));
        sbAreaCode->setMinimumSize(QSize(50, 0));
        sbAreaCode->setMaximumSize(QSize(50, 16777215));
        sbAreaCode->setMinimum(100);
        sbAreaCode->setMaximum(999);
        sbAreaCode->setValue(999);

        horizontalLayout->addWidget(sbAreaCode);

        sbPhone = new QSpinBox(tabContact);
        sbPhone->setObjectName(QStringLiteral("sbPhone"));
        sbPhone->setMinimum(1000000);
        sbPhone->setMaximum(9999999);
        sbPhone->setValue(9999999);

        horizontalLayout->addWidget(sbPhone);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbEmail = new QLabel(tabContact);
        lbEmail->setObjectName(QStringLiteral("lbEmail"));

        verticalLayout->addWidget(lbEmail);

        txtEmail = new QLineEdit(tabContact);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));

        verticalLayout->addWidget(txtEmail);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout_2->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabClientInfo->addTab(tabContact, QString());
        tabInformation = new QWidget();
        tabInformation->setObjectName(QStringLiteral("tabInformation"));
        gridLayout_7 = new QGridLayout(tabInformation);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(25, 0, 25, 25);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        lbDwellingType = new QLabel(tabInformation);
        lbDwellingType->setObjectName(QStringLiteral("lbDwellingType"));
        lbDwellingType->setMinimumSize(QSize(0, 40));

        horizontalLayout_22->addWidget(lbDwellingType);

        cbDwellingType = new QComboBox(tabInformation);
        cbDwellingType->setObjectName(QStringLiteral("cbDwellingType"));

        horizontalLayout_22->addWidget(cbDwellingType);


        verticalLayout_8->addLayout(horizontalLayout_22);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        lbDwellingLocation = new QLabel(tabInformation);
        lbDwellingLocation->setObjectName(QStringLiteral("lbDwellingLocation"));
        lbDwellingLocation->setMinimumSize(QSize(0, 40));

        horizontalLayout_21->addWidget(lbDwellingLocation);

        cbLocation = new QComboBox(tabInformation);
        cbLocation->setObjectName(QStringLiteral("cbLocation"));

        horizontalLayout_21->addWidget(cbLocation);


        verticalLayout_8->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        lbChildren = new QLabel(tabInformation);
        lbChildren->setObjectName(QStringLiteral("lbChildren"));
        lbChildren->setMinimumSize(QSize(208, 40));

        horizontalLayout_20->addWidget(lbChildren);

        rbYoungChildrenYes = new QRadioButton(tabInformation);
        groupYoungChildren = new QButtonGroup(AddClient);
        groupYoungChildren->setObjectName(QStringLiteral("groupYoungChildren"));
        groupYoungChildren->addButton(rbYoungChildrenYes);
        rbYoungChildrenYes->setObjectName(QStringLiteral("rbYoungChildrenYes"));

        horizontalLayout_20->addWidget(rbYoungChildrenYes);

        rbYoungChildrenNo = new QRadioButton(tabInformation);
        groupYoungChildren->addButton(rbYoungChildrenNo);
        rbYoungChildrenNo->setObjectName(QStringLiteral("rbYoungChildrenNo"));
        rbYoungChildrenNo->setChecked(true);

        horizontalLayout_20->addWidget(rbYoungChildrenNo);


        verticalLayout_8->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lbOtherAnimals = new QLabel(tabInformation);
        lbOtherAnimals->setObjectName(QStringLiteral("lbOtherAnimals"));
        lbOtherAnimals->setMinimumSize(QSize(208, 40));

        horizontalLayout_19->addWidget(lbOtherAnimals);

        rbOtherAnimalsYes = new QRadioButton(tabInformation);
        groupOtherAnimals = new QButtonGroup(AddClient);
        groupOtherAnimals->setObjectName(QStringLiteral("groupOtherAnimals"));
        groupOtherAnimals->addButton(rbOtherAnimalsYes);
        rbOtherAnimalsYes->setObjectName(QStringLiteral("rbOtherAnimalsYes"));

        horizontalLayout_19->addWidget(rbOtherAnimalsYes);

        rbOtherAnimalsNo = new QRadioButton(tabInformation);
        groupOtherAnimals->addButton(rbOtherAnimalsNo);
        rbOtherAnimalsNo->setObjectName(QStringLiteral("rbOtherAnimalsNo"));
        rbOtherAnimalsNo->setChecked(true);

        horizontalLayout_19->addWidget(rbOtherAnimalsNo);


        verticalLayout_8->addLayout(horizontalLayout_19);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        lbActivityLevel = new QLabel(tabInformation);
        lbActivityLevel->setObjectName(QStringLiteral("lbActivityLevel"));
        lbActivityLevel->setMinimumSize(QSize(178, 40));

        horizontalLayout_23->addWidget(lbActivityLevel);

        rbActivityLevel1 = new QRadioButton(tabInformation);
        groupActivityLevel = new QButtonGroup(AddClient);
        groupActivityLevel->setObjectName(QStringLiteral("groupActivityLevel"));
        groupActivityLevel->addButton(rbActivityLevel1);
        rbActivityLevel1->setObjectName(QStringLiteral("rbActivityLevel1"));

        horizontalLayout_23->addWidget(rbActivityLevel1);

        rbActivityLevel2 = new QRadioButton(tabInformation);
        groupActivityLevel->addButton(rbActivityLevel2);
        rbActivityLevel2->setObjectName(QStringLiteral("rbActivityLevel2"));

        horizontalLayout_23->addWidget(rbActivityLevel2);

        rbActivityLevel3 = new QRadioButton(tabInformation);
        groupActivityLevel->addButton(rbActivityLevel3);
        rbActivityLevel3->setObjectName(QStringLiteral("rbActivityLevel3"));
        rbActivityLevel3->setChecked(true);

        horizontalLayout_23->addWidget(rbActivityLevel3);

        rbActivityLevel4 = new QRadioButton(tabInformation);
        groupActivityLevel->addButton(rbActivityLevel4);
        rbActivityLevel4->setObjectName(QStringLiteral("rbActivityLevel4"));

        horizontalLayout_23->addWidget(rbActivityLevel4);

        rbActivityLevel5 = new QRadioButton(tabInformation);
        groupActivityLevel->addButton(rbActivityLevel5);
        rbActivityLevel5->setObjectName(QStringLiteral("rbActivityLevel5"));

        horizontalLayout_23->addWidget(rbActivityLevel5);


        verticalLayout_8->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        lbWorkSchedule = new QLabel(tabInformation);
        lbWorkSchedule->setObjectName(QStringLiteral("lbWorkSchedule"));
        lbWorkSchedule->setMinimumSize(QSize(178, 40));

        horizontalLayout_24->addWidget(lbWorkSchedule);

        cbWorkSchedule = new QComboBox(tabInformation);
        cbWorkSchedule->setObjectName(QStringLiteral("cbWorkSchedule"));

        horizontalLayout_24->addWidget(cbWorkSchedule);


        verticalLayout_8->addLayout(horizontalLayout_24);


        gridLayout_7->addLayout(verticalLayout_8, 2, 0, 1, 1);

        label_26 = new QLabel(tabInformation);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(400, 24));
        label_26->setMaximumSize(QSize(254, 24));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_26, 1, 0, 1, 1);

        tabClientInfo->addTab(tabInformation, QString());
        tabPhysical = new QWidget();
        tabPhysical->setObjectName(QStringLiteral("tabPhysical"));
        tabPhysical->setEnabled(true);
        layoutWidget = new QWidget(tabPhysical);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 0, 313, 50));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_6->addWidget(label_13);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        boxDog = new QCheckBox(layoutWidget);
        boxDog->setObjectName(QStringLiteral("boxDog"));
        boxDog->setChecked(true);

        horizontalLayout_28->addWidget(boxDog);

        boxCat = new QCheckBox(layoutWidget);
        boxCat->setObjectName(QStringLiteral("boxCat"));
        boxCat->setChecked(true);

        horizontalLayout_28->addWidget(boxCat);

        boxBird = new QCheckBox(layoutWidget);
        boxBird->setObjectName(QStringLiteral("boxBird"));
        boxBird->setChecked(true);

        horizontalLayout_28->addWidget(boxBird);

        boxLizard = new QCheckBox(layoutWidget);
        boxLizard->setObjectName(QStringLiteral("boxLizard"));
        boxLizard->setChecked(true);

        horizontalLayout_28->addWidget(boxLizard);

        boxRabbit = new QCheckBox(layoutWidget);
        boxRabbit->setObjectName(QStringLiteral("boxRabbit"));
        boxRabbit->setChecked(true);

        horizontalLayout_28->addWidget(boxRabbit);


        verticalLayout_6->addLayout(horizontalLayout_28);

        tabWidgetBreeds = new QTabWidget(tabPhysical);
        tabWidgetBreeds->setObjectName(QStringLiteral("tabWidgetBreeds"));
        tabWidgetBreeds->setEnabled(true);
        tabWidgetBreeds->setGeometry(QRect(10, 60, 400, 270));
        tabWidgetBreeds->setMinimumSize(QSize(400, 270));
        tabWidgetBreeds->setMaximumSize(QSize(400, 270));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab_5->setEnabled(true);
        gridLayout = new QGridLayout(tab_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetDogInfo = new QWidget(tab_5);
        widgetDogInfo->setObjectName(QStringLiteral("widgetDogInfo"));
        widgetDogInfo->setEnabled(true);
        rbDogAllergiesNo = new QRadioButton(widgetDogInfo);
        groupDogAllergies = new QButtonGroup(AddClient);
        groupDogAllergies->setObjectName(QStringLiteral("groupDogAllergies"));
        groupDogAllergies->addButton(rbDogAllergiesNo);
        rbDogAllergiesNo->setObjectName(QStringLiteral("rbDogAllergiesNo"));
        rbDogAllergiesNo->setGeometry(QRect(100, 210, 51, 20));
        rbDogAllergiesNo->setChecked(true);
        cbFurPrefDog = new QComboBox(widgetDogInfo);
        cbFurPrefDog->setObjectName(QStringLiteral("cbFurPrefDog"));
        cbFurPrefDog->setGeometry(QRect(260, 140, 81, 22));
        label_18 = new QLabel(widgetDogInfo);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 190, 171, 16));
        label_7 = new QLabel(widgetDogInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 10, 91, 16));
        cbDogSex = new QComboBox(widgetDogInfo);
        cbDogSex->setObjectName(QStringLiteral("cbDogSex"));
        cbDogSex->setGeometry(QRect(70, 140, 91, 22));
        cbDogBreeds = new QComboBox(widgetDogInfo);
        cbDogBreeds->setObjectName(QStringLiteral("cbDogBreeds"));
        cbDogBreeds->setGeometry(QRect(100, 10, 121, 22));
        cbAgeDog = new QComboBox(widgetDogInfo);
        cbAgeDog->setObjectName(QStringLiteral("cbAgeDog"));
        cbAgeDog->setGeometry(QRect(70, 100, 91, 22));
        rbDogAllergiesYes = new QRadioButton(widgetDogInfo);
        groupDogAllergies->addButton(rbDogAllergiesYes);
        rbDogAllergiesYes->setObjectName(QStringLiteral("rbDogAllergiesYes"));
        rbDogAllergiesYes->setGeometry(QRect(30, 210, 51, 20));
        bDogBreedAdd = new QPushButton(widgetDogInfo);
        bDogBreedAdd->setObjectName(QStringLiteral("bDogBreedAdd"));
        bDogBreedAdd->setGeometry(QRect(90, 40, 61, 20));
        line_2 = new QFrame(widgetDogInfo);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 170, 381, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(widgetDogInfo);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 100, 81, 16));
        cbSizeDog = new QComboBox(widgetDogInfo);
        cbSizeDog->setObjectName(QStringLiteral("cbSizeDog"));
        cbSizeDog->setGeometry(QRect(260, 100, 81, 22));
        bDogBreedRemove = new QPushButton(widgetDogInfo);
        bDogBreedRemove->setObjectName(QStringLiteral("bDogBreedRemove"));
        bDogBreedRemove->setGeometry(QRect(160, 40, 70, 20));
        bDogBreedRemove->setMinimumSize(QSize(70, 20));
        label_15 = new QLabel(widgetDogInfo);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 140, 81, 16));
        label_17 = new QLabel(widgetDogInfo);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(190, 100, 81, 16));
        label_16 = new QLabel(widgetDogInfo);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(190, 140, 81, 16));
        line = new QFrame(widgetDogInfo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 70, 371, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        listDog = new QListWidget(widgetDogInfo);
        listDog->setObjectName(QStringLiteral("listDog"));
        listDog->setGeometry(QRect(240, 10, 131, 51));

        gridLayout->addWidget(widgetDogInfo, 0, 0, 1, 1);

        tabWidgetBreeds->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_3 = new QGridLayout(tab_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widgetCatInfo = new QWidget(tab_6);
        widgetCatInfo->setObjectName(QStringLiteral("widgetCatInfo"));
        widgetCatInfo->setEnabled(true);
        rbCatAllergiesNo = new QRadioButton(widgetCatInfo);
        groupCatAllergies = new QButtonGroup(AddClient);
        groupCatAllergies->setObjectName(QStringLiteral("groupCatAllergies"));
        groupCatAllergies->addButton(rbCatAllergiesNo);
        rbCatAllergiesNo->setObjectName(QStringLiteral("rbCatAllergiesNo"));
        rbCatAllergiesNo->setGeometry(QRect(100, 210, 51, 20));
        rbCatAllergiesNo->setChecked(true);
        cbFurPrefCat = new QComboBox(widgetCatInfo);
        cbFurPrefCat->setObjectName(QStringLiteral("cbFurPrefCat"));
        cbFurPrefCat->setGeometry(QRect(260, 140, 81, 22));
        label_20 = new QLabel(widgetCatInfo);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 190, 161, 16));
        label_21 = new QLabel(widgetCatInfo);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 10, 91, 16));
        cbCatSex = new QComboBox(widgetCatInfo);
        cbCatSex->setObjectName(QStringLiteral("cbCatSex"));
        cbCatSex->setGeometry(QRect(70, 140, 91, 22));
        cbCatBreeds = new QComboBox(widgetCatInfo);
        cbCatBreeds->setObjectName(QStringLiteral("cbCatBreeds"));
        cbCatBreeds->setGeometry(QRect(100, 10, 121, 22));
        cbAgeCat = new QComboBox(widgetCatInfo);
        cbAgeCat->setObjectName(QStringLiteral("cbAgeCat"));
        cbAgeCat->setGeometry(QRect(70, 100, 91, 22));
        rbCatAllergiesYes = new QRadioButton(widgetCatInfo);
        groupCatAllergies->addButton(rbCatAllergiesYes);
        rbCatAllergiesYes->setObjectName(QStringLiteral("rbCatAllergiesYes"));
        rbCatAllergiesYes->setGeometry(QRect(30, 210, 51, 20));
        bCatBreedAdd = new QPushButton(widgetCatInfo);
        bCatBreedAdd->setObjectName(QStringLiteral("bCatBreedAdd"));
        bCatBreedAdd->setGeometry(QRect(90, 40, 61, 20));
        line_3 = new QFrame(widgetCatInfo);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 170, 381, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_22 = new QLabel(widgetCatInfo);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 100, 81, 16));
        cbSizeCat = new QComboBox(widgetCatInfo);
        cbSizeCat->setObjectName(QStringLiteral("cbSizeCat"));
        cbSizeCat->setGeometry(QRect(260, 100, 81, 22));
        bCatBreedRemove = new QPushButton(widgetCatInfo);
        bCatBreedRemove->setObjectName(QStringLiteral("bCatBreedRemove"));
        bCatBreedRemove->setGeometry(QRect(160, 40, 70, 20));
        bCatBreedRemove->setMinimumSize(QSize(70, 20));
        label_23 = new QLabel(widgetCatInfo);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 140, 81, 16));
        label_24 = new QLabel(widgetCatInfo);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(190, 100, 81, 16));
        label_25 = new QLabel(widgetCatInfo);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(190, 140, 81, 16));
        line_4 = new QFrame(widgetCatInfo);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(-10, 70, 371, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        listCat = new QListWidget(widgetCatInfo);
        listCat->setObjectName(QStringLiteral("listCat"));
        listCat->setGeometry(QRect(240, 10, 131, 51));

        gridLayout_3->addWidget(widgetCatInfo, 0, 0, 1, 1);

        tabWidgetBreeds->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_4 = new QGridLayout(tab_7);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widgetBirdInfo = new QWidget(tab_7);
        widgetBirdInfo->setObjectName(QStringLiteral("widgetBirdInfo"));
        widgetBirdInfo->setEnabled(true);
        rbBirdAllergiesNo = new QRadioButton(widgetBirdInfo);
        groupBirdAllergies = new QButtonGroup(AddClient);
        groupBirdAllergies->setObjectName(QStringLiteral("groupBirdAllergies"));
        groupBirdAllergies->addButton(rbBirdAllergiesNo);
        rbBirdAllergiesNo->setObjectName(QStringLiteral("rbBirdAllergiesNo"));
        rbBirdAllergiesNo->setGeometry(QRect(100, 210, 51, 20));
        rbBirdAllergiesNo->setChecked(true);
        cbFurPrefBird = new QComboBox(widgetBirdInfo);
        cbFurPrefBird->setObjectName(QStringLiteral("cbFurPrefBird"));
        cbFurPrefBird->setGeometry(QRect(260, 140, 81, 22));
        label_32 = new QLabel(widgetBirdInfo);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(0, 190, 161, 16));
        label_33 = new QLabel(widgetBirdInfo);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(0, 10, 91, 16));
        cbBirdSex = new QComboBox(widgetBirdInfo);
        cbBirdSex->setObjectName(QStringLiteral("cbBirdSex"));
        cbBirdSex->setGeometry(QRect(70, 140, 91, 22));
        cbBirdBreeds = new QComboBox(widgetBirdInfo);
        cbBirdBreeds->setObjectName(QStringLiteral("cbBirdBreeds"));
        cbBirdBreeds->setGeometry(QRect(100, 10, 121, 22));
        cbAgeBird = new QComboBox(widgetBirdInfo);
        cbAgeBird->setObjectName(QStringLiteral("cbAgeBird"));
        cbAgeBird->setGeometry(QRect(70, 100, 91, 22));
        rbBirdAllergiesYes = new QRadioButton(widgetBirdInfo);
        groupBirdAllergies->addButton(rbBirdAllergiesYes);
        rbBirdAllergiesYes->setObjectName(QStringLiteral("rbBirdAllergiesYes"));
        rbBirdAllergiesYes->setGeometry(QRect(30, 210, 51, 20));
        bBirdBreedAdd = new QPushButton(widgetBirdInfo);
        bBirdBreedAdd->setObjectName(QStringLiteral("bBirdBreedAdd"));
        bBirdBreedAdd->setGeometry(QRect(90, 40, 61, 20));
        line_7 = new QFrame(widgetBirdInfo);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 170, 381, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_34 = new QLabel(widgetBirdInfo);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 100, 81, 16));
        cbSizeBird = new QComboBox(widgetBirdInfo);
        cbSizeBird->setObjectName(QStringLiteral("cbSizeBird"));
        cbSizeBird->setGeometry(QRect(260, 100, 81, 22));
        bBirdBreedRemove = new QPushButton(widgetBirdInfo);
        bBirdBreedRemove->setObjectName(QStringLiteral("bBirdBreedRemove"));
        bBirdBreedRemove->setGeometry(QRect(160, 40, 70, 20));
        bBirdBreedRemove->setMinimumSize(QSize(70, 20));
        label_35 = new QLabel(widgetBirdInfo);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 140, 81, 16));
        label_36 = new QLabel(widgetBirdInfo);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(190, 100, 81, 16));
        label_37 = new QLabel(widgetBirdInfo);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(190, 140, 71, 16));
        line_8 = new QFrame(widgetBirdInfo);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(-10, 70, 371, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        listBird = new QListWidget(widgetBirdInfo);
        listBird->setObjectName(QStringLiteral("listBird"));
        listBird->setGeometry(QRect(240, 10, 131, 51));
        label_85 = new QLabel(widgetBirdInfo);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(190, 200, 121, 16));
        cbColourBird = new QComboBox(widgetBirdInfo);
        cbColourBird->setObjectName(QStringLiteral("cbColourBird"));
        cbColourBird->setGeometry(QRect(260, 200, 81, 22));

        gridLayout_4->addWidget(widgetBirdInfo, 0, 0, 1, 1);

        tabWidgetBreeds->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_5 = new QGridLayout(tab_8);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widgetLizardInfo = new QWidget(tab_8);
        widgetLizardInfo->setObjectName(QStringLiteral("widgetLizardInfo"));
        widgetLizardInfo->setEnabled(true);
        rbLizardAllergiesNo = new QRadioButton(widgetLizardInfo);
        groupLizardAllergies = new QButtonGroup(AddClient);
        groupLizardAllergies->setObjectName(QStringLiteral("groupLizardAllergies"));
        groupLizardAllergies->addButton(rbLizardAllergiesNo);
        rbLizardAllergiesNo->setObjectName(QStringLiteral("rbLizardAllergiesNo"));
        rbLizardAllergiesNo->setGeometry(QRect(100, 210, 51, 20));
        rbLizardAllergiesNo->setChecked(true);
        cbFurPrefLizard = new QComboBox(widgetLizardInfo);
        cbFurPrefLizard->setObjectName(QStringLiteral("cbFurPrefLizard"));
        cbFurPrefLizard->setGeometry(QRect(260, 140, 81, 22));
        label_38 = new QLabel(widgetLizardInfo);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(0, 190, 191, 16));
        label_39 = new QLabel(widgetLizardInfo);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(0, 10, 91, 16));
        cbLizardSex = new QComboBox(widgetLizardInfo);
        cbLizardSex->setObjectName(QStringLiteral("cbLizardSex"));
        cbLizardSex->setGeometry(QRect(70, 140, 91, 22));
        cbLizardBreeds = new QComboBox(widgetLizardInfo);
        cbLizardBreeds->setObjectName(QStringLiteral("cbLizardBreeds"));
        cbLizardBreeds->setGeometry(QRect(100, 10, 121, 22));
        cbAgeLizard = new QComboBox(widgetLizardInfo);
        cbAgeLizard->setObjectName(QStringLiteral("cbAgeLizard"));
        cbAgeLizard->setGeometry(QRect(70, 100, 91, 22));
        rbLizardAllergiesYes = new QRadioButton(widgetLizardInfo);
        groupLizardAllergies->addButton(rbLizardAllergiesYes);
        rbLizardAllergiesYes->setObjectName(QStringLiteral("rbLizardAllergiesYes"));
        rbLizardAllergiesYes->setGeometry(QRect(30, 210, 61, 20));
        bLizardBreedAdd = new QPushButton(widgetLizardInfo);
        bLizardBreedAdd->setObjectName(QStringLiteral("bLizardBreedAdd"));
        bLizardBreedAdd->setGeometry(QRect(90, 40, 61, 20));
        line_9 = new QFrame(widgetLizardInfo);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(0, 170, 381, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label_40 = new QLabel(widgetLizardInfo);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 100, 81, 16));
        cbSizeLizard = new QComboBox(widgetLizardInfo);
        cbSizeLizard->setObjectName(QStringLiteral("cbSizeLizard"));
        cbSizeLizard->setGeometry(QRect(260, 100, 81, 22));
        bLizardBreedRemove = new QPushButton(widgetLizardInfo);
        bLizardBreedRemove->setObjectName(QStringLiteral("bLizardBreedRemove"));
        bLizardBreedRemove->setGeometry(QRect(160, 40, 70, 20));
        bLizardBreedRemove->setMinimumSize(QSize(70, 20));
        label_41 = new QLabel(widgetLizardInfo);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(10, 140, 81, 16));
        label_42 = new QLabel(widgetLizardInfo);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(190, 100, 81, 16));
        label_43 = new QLabel(widgetLizardInfo);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(190, 140, 81, 16));
        line_10 = new QFrame(widgetLizardInfo);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(-10, 70, 371, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        listLizard = new QListWidget(widgetLizardInfo);
        listLizard->setObjectName(QStringLiteral("listLizard"));
        listLizard->setGeometry(QRect(240, 10, 131, 51));
        cbColorLizard = new QComboBox(widgetLizardInfo);
        cbColorLizard->setObjectName(QStringLiteral("cbColorLizard"));
        cbColorLizard->setGeometry(QRect(260, 200, 81, 22));
        label_86 = new QLabel(widgetLizardInfo);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setGeometry(QRect(190, 200, 81, 16));

        gridLayout_5->addWidget(widgetLizardInfo, 0, 0, 1, 1);

        tabWidgetBreeds->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tab_9->setEnabled(true);
        gridLayout_6 = new QGridLayout(tab_9);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        widgetRabbitInfo = new QWidget(tab_9);
        widgetRabbitInfo->setObjectName(QStringLiteral("widgetRabbitInfo"));
        widgetRabbitInfo->setEnabled(true);
        rbRabbitAllergiesNo = new QRadioButton(widgetRabbitInfo);
        groupRabbitAllergies = new QButtonGroup(AddClient);
        groupRabbitAllergies->setObjectName(QStringLiteral("groupRabbitAllergies"));
        groupRabbitAllergies->addButton(rbRabbitAllergiesNo);
        rbRabbitAllergiesNo->setObjectName(QStringLiteral("rbRabbitAllergiesNo"));
        rbRabbitAllergiesNo->setGeometry(QRect(100, 210, 61, 20));
        rbRabbitAllergiesNo->setChecked(true);
        cbFurPrefRabbit = new QComboBox(widgetRabbitInfo);
        cbFurPrefRabbit->setObjectName(QStringLiteral("cbFurPrefRabbit"));
        cbFurPrefRabbit->setGeometry(QRect(260, 140, 81, 22));
        label_44 = new QLabel(widgetRabbitInfo);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(0, 190, 181, 16));
        label_45 = new QLabel(widgetRabbitInfo);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(0, 10, 91, 16));
        cbRabbitSex = new QComboBox(widgetRabbitInfo);
        cbRabbitSex->setObjectName(QStringLiteral("cbRabbitSex"));
        cbRabbitSex->setGeometry(QRect(70, 140, 91, 22));
        cbRabbitBreeds = new QComboBox(widgetRabbitInfo);
        cbRabbitBreeds->setObjectName(QStringLiteral("cbRabbitBreeds"));
        cbRabbitBreeds->setGeometry(QRect(100, 10, 121, 22));
        cbAgeRabbit = new QComboBox(widgetRabbitInfo);
        cbAgeRabbit->setObjectName(QStringLiteral("cbAgeRabbit"));
        cbAgeRabbit->setGeometry(QRect(70, 100, 91, 22));
        rbRabbitAllergiesYes = new QRadioButton(widgetRabbitInfo);
        groupRabbitAllergies->addButton(rbRabbitAllergiesYes);
        rbRabbitAllergiesYes->setObjectName(QStringLiteral("rbRabbitAllergiesYes"));
        rbRabbitAllergiesYes->setGeometry(QRect(30, 210, 51, 20));
        bRabbitBreedAdd = new QPushButton(widgetRabbitInfo);
        bRabbitBreedAdd->setObjectName(QStringLiteral("bRabbitBreedAdd"));
        bRabbitBreedAdd->setGeometry(QRect(90, 40, 61, 20));
        line_11 = new QFrame(widgetRabbitInfo);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(0, 170, 381, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_46 = new QLabel(widgetRabbitInfo);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(10, 100, 81, 16));
        cbSizeRabbit = new QComboBox(widgetRabbitInfo);
        cbSizeRabbit->setObjectName(QStringLiteral("cbSizeRabbit"));
        cbSizeRabbit->setGeometry(QRect(260, 100, 81, 22));
        bRabbitBreedRemove = new QPushButton(widgetRabbitInfo);
        bRabbitBreedRemove->setObjectName(QStringLiteral("bRabbitBreedRemove"));
        bRabbitBreedRemove->setGeometry(QRect(160, 40, 70, 20));
        bRabbitBreedRemove->setMinimumSize(QSize(70, 20));
        label_47 = new QLabel(widgetRabbitInfo);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(10, 140, 81, 16));
        label_48 = new QLabel(widgetRabbitInfo);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(190, 100, 81, 16));
        label_49 = new QLabel(widgetRabbitInfo);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(190, 140, 81, 16));
        line_12 = new QFrame(widgetRabbitInfo);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(-10, 70, 371, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        listRabbit = new QListWidget(widgetRabbitInfo);
        listRabbit->setObjectName(QStringLiteral("listRabbit"));
        listRabbit->setGeometry(QRect(240, 10, 131, 51));
        cbColourRabbit = new QComboBox(widgetRabbitInfo);
        cbColourRabbit->setObjectName(QStringLiteral("cbColourRabbit"));
        cbColourRabbit->setGeometry(QRect(260, 200, 81, 22));
        label_87 = new QLabel(widgetRabbitInfo);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(190, 200, 81, 16));

        gridLayout_6->addWidget(widgetRabbitInfo, 0, 0, 1, 1);

        tabWidgetBreeds->addTab(tab_9, QString());
        label_19 = new QLabel(tabPhysical);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 349, 281, 261));
        QFont font1;
        font1.setPointSize(9);
        label_19->setFont(font1);
        label_28 = new QLabel(tabPhysical);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 330, 281, 16));
        tabClientInfo->addTab(tabPhysical, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_97 = new QLabel(tab_2);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setMinimumSize(QSize(0, 15));
        label_97->setMaximumSize(QSize(16777215, 10));
        label_97->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_97);

        line_21 = new QFrame(tab_2);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_21);

        widgetDog = new QWidget(tab_2);
        widgetDog->setObjectName(QStringLiteral("widgetDog"));
        widgetDog->setMinimumSize(QSize(400, 50));
        widgetDog->setMaximumSize(QSize(400, 50));
        cbQuietDog = new QComboBox(widgetDog);
        cbQuietDog->setObjectName(QStringLiteral("cbQuietDog"));
        cbQuietDog->setGeometry(QRect(70, 20, 81, 22));
        cdCommandsDog = new QComboBox(widgetDog);
        cdCommandsDog->setObjectName(QStringLiteral("cdCommandsDog"));
        cdCommandsDog->setGeometry(QRect(180, 20, 81, 22));
        label_77 = new QLabel(widgetDog);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(10, 20, 41, 21));
        label_78 = new QLabel(widgetDog);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setGeometry(QRect(70, 0, 51, 16));
        label_79 = new QLabel(widgetDog);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setGeometry(QRect(180, 0, 91, 16));
        label_80 = new QLabel(widgetDog);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setGeometry(QRect(290, 0, 101, 16));
        cbHouseTrainedDog = new QComboBox(widgetDog);
        cbHouseTrainedDog->setObjectName(QStringLiteral("cbHouseTrainedDog"));
        cbHouseTrainedDog->setGeometry(QRect(290, 20, 81, 22));

        verticalLayout_3->addWidget(widgetDog);

        line_5 = new QFrame(tab_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        widgetCat = new QWidget(tab_2);
        widgetCat->setObjectName(QStringLiteral("widgetCat"));
        widgetCat->setMinimumSize(QSize(400, 50));
        widgetCat->setMaximumSize(QSize(400, 50));
        cbCuriousCat = new QComboBox(widgetCat);
        cbCuriousCat->setObjectName(QStringLiteral("cbCuriousCat"));
        cbCuriousCat->setGeometry(QRect(70, 20, 81, 22));
        cbCommandsCat = new QComboBox(widgetCat);
        cbCommandsCat->setObjectName(QStringLiteral("cbCommandsCat"));
        cbCommandsCat->setGeometry(QRect(180, 20, 81, 22));
        cbShedCat = new QComboBox(widgetCat);
        cbShedCat->setObjectName(QStringLiteral("cbShedCat"));
        cbShedCat->setGeometry(QRect(290, 20, 81, 22));
        label_81 = new QLabel(widgetCat);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setGeometry(QRect(70, 0, 81, 16));
        label_83 = new QLabel(widgetCat);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(180, 0, 101, 16));
        label_82 = new QLabel(widgetCat);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(290, 0, 111, 16));
        label_84 = new QLabel(widgetCat);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setGeometry(QRect(10, 20, 35, 10));

        verticalLayout_3->addWidget(widgetCat);

        line_6 = new QFrame(tab_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        widgetBird = new QWidget(tab_2);
        widgetBird->setObjectName(QStringLiteral("widgetBird"));
        widgetBird->setMinimumSize(QSize(400, 50));
        widgetBird->setMaximumSize(QSize(400, 50));
        cbQuietBird = new QComboBox(widgetBird);
        cbQuietBird->setObjectName(QStringLiteral("cbQuietBird"));
        cbQuietBird->setGeometry(QRect(70, 20, 81, 22));
        label_88 = new QLabel(widgetBird);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setGeometry(QRect(70, 0, 51, 16));
        label_89 = new QLabel(widgetBird);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(180, 0, 71, 16));
        cbSocialBird = new QComboBox(widgetBird);
        cbSocialBird->setObjectName(QStringLiteral("cbSocialBird"));
        cbSocialBird->setGeometry(QRect(180, 20, 81, 22));
        label_90 = new QLabel(widgetBird);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(10, 20, 35, 10));

        verticalLayout_3->addWidget(widgetBird);

        line_13 = new QFrame(tab_2);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_13);

        widgetLizard = new QWidget(tab_2);
        widgetLizard->setObjectName(QStringLiteral("widgetLizard"));
        widgetLizard->setMinimumSize(QSize(400, 50));
        widgetLizard->setMaximumSize(QSize(400, 50));
        label_91 = new QLabel(widgetLizard);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(10, 20, 51, 16));
        cbLizardFeed = new QComboBox(widgetLizard);
        cbLizardFeed->setObjectName(QStringLiteral("cbLizardFeed"));
        cbLizardFeed->setGeometry(QRect(70, 20, 81, 22));
        cbLivingSpaceLizard = new QComboBox(widgetLizard);
        cbLivingSpaceLizard->setObjectName(QStringLiteral("cbLivingSpaceLizard"));
        cbLivingSpaceLizard->setGeometry(QRect(180, 20, 81, 22));
        label_92 = new QLabel(widgetLizard);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(70, 0, 91, 16));
        label_93 = new QLabel(widgetLizard);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(180, 0, 141, 16));

        verticalLayout_3->addWidget(widgetLizard);

        line_14 = new QFrame(tab_2);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_14);

        widgetRabbit = new QWidget(tab_2);
        widgetRabbit->setObjectName(QStringLiteral("widgetRabbit"));
        widgetRabbit->setMinimumSize(QSize(400, 50));
        widgetRabbit->setMaximumSize(QSize(400, 50));
        label_94 = new QLabel(widgetRabbit);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(10, 20, 51, 16));
        cbSocialRabbit = new QComboBox(widgetRabbit);
        cbSocialRabbit->setObjectName(QStringLiteral("cbSocialRabbit"));
        cbSocialRabbit->setGeometry(QRect(70, 20, 81, 22));
        label_95 = new QLabel(widgetRabbit);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(70, 0, 71, 16));
        cbNeedsGroomingRabbit = new QComboBox(widgetRabbit);
        cbNeedsGroomingRabbit->setObjectName(QStringLiteral("cbNeedsGroomingRabbit"));
        cbNeedsGroomingRabbit->setGeometry(QRect(180, 20, 81, 22));
        label_96 = new QLabel(widgetRabbit);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setGeometry(QRect(180, 0, 131, 16));

        verticalLayout_3->addWidget(widgetRabbit);

        tabClientInfo->addTab(tab_2, QString());
        tabNonPhysical = new QWidget();
        tabNonPhysical->setObjectName(QStringLiteral("tabNonPhysical"));
        layoutWidget1 = new QWidget(tabNonPhysical);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 381, 323));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 21));

        verticalLayout_5->addWidget(label_5);

        lbLikesTravel = new QLabel(layoutWidget1);
        lbLikesTravel->setObjectName(QStringLiteral("lbLikesTravel"));
        lbLikesTravel->setMinimumSize(QSize(185, 21));
        lbLikesTravel->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbLikesTravel);

        lbGoodWithChildren = new QLabel(layoutWidget1);
        lbGoodWithChildren->setObjectName(QStringLiteral("lbGoodWithChildren"));
        lbGoodWithChildren->setMinimumSize(QSize(185, 21));
        lbGoodWithChildren->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbGoodWithChildren);

        lbGoodWithAnimals = new QLabel(layoutWidget1);
        lbGoodWithAnimals->setObjectName(QStringLiteral("lbGoodWithAnimals"));
        lbGoodWithAnimals->setMinimumSize(QSize(185, 21));
        lbGoodWithAnimals->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbGoodWithAnimals);

        lbStrange = new QLabel(layoutWidget1);
        lbStrange->setObjectName(QStringLiteral("lbStrange"));
        lbStrange->setMinimumSize(QSize(185, 21));
        lbStrange->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbStrange);

        lbCrowds = new QLabel(layoutWidget1);
        lbCrowds->setObjectName(QStringLiteral("lbCrowds"));
        lbCrowds->setMinimumSize(QSize(185, 21));
        lbCrowds->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbCrowds);

        lbNoise = new QLabel(layoutWidget1);
        lbNoise->setObjectName(QStringLiteral("lbNoise"));
        lbNoise->setMinimumSize(QSize(185, 21));
        lbNoise->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbNoise);

        lbProtect = new QLabel(layoutWidget1);
        lbProtect->setObjectName(QStringLiteral("lbProtect"));
        lbProtect->setMinimumSize(QSize(185, 21));
        lbProtect->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbProtect);

        lbEnergy = new QLabel(layoutWidget1);
        lbEnergy->setObjectName(QStringLiteral("lbEnergy"));
        lbEnergy->setMinimumSize(QSize(185, 21));
        lbEnergy->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbEnergy);

        lbFear = new QLabel(layoutWidget1);
        lbFear->setObjectName(QStringLiteral("lbFear"));
        lbFear->setMinimumSize(QSize(185, 21));
        lbFear->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbFear);

        lbAffection = new QLabel(layoutWidget1);
        lbAffection->setObjectName(QStringLiteral("lbAffection"));
        lbAffection->setMinimumSize(QSize(185, 21));
        lbAffection->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbAffection);

        lbMessy = new QLabel(layoutWidget1);
        lbMessy->setObjectName(QStringLiteral("lbMessy"));
        lbMessy->setMinimumSize(QSize(185, 21));
        lbMessy->setMaximumSize(QSize(185, 21));

        verticalLayout_5->addWidget(lbMessy);


        horizontalLayout_27->addLayout(verticalLayout_5);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_29->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(27, 21));

        horizontalLayout_29->addWidget(label_12);


        verticalLayout_4->addLayout(horizontalLayout_29);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        rbTravel1 = new QRadioButton(layoutWidget1);
        groupTravel = new QButtonGroup(AddClient);
        groupTravel->setObjectName(QStringLiteral("groupTravel"));
        groupTravel->addButton(rbTravel1);
        rbTravel1->setObjectName(QStringLiteral("rbTravel1"));
        rbTravel1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_8->addWidget(rbTravel1);

        rbTravel2 = new QRadioButton(layoutWidget1);
        groupTravel->addButton(rbTravel2);
        rbTravel2->setObjectName(QStringLiteral("rbTravel2"));
        rbTravel2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_8->addWidget(rbTravel2);

        rbTravel3 = new QRadioButton(layoutWidget1);
        groupTravel->addButton(rbTravel3);
        rbTravel3->setObjectName(QStringLiteral("rbTravel3"));
        rbTravel3->setMaximumSize(QSize(16777215, 21));
        rbTravel3->setChecked(false);

        horizontalLayout_8->addWidget(rbTravel3);

        rbTravel4 = new QRadioButton(layoutWidget1);
        groupTravel->addButton(rbTravel4);
        rbTravel4->setObjectName(QStringLiteral("rbTravel4"));
        rbTravel4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_8->addWidget(rbTravel4);

        rbTravel5 = new QRadioButton(layoutWidget1);
        groupTravel->addButton(rbTravel5);
        rbTravel5->setObjectName(QStringLiteral("rbTravel5"));
        rbTravel5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_8->addWidget(rbTravel5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        rbChildren1 = new QRadioButton(layoutWidget1);
        groupChildren = new QButtonGroup(AddClient);
        groupChildren->setObjectName(QStringLiteral("groupChildren"));
        groupChildren->addButton(rbChildren1);
        rbChildren1->setObjectName(QStringLiteral("rbChildren1"));
        rbChildren1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_9->addWidget(rbChildren1);

        rbChildren2 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren2);
        rbChildren2->setObjectName(QStringLiteral("rbChildren2"));
        rbChildren2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_9->addWidget(rbChildren2);

        rbChildren3 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren3);
        rbChildren3->setObjectName(QStringLiteral("rbChildren3"));
        rbChildren3->setMaximumSize(QSize(16777215, 21));
        rbChildren3->setChecked(false);

        horizontalLayout_9->addWidget(rbChildren3);

        rbChildren4 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren4);
        rbChildren4->setObjectName(QStringLiteral("rbChildren4"));
        rbChildren4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_9->addWidget(rbChildren4);

        rbChildren5 = new QRadioButton(layoutWidget1);
        groupChildren->addButton(rbChildren5);
        rbChildren5->setObjectName(QStringLiteral("rbChildren5"));
        rbChildren5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_9->addWidget(rbChildren5);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(8);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        rbGdAnimals1 = new QRadioButton(layoutWidget1);
        groupAnimals = new QButtonGroup(AddClient);
        groupAnimals->setObjectName(QStringLiteral("groupAnimals"));
        groupAnimals->addButton(rbGdAnimals1);
        rbGdAnimals1->setObjectName(QStringLiteral("rbGdAnimals1"));
        rbGdAnimals1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_10->addWidget(rbGdAnimals1);

        rbGdAnimals2 = new QRadioButton(layoutWidget1);
        groupAnimals->addButton(rbGdAnimals2);
        rbGdAnimals2->setObjectName(QStringLiteral("rbGdAnimals2"));
        rbGdAnimals2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_10->addWidget(rbGdAnimals2);

        rbGdAnimals3 = new QRadioButton(layoutWidget1);
        groupAnimals->addButton(rbGdAnimals3);
        rbGdAnimals3->setObjectName(QStringLiteral("rbGdAnimals3"));
        rbGdAnimals3->setMaximumSize(QSize(16777215, 21));
        rbGdAnimals3->setChecked(false);

        horizontalLayout_10->addWidget(rbGdAnimals3);

        rbGdAnimals4 = new QRadioButton(layoutWidget1);
        groupAnimals->addButton(rbGdAnimals4);
        rbGdAnimals4->setObjectName(QStringLiteral("rbGdAnimals4"));
        rbGdAnimals4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_10->addWidget(rbGdAnimals4);

        rbGdAnimals5 = new QRadioButton(layoutWidget1);
        groupAnimals->addButton(rbGdAnimals5);
        rbGdAnimals5->setObjectName(QStringLiteral("rbGdAnimals5"));
        rbGdAnimals5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_10->addWidget(rbGdAnimals5);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        rbStrange1 = new QRadioButton(layoutWidget1);
        groupStrangers = new QButtonGroup(AddClient);
        groupStrangers->setObjectName(QStringLiteral("groupStrangers"));
        groupStrangers->addButton(rbStrange1);
        rbStrange1->setObjectName(QStringLiteral("rbStrange1"));
        rbStrange1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_11->addWidget(rbStrange1);

        rbStrange2 = new QRadioButton(layoutWidget1);
        groupStrangers->addButton(rbStrange2);
        rbStrange2->setObjectName(QStringLiteral("rbStrange2"));
        rbStrange2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_11->addWidget(rbStrange2);

        rbStrange3 = new QRadioButton(layoutWidget1);
        groupStrangers->addButton(rbStrange3);
        rbStrange3->setObjectName(QStringLiteral("rbStrange3"));
        rbStrange3->setMaximumSize(QSize(16777215, 21));
        rbStrange3->setChecked(false);

        horizontalLayout_11->addWidget(rbStrange3);

        rbStrange4 = new QRadioButton(layoutWidget1);
        groupStrangers->addButton(rbStrange4);
        rbStrange4->setObjectName(QStringLiteral("rbStrange4"));
        rbStrange4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_11->addWidget(rbStrange4);

        rbStrange5 = new QRadioButton(layoutWidget1);
        groupStrangers->addButton(rbStrange5);
        rbStrange5->setObjectName(QStringLiteral("rbStrange5"));
        rbStrange5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_11->addWidget(rbStrange5);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(8);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        rbCrowds1 = new QRadioButton(layoutWidget1);
        groupCrowds = new QButtonGroup(AddClient);
        groupCrowds->setObjectName(QStringLiteral("groupCrowds"));
        groupCrowds->addButton(rbCrowds1);
        rbCrowds1->setObjectName(QStringLiteral("rbCrowds1"));
        rbCrowds1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_12->addWidget(rbCrowds1);

        rbCrowds2 = new QRadioButton(layoutWidget1);
        groupCrowds->addButton(rbCrowds2);
        rbCrowds2->setObjectName(QStringLiteral("rbCrowds2"));
        rbCrowds2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_12->addWidget(rbCrowds2);

        rbCrowds3 = new QRadioButton(layoutWidget1);
        groupCrowds->addButton(rbCrowds3);
        rbCrowds3->setObjectName(QStringLiteral("rbCrowds3"));
        rbCrowds3->setMaximumSize(QSize(16777215, 21));
        rbCrowds3->setChecked(false);

        horizontalLayout_12->addWidget(rbCrowds3);

        rbCrowds4 = new QRadioButton(layoutWidget1);
        groupCrowds->addButton(rbCrowds4);
        rbCrowds4->setObjectName(QStringLiteral("rbCrowds4"));
        rbCrowds4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_12->addWidget(rbCrowds4);

        rbCrowds5 = new QRadioButton(layoutWidget1);
        groupCrowds->addButton(rbCrowds5);
        rbCrowds5->setObjectName(QStringLiteral("rbCrowds5"));
        rbCrowds5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_12->addWidget(rbCrowds5);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(8);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        rbNoise1 = new QRadioButton(layoutWidget1);
        groupLoudNoise = new QButtonGroup(AddClient);
        groupLoudNoise->setObjectName(QStringLiteral("groupLoudNoise"));
        groupLoudNoise->addButton(rbNoise1);
        rbNoise1->setObjectName(QStringLiteral("rbNoise1"));
        rbNoise1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_13->addWidget(rbNoise1);

        rbNoise2 = new QRadioButton(layoutWidget1);
        groupLoudNoise->addButton(rbNoise2);
        rbNoise2->setObjectName(QStringLiteral("rbNoise2"));
        rbNoise2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_13->addWidget(rbNoise2);

        rbNoise3 = new QRadioButton(layoutWidget1);
        groupLoudNoise->addButton(rbNoise3);
        rbNoise3->setObjectName(QStringLiteral("rbNoise3"));
        rbNoise3->setMaximumSize(QSize(16777215, 21));
        rbNoise3->setChecked(false);

        horizontalLayout_13->addWidget(rbNoise3);

        rbNoise4 = new QRadioButton(layoutWidget1);
        groupLoudNoise->addButton(rbNoise4);
        rbNoise4->setObjectName(QStringLiteral("rbNoise4"));
        rbNoise4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_13->addWidget(rbNoise4);

        rbNoise5 = new QRadioButton(layoutWidget1);
        groupLoudNoise->addButton(rbNoise5);
        rbNoise5->setObjectName(QStringLiteral("rbNoise5"));
        rbNoise5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_13->addWidget(rbNoise5);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(8);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        rbProtect1 = new QRadioButton(layoutWidget1);
        groupProtector = new QButtonGroup(AddClient);
        groupProtector->setObjectName(QStringLiteral("groupProtector"));
        groupProtector->addButton(rbProtect1);
        rbProtect1->setObjectName(QStringLiteral("rbProtect1"));
        rbProtect1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_14->addWidget(rbProtect1);

        rbProtect2 = new QRadioButton(layoutWidget1);
        groupProtector->addButton(rbProtect2);
        rbProtect2->setObjectName(QStringLiteral("rbProtect2"));
        rbProtect2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_14->addWidget(rbProtect2);

        rbProtect3 = new QRadioButton(layoutWidget1);
        groupProtector->addButton(rbProtect3);
        rbProtect3->setObjectName(QStringLiteral("rbProtect3"));
        rbProtect3->setMaximumSize(QSize(16777215, 21));
        rbProtect3->setChecked(false);

        horizontalLayout_14->addWidget(rbProtect3);

        rbProtect4 = new QRadioButton(layoutWidget1);
        groupProtector->addButton(rbProtect4);
        rbProtect4->setObjectName(QStringLiteral("rbProtect4"));
        rbProtect4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_14->addWidget(rbProtect4);

        rbProtect5 = new QRadioButton(layoutWidget1);
        groupProtector->addButton(rbProtect5);
        rbProtect5->setObjectName(QStringLiteral("rbProtect5"));
        rbProtect5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_14->addWidget(rbProtect5);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(8);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        rbEnergy1 = new QRadioButton(layoutWidget1);
        groupEnergy = new QButtonGroup(AddClient);
        groupEnergy->setObjectName(QStringLiteral("groupEnergy"));
        groupEnergy->addButton(rbEnergy1);
        rbEnergy1->setObjectName(QStringLiteral("rbEnergy1"));
        rbEnergy1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_15->addWidget(rbEnergy1);

        rbEnergy2 = new QRadioButton(layoutWidget1);
        groupEnergy->addButton(rbEnergy2);
        rbEnergy2->setObjectName(QStringLiteral("rbEnergy2"));
        rbEnergy2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_15->addWidget(rbEnergy2);

        rbEnergy3 = new QRadioButton(layoutWidget1);
        groupEnergy->addButton(rbEnergy3);
        rbEnergy3->setObjectName(QStringLiteral("rbEnergy3"));
        rbEnergy3->setMaximumSize(QSize(16777215, 21));
        rbEnergy3->setChecked(false);

        horizontalLayout_15->addWidget(rbEnergy3);

        rbEnergy4 = new QRadioButton(layoutWidget1);
        groupEnergy->addButton(rbEnergy4);
        rbEnergy4->setObjectName(QStringLiteral("rbEnergy4"));
        rbEnergy4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_15->addWidget(rbEnergy4);

        rbEnergy5 = new QRadioButton(layoutWidget1);
        groupEnergy->addButton(rbEnergy5);
        rbEnergy5->setObjectName(QStringLiteral("rbEnergy5"));
        rbEnergy5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_15->addWidget(rbEnergy5);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(8);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        rbFear1 = new QRadioButton(layoutWidget1);
        groupFearful = new QButtonGroup(AddClient);
        groupFearful->setObjectName(QStringLiteral("groupFearful"));
        groupFearful->addButton(rbFear1);
        rbFear1->setObjectName(QStringLiteral("rbFear1"));
        rbFear1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_16->addWidget(rbFear1);

        rbFear2 = new QRadioButton(layoutWidget1);
        groupFearful->addButton(rbFear2);
        rbFear2->setObjectName(QStringLiteral("rbFear2"));
        rbFear2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_16->addWidget(rbFear2);

        rbFear3 = new QRadioButton(layoutWidget1);
        groupFearful->addButton(rbFear3);
        rbFear3->setObjectName(QStringLiteral("rbFear3"));
        rbFear3->setMaximumSize(QSize(16777215, 21));
        rbFear3->setChecked(false);

        horizontalLayout_16->addWidget(rbFear3);

        rbFear4 = new QRadioButton(layoutWidget1);
        groupFearful->addButton(rbFear4);
        rbFear4->setObjectName(QStringLiteral("rbFear4"));
        rbFear4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_16->addWidget(rbFear4);

        rbFear5 = new QRadioButton(layoutWidget1);
        groupFearful->addButton(rbFear5);
        rbFear5->setObjectName(QStringLiteral("rbFear5"));
        rbFear5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_16->addWidget(rbFear5);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(8);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        rbAffection1 = new QRadioButton(layoutWidget1);
        groupAffection = new QButtonGroup(AddClient);
        groupAffection->setObjectName(QStringLiteral("groupAffection"));
        groupAffection->addButton(rbAffection1);
        rbAffection1->setObjectName(QStringLiteral("rbAffection1"));
        rbAffection1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_17->addWidget(rbAffection1);

        rbAffection2 = new QRadioButton(layoutWidget1);
        groupAffection->addButton(rbAffection2);
        rbAffection2->setObjectName(QStringLiteral("rbAffection2"));
        rbAffection2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_17->addWidget(rbAffection2);

        rbAffection3 = new QRadioButton(layoutWidget1);
        groupAffection->addButton(rbAffection3);
        rbAffection3->setObjectName(QStringLiteral("rbAffection3"));
        rbAffection3->setMaximumSize(QSize(16777215, 21));
        rbAffection3->setChecked(false);

        horizontalLayout_17->addWidget(rbAffection3);

        rbAffection4 = new QRadioButton(layoutWidget1);
        groupAffection->addButton(rbAffection4);
        rbAffection4->setObjectName(QStringLiteral("rbAffection4"));
        rbAffection4->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_17->addWidget(rbAffection4);

        rbAffection5 = new QRadioButton(layoutWidget1);
        groupAffection->addButton(rbAffection5);
        rbAffection5->setObjectName(QStringLiteral("rbAffection5"));
        rbAffection5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_17->addWidget(rbAffection5);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(8);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        rbMessy1 = new QRadioButton(layoutWidget1);
        groupMessy = new QButtonGroup(AddClient);
        groupMessy->setObjectName(QStringLiteral("groupMessy"));
        groupMessy->addButton(rbMessy1);
        rbMessy1->setObjectName(QStringLiteral("rbMessy1"));
        rbMessy1->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_18->addWidget(rbMessy1);

        rbMessy2 = new QRadioButton(layoutWidget1);
        groupMessy->addButton(rbMessy2);
        rbMessy2->setObjectName(QStringLiteral("rbMessy2"));
        rbMessy2->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_18->addWidget(rbMessy2);

        rbMessy4 = new QRadioButton(layoutWidget1);
        groupMessy->addButton(rbMessy4);
        rbMessy4->setObjectName(QStringLiteral("rbMessy4"));
        rbMessy4->setMaximumSize(QSize(16777215, 21));
        rbMessy4->setChecked(false);

        horizontalLayout_18->addWidget(rbMessy4);

        rbMessy5 = new QRadioButton(layoutWidget1);
        groupMessy->addButton(rbMessy5);
        rbMessy5->setObjectName(QStringLiteral("rbMessy5"));
        rbMessy5->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_18->addWidget(rbMessy5);

        rbMessy3 = new QRadioButton(layoutWidget1);
        groupMessy->addButton(rbMessy3);
        rbMessy3->setObjectName(QStringLiteral("rbMessy3"));
        rbMessy3->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_18->addWidget(rbMessy3);


        verticalLayout_4->addLayout(horizontalLayout_18);


        horizontalLayout_26->addLayout(verticalLayout_4);


        horizontalLayout_27->addLayout(horizontalLayout_26);

        label_9 = new QLabel(tabNonPhysical);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 80, 47, 14));
        layoutWidget2 = new QWidget(tabNonPhysical);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 10, 481, 41));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        verticalLayout_7->addWidget(label_10);

        tabClientInfo->addTab(tabNonPhysical, QString());
        barCompleted = new QProgressBar(AddClient);
        barCompleted->setObjectName(QStringLiteral("barCompleted"));
        barCompleted->setGeometry(QRect(170, 425, 100, 15));
        barCompleted->setMaximumSize(QSize(100, 15));
        barCompleted->setAcceptDrops(false);
        barCompleted->setMaximum(4);
        barCompleted->setValue(0);
        barCompleted->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        barCompleted->setTextVisible(false);
        layoutWidget3 = new QWidget(AddClient);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 390, 421, 27));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        pbExit = new QPushButton(layoutWidget3);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        horizontalLayout_25->addWidget(pbExit);

        pbSubmit = new QPushButton(layoutWidget3);
        pbSubmit->setObjectName(QStringLiteral("pbSubmit"));

        horizontalLayout_25->addWidget(pbSubmit);


        retranslateUi(AddClient);

        tabClientInfo->setCurrentIndex(0);
        tabWidgetBreeds->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Add Client", Q_NULLPTR));
        label_27->setText(QApplication::translate("AddClient", "Contract Information", Q_NULLPTR));
        lbFirstName->setText(QApplication::translate("AddClient", "First name", Q_NULLPTR));
        lbLastName->setText(QApplication::translate("AddClient", "Last name", Q_NULLPTR));
        txtFirstName->setPlaceholderText(QString());
        txtLastName->setPlaceholderText(QString());
        lbProvince->setText(QApplication::translate("AddClient", "Province", Q_NULLPTR));
        label->setText(QApplication::translate("AddClient", "City", Q_NULLPTR));
        cbProvince->clear();
        cbProvince->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Alberta", Q_NULLPTR)
         << QApplication::translate("AddClient", "British Columbia", Q_NULLPTR)
         << QApplication::translate("AddClient", "Manitoba", Q_NULLPTR)
         << QApplication::translate("AddClient", "New Brunswick", Q_NULLPTR)
         << QApplication::translate("AddClient", "Newfoundland and Labrador", Q_NULLPTR)
         << QApplication::translate("AddClient", "Northwest Territories", Q_NULLPTR)
         << QApplication::translate("AddClient", "Nova Scotia", Q_NULLPTR)
         << QApplication::translate("AddClient", "Nunavut", Q_NULLPTR)
         << QApplication::translate("AddClient", "Ontario", Q_NULLPTR)
         << QApplication::translate("AddClient", "Prince Edward Island", Q_NULLPTR)
         << QApplication::translate("AddClient", "Quebec", Q_NULLPTR)
         << QApplication::translate("AddClient", "Sakatchewan", Q_NULLPTR)
         << QApplication::translate("AddClient", "Yukon", Q_NULLPTR)
        );
        txtCity->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("AddClient", "Home address", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddClient", "Age", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddClient", "Phone #", Q_NULLPTR));
        lbEmail->setText(QApplication::translate("AddClient", "Email", Q_NULLPTR));
        tabClientInfo->setTabText(tabClientInfo->indexOf(tabContact), QApplication::translate("AddClient", "Contact Information", Q_NULLPTR));
        lbDwellingType->setText(QApplication::translate("AddClient", "Dwelling Type:", Q_NULLPTR));
        cbDwellingType->clear();
        cbDwellingType->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Small Apartment/Condominium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large Apartment/Condominium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Townhouse", Q_NULLPTR)
         << QApplication::translate("AddClient", "Detached House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Farm", Q_NULLPTR)
        );
        lbDwellingLocation->setText(QApplication::translate("AddClient", "Dwelling Location:", Q_NULLPTR));
        cbLocation->clear();
        cbLocation->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Urban", Q_NULLPTR)
         << QApplication::translate("AddClient", "Suburban", Q_NULLPTR)
         << QApplication::translate("AddClient", "Rural", Q_NULLPTR)
        );
        lbChildren->setText(QApplication::translate("AddClient", "Do you have young children:", Q_NULLPTR));
        rbYoungChildrenYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        rbYoungChildrenNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        lbOtherAnimals->setText(QApplication::translate("AddClient", "Do you have any other animals:", Q_NULLPTR));
        rbOtherAnimalsYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        rbOtherAnimalsNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        lbActivityLevel->setText(QApplication::translate("AddClient", "What is your activity level: ", Q_NULLPTR));
        rbActivityLevel1->setText(QString());
        rbActivityLevel2->setText(QString());
        rbActivityLevel3->setText(QString());
        rbActivityLevel4->setText(QString());
        rbActivityLevel5->setText(QString());
        lbWorkSchedule->setText(QApplication::translate("AddClient", "Work Schedule:", Q_NULLPTR));
        cbWorkSchedule->clear();
        cbWorkSchedule->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "9 to 5", Q_NULLPTR)
         << QApplication::translate("AddClient", "Afternoon to late evening", Q_NULLPTR)
         << QApplication::translate("AddClient", "Varying shifts", Q_NULLPTR)
         << QApplication::translate("AddClient", "Overnight shifts", Q_NULLPTR)
         << QApplication::translate("AddClient", "Early morning to early afternoon", Q_NULLPTR)
         << QApplication::translate("AddClient", "Inconsistent", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unemployed", Q_NULLPTR)
        );
        label_26->setText(QApplication::translate("AddClient", "Personal information", Q_NULLPTR));
        tabClientInfo->setTabText(tabClientInfo->indexOf(tabInformation), QApplication::translate("AddClient", "Information", Q_NULLPTR));
        label_13->setText(QApplication::translate("AddClient", "What animals are you interested in:", Q_NULLPTR));
        boxDog->setText(QApplication::translate("AddClient", "Dog", Q_NULLPTR));
        boxCat->setText(QApplication::translate("AddClient", "Cat", Q_NULLPTR));
        boxBird->setText(QApplication::translate("AddClient", "Bird", Q_NULLPTR));
        boxLizard->setText(QApplication::translate("AddClient", "Lizard", Q_NULLPTR));
        boxRabbit->setText(QApplication::translate("AddClient", "Rabbit", Q_NULLPTR));
        rbDogAllergiesNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        cbFurPrefDog->clear();
        cbFurPrefDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hairless", Q_NULLPTR)
         << QApplication::translate("AddClient", "Short", Q_NULLPTR)
         << QApplication::translate("AddClient", "Long", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("AddClient", "Are you allergic to dogs:", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddClient", "Breeds:", Q_NULLPTR));
        cbDogSex->clear();
        cbDogSex->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        cbAgeDog->clear();
        cbAgeDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 3", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 7", Q_NULLPTR)
         << QApplication::translate("AddClient", "8 - 11", Q_NULLPTR)
         << QApplication::translate("AddClient", "12- 15", Q_NULLPTR)
         << QApplication::translate("AddClient", "15 - 25", Q_NULLPTR)
         << QApplication::translate("AddClient", "25 - 35", Q_NULLPTR)
         << QApplication::translate("AddClient", "35+", Q_NULLPTR)
        );
        rbDogAllergiesYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        bDogBreedAdd->setText(QApplication::translate("AddClient", "Add", Q_NULLPTR));
        label_14->setText(QApplication::translate("AddClient", "Age:", Q_NULLPTR));
        cbSizeDog->clear();
        cbSizeDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large", Q_NULLPTR)
        );
        bDogBreedRemove->setText(QApplication::translate("AddClient", "Remove", Q_NULLPTR));
        label_15->setText(QApplication::translate("AddClient", "Sex:", Q_NULLPTR));
        label_17->setText(QApplication::translate("AddClient", "Size:", Q_NULLPTR));
        label_16->setText(QApplication::translate("AddClient", "Fur:", Q_NULLPTR));
        tabWidgetBreeds->setTabText(tabWidgetBreeds->indexOf(tab_5), QApplication::translate("AddClient", "Dog", Q_NULLPTR));
        rbCatAllergiesNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        cbFurPrefCat->clear();
        cbFurPrefCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hairless", Q_NULLPTR)
         << QApplication::translate("AddClient", "Short", Q_NULLPTR)
         << QApplication::translate("AddClient", "Long", Q_NULLPTR)
        );
        label_20->setText(QApplication::translate("AddClient", "Are you allergic to cats:", Q_NULLPTR));
        label_21->setText(QApplication::translate("AddClient", "Breeds:", Q_NULLPTR));
        cbCatSex->clear();
        cbCatSex->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        cbAgeCat->clear();
        cbAgeCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 3", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 7", Q_NULLPTR)
         << QApplication::translate("AddClient", "8 - 11", Q_NULLPTR)
         << QApplication::translate("AddClient", "12- 15", Q_NULLPTR)
         << QApplication::translate("AddClient", "15 - 25", Q_NULLPTR)
         << QApplication::translate("AddClient", "25 - 35", Q_NULLPTR)
         << QApplication::translate("AddClient", "35+", Q_NULLPTR)
        );
        rbCatAllergiesYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        bCatBreedAdd->setText(QApplication::translate("AddClient", "Add", Q_NULLPTR));
        label_22->setText(QApplication::translate("AddClient", "Age:", Q_NULLPTR));
        cbSizeCat->clear();
        cbSizeCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large", Q_NULLPTR)
        );
        bCatBreedRemove->setText(QApplication::translate("AddClient", "Remove", Q_NULLPTR));
        label_23->setText(QApplication::translate("AddClient", "Sex:", Q_NULLPTR));
        label_24->setText(QApplication::translate("AddClient", "Size:", Q_NULLPTR));
        label_25->setText(QApplication::translate("AddClient", "Fur:", Q_NULLPTR));
        tabWidgetBreeds->setTabText(tabWidgetBreeds->indexOf(tab_6), QApplication::translate("AddClient", "Cat", Q_NULLPTR));
        rbBirdAllergiesNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        cbFurPrefBird->clear();
        cbFurPrefBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Feathered", Q_NULLPTR)
         << QApplication::translate("AddClient", "Featherless", Q_NULLPTR)
        );
        label_32->setText(QApplication::translate("AddClient", "Are you allergic to birds:", Q_NULLPTR));
        label_33->setText(QApplication::translate("AddClient", "Breeds:", Q_NULLPTR));
        cbBirdSex->clear();
        cbBirdSex->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        cbAgeBird->clear();
        cbAgeBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 3", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 7", Q_NULLPTR)
         << QApplication::translate("AddClient", "8 - 11", Q_NULLPTR)
         << QApplication::translate("AddClient", "12- 15", Q_NULLPTR)
         << QApplication::translate("AddClient", "15 - 25", Q_NULLPTR)
         << QApplication::translate("AddClient", "25 - 35", Q_NULLPTR)
         << QApplication::translate("AddClient", "35+", Q_NULLPTR)
        );
        rbBirdAllergiesYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        bBirdBreedAdd->setText(QApplication::translate("AddClient", "Add", Q_NULLPTR));
        label_34->setText(QApplication::translate("AddClient", "Age:", Q_NULLPTR));
        cbSizeBird->clear();
        cbSizeBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large", Q_NULLPTR)
        );
        bBirdBreedRemove->setText(QApplication::translate("AddClient", "Remove", Q_NULLPTR));
        label_35->setText(QApplication::translate("AddClient", "Sex:", Q_NULLPTR));
        label_36->setText(QApplication::translate("AddClient", "Size:", Q_NULLPTR));
        label_37->setText(QApplication::translate("AddClient", "Feathers:", Q_NULLPTR));
        label_85->setText(QApplication::translate("AddClient", "Colour:", Q_NULLPTR));
        cbColourBird->clear();
        cbColourBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Red", Q_NULLPTR)
         << QApplication::translate("AddClient", "Orange", Q_NULLPTR)
         << QApplication::translate("AddClient", "Yellow", Q_NULLPTR)
         << QApplication::translate("AddClient", "Green", Q_NULLPTR)
         << QApplication::translate("AddClient", "Blue", Q_NULLPTR)
         << QApplication::translate("AddClient", "Pink", Q_NULLPTR)
         << QApplication::translate("AddClient", "Purple", Q_NULLPTR)
         << QApplication::translate("AddClient", "White", Q_NULLPTR)
         << QApplication::translate("AddClient", "Black", Q_NULLPTR)
         << QApplication::translate("AddClient", "Brown", Q_NULLPTR)
         << QApplication::translate("AddClient", "Gray", Q_NULLPTR)
        );
        tabWidgetBreeds->setTabText(tabWidgetBreeds->indexOf(tab_7), QApplication::translate("AddClient", "Bird", Q_NULLPTR));
        rbLizardAllergiesNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        cbFurPrefLizard->clear();
        cbFurPrefLizard->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Smooth", Q_NULLPTR)
         << QApplication::translate("AddClient", "Rough", Q_NULLPTR)
         << QApplication::translate("AddClient", "Spikes", Q_NULLPTR)
        );
        label_38->setText(QApplication::translate("AddClient", "Are you allergic to lizards:", Q_NULLPTR));
        label_39->setText(QApplication::translate("AddClient", "Breeds:", Q_NULLPTR));
        cbLizardSex->clear();
        cbLizardSex->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        cbAgeLizard->clear();
        cbAgeLizard->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 3", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 7", Q_NULLPTR)
         << QApplication::translate("AddClient", "8 - 11", Q_NULLPTR)
         << QApplication::translate("AddClient", "12- 15", Q_NULLPTR)
         << QApplication::translate("AddClient", "15 - 25", Q_NULLPTR)
         << QApplication::translate("AddClient", "25 - 35", Q_NULLPTR)
         << QApplication::translate("AddClient", "35+", Q_NULLPTR)
        );
        rbLizardAllergiesYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        bLizardBreedAdd->setText(QApplication::translate("AddClient", "Add", Q_NULLPTR));
        label_40->setText(QApplication::translate("AddClient", "Age:", Q_NULLPTR));
        cbSizeLizard->clear();
        cbSizeLizard->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large", Q_NULLPTR)
        );
        bLizardBreedRemove->setText(QApplication::translate("AddClient", "Remove", Q_NULLPTR));
        label_41->setText(QApplication::translate("AddClient", "Sex:", Q_NULLPTR));
        label_42->setText(QApplication::translate("AddClient", "Size:", Q_NULLPTR));
        label_43->setText(QApplication::translate("AddClient", "Scale:", Q_NULLPTR));
        cbColorLizard->clear();
        cbColorLizard->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Red", Q_NULLPTR)
         << QApplication::translate("AddClient", "Orange", Q_NULLPTR)
         << QApplication::translate("AddClient", "Yellow", Q_NULLPTR)
         << QApplication::translate("AddClient", "Green", Q_NULLPTR)
         << QApplication::translate("AddClient", "Blue", Q_NULLPTR)
         << QApplication::translate("AddClient", "Purple", Q_NULLPTR)
         << QApplication::translate("AddClient", "Pink", Q_NULLPTR)
         << QApplication::translate("AddClient", "White", Q_NULLPTR)
         << QApplication::translate("AddClient", "Black", Q_NULLPTR)
         << QApplication::translate("AddClient", "Brown", Q_NULLPTR)
         << QApplication::translate("AddClient", "Grey", Q_NULLPTR)
        );
        label_86->setText(QApplication::translate("AddClient", "Colour:", Q_NULLPTR));
        tabWidgetBreeds->setTabText(tabWidgetBreeds->indexOf(tab_8), QApplication::translate("AddClient", "Lizard", Q_NULLPTR));
        rbRabbitAllergiesNo->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        cbFurPrefRabbit->clear();
        cbFurPrefRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hairless", Q_NULLPTR)
         << QApplication::translate("AddClient", "Short", Q_NULLPTR)
         << QApplication::translate("AddClient", "Long", Q_NULLPTR)
        );
        label_44->setText(QApplication::translate("AddClient", "Are you allergic to rabbits:", Q_NULLPTR));
        label_45->setText(QApplication::translate("AddClient", "Breeds:", Q_NULLPTR));
        cbRabbitSex->clear();
        cbRabbitSex->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        cbAgeRabbit->clear();
        cbAgeRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 3", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 7", Q_NULLPTR)
         << QApplication::translate("AddClient", "8 - 11", Q_NULLPTR)
         << QApplication::translate("AddClient", "12- 15", Q_NULLPTR)
         << QApplication::translate("AddClient", "15 - 25", Q_NULLPTR)
         << QApplication::translate("AddClient", "25 - 35", Q_NULLPTR)
         << QApplication::translate("AddClient", "35+", Q_NULLPTR)
        );
        rbRabbitAllergiesYes->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        bRabbitBreedAdd->setText(QApplication::translate("AddClient", "Add", Q_NULLPTR));
        label_46->setText(QApplication::translate("AddClient", "Age:", Q_NULLPTR));
        cbSizeRabbit->clear();
        cbSizeRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Teacup", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large", Q_NULLPTR)
        );
        bRabbitBreedRemove->setText(QApplication::translate("AddClient", "Remove", Q_NULLPTR));
        label_47->setText(QApplication::translate("AddClient", "Sex:", Q_NULLPTR));
        label_48->setText(QApplication::translate("AddClient", "Size:", Q_NULLPTR));
        label_49->setText(QApplication::translate("AddClient", "Fur:", Q_NULLPTR));
        cbColourRabbit->clear();
        cbColourRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "None", Q_NULLPTR)
         << QApplication::translate("AddClient", "Black", Q_NULLPTR)
         << QApplication::translate("AddClient", "Brown", Q_NULLPTR)
         << QApplication::translate("AddClient", "Gray", Q_NULLPTR)
         << QApplication::translate("AddClient", "White", Q_NULLPTR)
         << QApplication::translate("AddClient", "Cream", Q_NULLPTR)
         << QApplication::translate("AddClient", "Straw", Q_NULLPTR)
        );
        label_87->setText(QApplication::translate("AddClient", "Coat:", Q_NULLPTR));
        tabWidgetBreeds->setTabText(tabWidgetBreeds->indexOf(tab_9), QApplication::translate("AddClient", "Rabbit", Q_NULLPTR));
        label_19->setText(QApplication::translate("AddClient", "*You can leave any inputs on this page blank", Q_NULLPTR));
        label_28->setText(QApplication::translate("AddClient", "*You can leave any of these fields blank", Q_NULLPTR));
        tabClientInfo->setTabText(tabClientInfo->indexOf(tabPhysical), QApplication::translate("AddClient", "Physical", Q_NULLPTR));
        label_97->setText(QApplication::translate("AddClient", "Enter how important the following animal qualities are to you", Q_NULLPTR));
        cbQuietDog->clear();
        cbQuietDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        cdCommandsDog->clear();
        cdCommandsDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_77->setText(QApplication::translate("AddClient", "Dog:", Q_NULLPTR));
        label_78->setText(QApplication::translate("AddClient", "Is quiet:", Q_NULLPTR));
        label_79->setText(QApplication::translate("AddClient", "Well-trained:", Q_NULLPTR));
        label_80->setText(QApplication::translate("AddClient", "House trained:", Q_NULLPTR));
        cbHouseTrainedDog->clear();
        cbHouseTrainedDog->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        cbCuriousCat->clear();
        cbCuriousCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        cbCommandsCat->clear();
        cbCommandsCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        cbShedCat->clear();
        cbShedCat->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_81->setText(QApplication::translate("AddClient", "Is curious:", Q_NULLPTR));
        label_83->setText(QApplication::translate("AddClient", "Well-trained:", Q_NULLPTR));
        label_82->setText(QApplication::translate("AddClient", "Doesn't shed:", Q_NULLPTR));
        label_84->setText(QApplication::translate("AddClient", "Cat:", Q_NULLPTR));
        cbQuietBird->clear();
        cbQuietBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_88->setText(QApplication::translate("AddClient", "Is quiet:", Q_NULLPTR));
        label_89->setText(QApplication::translate("AddClient", "Is social:", Q_NULLPTR));
        cbSocialBird->clear();
        cbSocialBird->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_90->setText(QApplication::translate("AddClient", "Bird:", Q_NULLPTR));
        label_91->setText(QApplication::translate("AddClient", "Lizard:", Q_NULLPTR));
        cbLizardFeed->clear();
        cbLizardFeed->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        cbLivingSpaceLizard->clear();
        cbLivingSpaceLizard->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_92->setText(QApplication::translate("AddClient", "Easy to feed:", Q_NULLPTR));
        label_93->setText(QApplication::translate("AddClient", "Simple living space:", Q_NULLPTR));
        label_94->setText(QApplication::translate("AddClient", "Rabbit:", Q_NULLPTR));
        cbSocialRabbit->clear();
        cbSocialRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_95->setText(QApplication::translate("AddClient", "Is social:", Q_NULLPTR));
        cbNeedsGroomingRabbit->clear();
        cbNeedsGroomingRabbit->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Not at all", Q_NULLPTR)
         << QApplication::translate("AddClient", "Not much", Q_NULLPTR)
         << QApplication::translate("AddClient", "Unimportant", Q_NULLPTR)
         << QApplication::translate("AddClient", "Somewhat", Q_NULLPTR)
         << QApplication::translate("AddClient", "A lot", Q_NULLPTR)
        );
        label_96->setText(QApplication::translate("AddClient", "Needs grooming:", Q_NULLPTR));
        tabClientInfo->setTabText(tabClientInfo->indexOf(tab_2), QApplication::translate("AddClient", "Species", Q_NULLPTR));
        label_5->setText(QString());
        lbLikesTravel->setText(QApplication::translate("AddClient", "Likes travelling:", Q_NULLPTR));
        lbGoodWithChildren->setText(QApplication::translate("AddClient", "Good with children:", Q_NULLPTR));
        lbGoodWithAnimals->setText(QApplication::translate("AddClient", "Good with animals:", Q_NULLPTR));
        lbStrange->setText(QApplication::translate("AddClient", "Good with strangers:", Q_NULLPTR));
        lbCrowds->setText(QApplication::translate("AddClient", "Good in crowds:", Q_NULLPTR));
        lbNoise->setText(QApplication::translate("AddClient", "Good with loud noise:", Q_NULLPTR));
        lbProtect->setText(QApplication::translate("AddClient", "Good home protector:", Q_NULLPTR));
        lbEnergy->setText(QApplication::translate("AddClient", "Lots of energy:", Q_NULLPTR));
        lbFear->setText(QApplication::translate("AddClient", "Is not afraid:", Q_NULLPTR));
        lbAffection->setText(QApplication::translate("AddClient", "Is affectionate:", Q_NULLPTR));
        lbMessy->setText(QApplication::translate("AddClient", "Is not messy:", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddClient", "1", Q_NULLPTR));
        label_12->setText(QApplication::translate("AddClient", "5", Q_NULLPTR));
        rbTravel1->setText(QString());
        rbTravel2->setText(QString());
        rbTravel3->setText(QString());
        rbTravel4->setText(QString());
        rbTravel5->setText(QString());
        rbChildren1->setText(QString());
        rbChildren2->setText(QString());
        rbChildren3->setText(QString());
        rbChildren4->setText(QString());
        rbChildren5->setText(QString());
        rbGdAnimals1->setText(QString());
        rbGdAnimals2->setText(QString());
        rbGdAnimals3->setText(QString());
        rbGdAnimals4->setText(QString());
        rbGdAnimals5->setText(QString());
        rbStrange1->setText(QString());
        rbStrange2->setText(QString());
        rbStrange3->setText(QString());
        rbStrange4->setText(QString());
        rbStrange5->setText(QString());
        rbCrowds1->setText(QString());
        rbCrowds2->setText(QString());
        rbCrowds3->setText(QString());
        rbCrowds4->setText(QString());
        rbCrowds5->setText(QString());
        rbNoise1->setText(QString());
        rbNoise2->setText(QString());
        rbNoise3->setText(QString());
        rbNoise4->setText(QString());
        rbNoise5->setText(QString());
        rbProtect1->setText(QString());
        rbProtect2->setText(QString());
        rbProtect3->setText(QString());
        rbProtect4->setText(QString());
        rbProtect5->setText(QString());
        rbEnergy1->setText(QString());
        rbEnergy2->setText(QString());
        rbEnergy3->setText(QString());
        rbEnergy4->setText(QString());
        rbEnergy5->setText(QString());
        rbFear1->setText(QString());
        rbFear2->setText(QString());
        rbFear3->setText(QString());
        rbFear4->setText(QString());
        rbFear5->setText(QString());
        rbAffection1->setText(QString());
        rbAffection2->setText(QString());
        rbAffection3->setText(QString());
        rbAffection4->setText(QString());
        rbAffection5->setText(QString());
        rbMessy1->setText(QString());
        rbMessy2->setText(QString());
        rbMessy4->setText(QString());
        rbMessy5->setText(QString());
        rbMessy3->setText(QString());
        label_9->setText(QString());
        label_10->setText(QApplication::translate("AddClient", "What is your preference for an animal with the following attributes:", Q_NULLPTR));
        tabClientInfo->setTabText(tabClientInfo->indexOf(tabNonPhysical), QApplication::translate("AddClient", "Non-Physical", Q_NULLPTR));
        pbExit->setText(QApplication::translate("AddClient", "Exit", Q_NULLPTR));
        pbSubmit->setText(QApplication::translate("AddClient", "Next", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
