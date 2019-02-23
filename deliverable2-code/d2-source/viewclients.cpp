#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
}

ViewClients::~ViewClients()
{
    delete ui;
}

void ViewClients::populateList()
{

    int i = 0;

    while(i < storage->getNumOfElements())
    {
        QString clientInfo = QString::fromStdString(storage->listInfo(i));
        ui->clientList->addItem(clientInfo);
        ++i;
    }
}

void ViewClients::viewClientsFromStorage(Storage *storage)
{
    this->storage = storage;
    populateList();
    displayClient(0);
    this->exec();
}

void ViewClients::on_clientList_itemClicked(QListWidgetItem *item)
{
    int index = ui->clientList->currentRow();
    displayClient(index);
}

void ViewClients::displayClient(int index)
{
    if(storage->getNumOfElements() == 0) { ui->lbClientInfo->setText(QString::fromStdString("No clients in database")); return; }

    ui->lbClientInfo->setText(QString::fromStdString(storage->get(index)->getFormattedInfo()));
}
