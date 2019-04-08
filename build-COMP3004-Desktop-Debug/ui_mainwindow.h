/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *bClientEntry;
    QPushButton *bStaffEntry;
    QLineEdit *txtEmailLogin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/cuacs_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"background-color:#1d1d1d;\n"
"}\n"
"\n"
"QPushButton{\n"
"color: #fff;\n"
"background-color:#c23b22;\n"
"border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:ccc;\n"
"border-color:#2d89ef;\n"
"border-width:2px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius:4px;\n"
"}\n"
"\n"
"QLabel{\n"
"color: #ffffff\n"
"}\n"
"\n"
"QMessageBox {\n"
"	background-color: #1d1d1d;\n"
"}\n"
"\n"
"QMessageBox QLabel{\n"
"	color: #fff;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        bClientEntry = new QPushButton(centralWidget);
        bClientEntry->setObjectName(QStringLiteral("bClientEntry"));
        bClientEntry->setGeometry(QRect(140, 150, 101, 31));
        bStaffEntry = new QPushButton(centralWidget);
        bStaffEntry->setObjectName(QStringLiteral("bStaffEntry"));
        bStaffEntry->setGeometry(QRect(140, 220, 101, 31));
        txtEmailLogin = new QLineEdit(centralWidget);
        txtEmailLogin->setObjectName(QStringLiteral("txtEmailLogin"));
        txtEmailLogin->setGeometry(QRect(120, 110, 151, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 190, 64, 17));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 30, 161, 51));
        QFont font1;
        font1.setPointSize(25);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 80, 201, 17));
        label_3->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "cuACS Animal Management", Q_NULLPTR));
        bClientEntry->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        bStaffEntry->setText(QApplication::translate("MainWindow", "Staff Login", Q_NULLPTR));
        txtEmailLogin->setPlaceholderText(QApplication::translate("MainWindow", "Client email address", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Or:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "cuACS", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Animal management system", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
