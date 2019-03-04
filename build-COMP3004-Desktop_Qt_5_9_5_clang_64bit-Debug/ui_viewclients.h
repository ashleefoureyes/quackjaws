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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QGridLayout *gridLayout;
    QListWidget *clientList;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *lbClientInfo;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(577, 420);
        ViewClients->setMinimumSize(QSize(550, 420));
        gridLayout = new QGridLayout(ViewClients);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        clientList = new QListWidget(ViewClients);
        clientList->setObjectName(QStringLiteral("clientList"));

        gridLayout->addWidget(clientList, 1, 0, 1, 1);

        frame = new QFrame(ViewClients);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lbClientInfo = new QLabel(frame);
        lbClientInfo->setObjectName(QStringLiteral("lbClientInfo"));
        lbClientInfo->setMinimumSize(QSize(100, 100));
        lbClientInfo->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(14);
        lbClientInfo->setFont(font);
        lbClientInfo->setScaledContents(true);
        lbClientInfo->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbClientInfo, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ViewClients);

        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "Dialog", Q_NULLPTR));
        lbClientInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
