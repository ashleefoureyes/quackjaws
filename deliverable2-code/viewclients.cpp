#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
    currentIndex = 0;
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
    this->currentIndex = ui->clientList->currentRow();
    displayClient(currentIndex);
    fillBars();
}

/** Function: displayClient(int index)
 *  in: int index of client in list
    purpose: Displays the information of the client clicked on in the list*/
void ViewClients::displayClient(int index)
{
    if(storage->getNumOfElements() == 0) { ui->lbContactInfo->setText(QString::fromStdString("No clients in database")); return; }

    ui->lbContactInfo->setText(storage->get(index)->getFormattedInfoQ());
    ui->lbClientAttributes->setText(storage->get(index)->getClientAttributesQ());
    disableUnusedSpeciesButtons();
    findFirstValidSpecies();
    fillBars();
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

void ViewClients::disableUnusedSpeciesButtons()
{
    Client* client = nullptr;
    storage->get(&client, currentIndex);
    ui->rbSpeciesDog->setEnabled(client->getWantsDog());
    ui->rbSpeciesCat->setEnabled(client->getWantsCat());
    ui->rbSpeciesBird->setEnabled(client->getWantsBird());
    ui->rbSpeciesLizard->setEnabled(client->getWantsLizard());
    ui->rbSpeciesRabbit->setEnabled(client->getWantsRabbit());

    if(!client->getWantsDog() && !client->getWantsCat() && !client->getWantsBird()
            && !client->getWantsLizard() && !client->getWantsRabbit()) { ui->lbBreedPreferences->setText("Does not want any species"); }
}

void ViewClients::findFirstValidSpecies()
{
    Client* client = nullptr;
    storage->get(&client, currentIndex);
    if(client->getWantsDog()) { on_rbSpeciesDog_clicked(); ui->rbSpeciesDog->setChecked(true); }
    else if(client->getWantsCat()) { on_rbSpeciesCat_clicked(); ui->rbSpeciesCat->setChecked(true);}
    else if(client->getWantsBird()) { on_rbSpeciesBird_clicked(); ui->rbSpeciesBird->setChecked(true);}
    else if(client->getWantsLizard()) { on_rbSpeciesLizard_clicked();ui->rbSpeciesLizard->setChecked(true); }
    else if(client->getWantsRabbit()) { on_rbSpeciesRabbit_clicked(); ui->rbSpeciesRabbit->setChecked(true);}
    else {ui->lbBreedPreferences->setText("Does not want any species"); }
}

void ViewClients::fillBars()
{
    Client* client = nullptr;
    storage->get(&client, currentIndex);

    ui->barLikesTravel_2->setValue(client->getTravels());
    ui->barChildren_2->setValue(client->getChildren());
    ui->barAnimals_2->setValue(client->getGoodWAnimals());
    ui->barStrangers_2->setValue(client->getStrangers());
    ui->barCrowds_2->setValue(client->getCrowds());
    ui->barNoise_2->setValue(client->getNoises());
    ui->barProtector_2->setValue(client->getProtector());
    ui->barEnergy_2->setValue(client->getEnergy());
    ui->barFear_2->setValue(client->getFearful());
    ui->barAffection_2->setValue(client->getAffection());
    ui->barMessy_2->setValue(client->getMessy());
}

void ViewClients::on_rbSpeciesDog_clicked() { ui->lbBreedPreferences->setText(storage->get(this->currentIndex)->dogPrefsStrQ()); }
void ViewClients::on_rbSpeciesCat_clicked() { ui->lbBreedPreferences->setText(storage->get(this->currentIndex)->catPrefsStrQ()); }
void ViewClients::on_rbSpeciesBird_clicked() { ui->lbBreedPreferences->setText(storage->get(this->currentIndex)->birdPrefsStrQ()); }
void ViewClients::on_rbSpeciesLizard_clicked() { ui->lbBreedPreferences->setText(storage->get(this->currentIndex)->lizardPrefsStrQ()); }
void ViewClients::on_rbSpeciesRabbit_clicked() { ui->lbBreedPreferences->setText(storage->get(this->currentIndex)->rabbitPrefsStrQ()); }


void ViewClients::on_buttonEdit_clicked()
{
    AddClient addClient;
    Client* client = nullptr;
    storage->get(&client, currentIndex);

    addClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    if(addClient.editClient(client, &storage)) { reloadView(); }
}

void ViewClients::reloadView()
{

}
