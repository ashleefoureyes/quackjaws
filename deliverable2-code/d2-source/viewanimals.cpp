#include "viewanimals.h"
#include "ui_viewanimals.h"
#include <QListWidgetItem>
#include <QListWidget>
#include <QMessageBox>

#include <list>

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{
    ui->setupUi(this);
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}

void ViewAnimals::viewAnimalsFromStorage(Storage *storage)
{
    this->storage = storage;
    populateList();
    this->exec();
}

void ViewAnimals::populateList()
{
    int i = 0;

    while(i < storage->getNumOfElements())
    {

        QString qAnimInfo = QString::fromStdString(storage->listInfo(i));
        ui->animalList->addItem(qAnimInfo);

        ++i;
    }
}

void ViewAnimals::on_animalList_itemClicked(QListWidgetItem *item)
{
        int index = ui->animalList->currentRow();

        QMessageBox msgBox;
        QString qst = QString::fromStdString(std::to_string(index));

        msgBox.setText(qst);

        QFont font("Courier", 9, true);

        msgBox.setFont(font);
        msgBox.setStyleSheet("QLabel{min-width:1200px;}");
        msgBox.exec();
}
