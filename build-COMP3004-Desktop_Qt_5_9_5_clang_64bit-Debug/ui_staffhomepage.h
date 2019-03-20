/********************************************************************************
** Form generated from reading UI file 'staffhomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFHOMEPAGE_H
#define UI_STAFFHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StaffHomepage
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QLabel *lbAnimals;
    QHBoxLayout *horizontalLayout;
    QPushButton *bAddAnimal;
    QPushButton *bViewAnimals;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbClients;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bAddClient;
    QPushButton *bViewClients;
    QFrame *line_4;
    QPushButton *bRunAlgorithm;
    QFrame *line_3;
    QPushButton *bLogout;

    void setupUi(QDialog *StaffHomepage)
    {
        if (StaffHomepage->objectName().isEmpty())
            StaffHomepage->setObjectName(QStringLiteral("StaffHomepage"));
        StaffHomepage->resize(402, 370);
        StaffHomepage->setMinimumSize(QSize(402, 370));
        StaffHomepage->setMaximumSize(QSize(402, 370));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/cuacs_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        StaffHomepage->setWindowIcon(icon);
        StaffHomepage->setStyleSheet(QLatin1String("QDialog{\n"
"background-color:#1d1d1d;\n"
"}\n"
"\n"
"Line{\n"
"color:#fff;\n"
"}\n"
"\n"
"QPushButton{\n"
"color: #fff;\n"
"background-color:#c23b22;\n"
"border-radius:7px;\n"
"min-height: 20px;\n"
"min-width: 150px;\n"
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
"}"));
        verticalLayout_3 = new QVBoxLayout(StaffHomepage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(StaffHomepage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 17));
        label->setMaximumSize(QSize(16777215, 17));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label);

        line = new QFrame(StaffHomepage);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbAnimals = new QLabel(StaffHomepage);
        lbAnimals->setObjectName(QStringLiteral("lbAnimals"));
        lbAnimals->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        lbAnimals->setFont(font1);
        lbAnimals->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbAnimals);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bAddAnimal = new QPushButton(StaffHomepage);
        bAddAnimal->setObjectName(QStringLiteral("bAddAnimal"));
        bAddAnimal->setMinimumSize(QSize(150, 20));
        bAddAnimal->setMaximumSize(QSize(100, 41));

        horizontalLayout->addWidget(bAddAnimal);

        bViewAnimals = new QPushButton(StaffHomepage);
        bViewAnimals->setObjectName(QStringLiteral("bViewAnimals"));
        bViewAnimals->setMinimumSize(QSize(150, 20));
        bViewAnimals->setMaximumSize(QSize(100, 41));
        QFont font2;
        font2.setPointSize(10);
        bViewAnimals->setFont(font2);

        horizontalLayout->addWidget(bViewAnimals);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        line_2 = new QFrame(StaffHomepage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 1));
        line_2->setMaximumSize(QSize(16777215, 1));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbClients = new QLabel(StaffHomepage);
        lbClients->setObjectName(QStringLiteral("lbClients"));
        lbClients->setMaximumSize(QSize(16777215, 25));
        lbClients->setFont(font1);
        lbClients->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbClients);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bAddClient = new QPushButton(StaffHomepage);
        bAddClient->setObjectName(QStringLiteral("bAddClient"));
        bAddClient->setMinimumSize(QSize(150, 20));
        bAddClient->setMaximumSize(QSize(100, 41));

        horizontalLayout_2->addWidget(bAddClient);

        bViewClients = new QPushButton(StaffHomepage);
        bViewClients->setObjectName(QStringLiteral("bViewClients"));
        bViewClients->setMinimumSize(QSize(150, 20));
        bViewClients->setMaximumSize(QSize(100, 41));

        horizontalLayout_2->addWidget(bViewClients);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        line_4 = new QFrame(StaffHomepage);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setMinimumSize(QSize(0, 1));
        line_4->setMaximumSize(QSize(16777215, 1));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        bRunAlgorithm = new QPushButton(StaffHomepage);
        bRunAlgorithm->setObjectName(QStringLiteral("bRunAlgorithm"));
        bRunAlgorithm->setMinimumSize(QSize(150, 20));

        verticalLayout_3->addWidget(bRunAlgorithm);

        line_3 = new QFrame(StaffHomepage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setMinimumSize(QSize(0, 1));
        line_3->setMaximumSize(QSize(16777215, 1));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        bLogout = new QPushButton(StaffHomepage);
        bLogout->setObjectName(QStringLiteral("bLogout"));

        verticalLayout_3->addWidget(bLogout);


        retranslateUi(StaffHomepage);

        QMetaObject::connectSlotsByName(StaffHomepage);
    } // setupUi

    void retranslateUi(QDialog *StaffHomepage)
    {
        StaffHomepage->setWindowTitle(QApplication::translate("StaffHomepage", "Staff Homepage", Q_NULLPTR));
        label->setText(QApplication::translate("StaffHomepage", "Logged in as: Staff", Q_NULLPTR));
        lbAnimals->setText(QApplication::translate("StaffHomepage", "Animals", Q_NULLPTR));
        bAddAnimal->setText(QApplication::translate("StaffHomepage", "Add Animal", Q_NULLPTR));
        bViewAnimals->setText(QApplication::translate("StaffHomepage", "View/Edit Animals", Q_NULLPTR));
        lbClients->setText(QApplication::translate("StaffHomepage", "Clients", Q_NULLPTR));
        bAddClient->setText(QApplication::translate("StaffHomepage", "Add Client", Q_NULLPTR));
        bViewClients->setText(QApplication::translate("StaffHomepage", "View/Edit Clients", Q_NULLPTR));
        bRunAlgorithm->setText(QApplication::translate("StaffHomepage", "Run Algorithm", Q_NULLPTR));
        bLogout->setText(QApplication::translate("StaffHomepage", "Logout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StaffHomepage: public Ui_StaffHomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFHOMEPAGE_H
