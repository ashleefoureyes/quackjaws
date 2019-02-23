/********************************************************************************
** Form generated from reading UI file 'viewclients.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTS_H
#define UI_VIEWCLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QGridLayout *gridLayout;
    QListWidget *clientList;
    QFrame *frame;
    QLabel *lbClientInfo;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(400, 416);
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
        lbClientInfo = new QLabel(frame);
        lbClientInfo->setObjectName(QStringLiteral("lbClientInfo"));
        lbClientInfo->setGeometry(QRect(20, 20, 351, 151));
        lbClientInfo->setMinimumSize(QSize(100, 100));
        lbClientInfo->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(14);
        lbClientInfo->setFont(font);
        lbClientInfo->setScaledContents(true);
        lbClientInfo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ViewClients);

        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "Dialog", nullptr));
        lbClientInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
