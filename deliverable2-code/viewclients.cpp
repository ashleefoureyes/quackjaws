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

/** Function: PopulateList
    purpose: Populates client list with all Clients in storage*/
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

/** Function: viewClientsFromStorage(Storage*)
 *  in: Storage*
 *  purpose: To be called when ViewClients is clicked. Displays all clients in storage */
void ViewClients::viewClientsFromStorage(ClientStorage *storage)
{
    this->storage = storage;
    populateList();
    displayClient(0);
    this->exec();
}

/** Funciton: on_clientList_itemClicked()
    purpose: Changes displayed Client information when list
             item clicked */
void ViewClients::on_clientList_itemClicked()
{
    int index = ui->clientList->currentRow();
    displayClient(index);
}

/** Function: displayClient(int index)
 *  in: int index of client in list
    purpose: Displays the information of the client clicked on in the list*/
void ViewClients::displayClient(int index)
{
    if(storage->getNumOfElements() == 0) { ui->lbContactInfo->setText(QString::fromStdString("No clients in database")); return; }

    ui->lbContactInfo->setText(storage->get(index)->getFormattedInfoQ());
    ui->lbClientAttributes->setText(storage->get(index)->getClientAttributesQ());
}

void ViewClients::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}
