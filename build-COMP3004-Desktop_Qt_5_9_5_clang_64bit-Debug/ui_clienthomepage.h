/********************************************************************************
** Form generated from reading UI file 'clienthomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTHOMEPAGE_H
#define UI_CLIENTHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClientHomepage
{
public:
    QPushButton *lbViewAnimals;
    QPushButton *lbLogout;
    QLabel *lbUserWelcome;
    QPushButton *lbEditClient;

    void setupUi(QDialog *ClientHomepage)
    {
        if (ClientHomepage->objectName().isEmpty())
            ClientHomepage->setObjectName(QStringLiteral("ClientHomepage"));
        ClientHomepage->resize(400, 300);
        ClientHomepage->setStyleSheet(QLatin1String("QDialog{\n"
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
"QCheckBox{\n"
"color: #ffffff;\n"
"}"));
        lbViewAnimals = new QPushButton(ClientHomepage);
        lbViewAnimals->setObjectName(QStringLiteral("lbViewAnimals"));
        lbViewAnimals->setGeometry(QRect(120, 100, 150, 41));
        lbLogout = new QPushButton(ClientHomepage);
        lbLogout->setObjectName(QStringLiteral("lbLogout"));
        lbLogout->setGeometry(QRect(120, 240, 150, 25));
        lbUserWelcome = new QLabel(ClientHomepage);
        lbUserWelcome->setObjectName(QStringLiteral("lbUserWelcome"));
        lbUserWelcome->setGeometry(QRect(30, 40, 351, 41));
        QFont font;
        font.setPointSize(12);
        lbUserWelcome->setFont(font);
        lbUserWelcome->setAlignment(Qt::AlignCenter);
        lbEditClient = new QPushButton(ClientHomepage);
        lbEditClient->setObjectName(QStringLiteral("lbEditClient"));
        lbEditClient->setGeometry(QRect(120, 160, 150, 41));

        retranslateUi(ClientHomepage);

        QMetaObject::connectSlotsByName(ClientHomepage);
    } // setupUi

    void retranslateUi(QDialog *ClientHomepage)
    {
        ClientHomepage->setWindowTitle(QApplication::translate("ClientHomepage", "Dialog", Q_NULLPTR));
        lbViewAnimals->setText(QApplication::translate("ClientHomepage", "View Animals", Q_NULLPTR));
        lbLogout->setText(QApplication::translate("ClientHomepage", "Logout", Q_NULLPTR));
        lbUserWelcome->setText(QApplication::translate("ClientHomepage", "Welcome back: ", Q_NULLPTR));
        lbEditClient->setText(QApplication::translate("ClientHomepage", "Edit Client Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientHomepage: public Ui_ClientHomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTHOMEPAGE_H
