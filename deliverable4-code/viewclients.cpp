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
void ViewClients::viewClientsFromStorage(ClientStorage *storage, bool isStaff)
{
    if(isStaff == true)
    {
        ui->buttonEdit->hide();
    }

    this->storage = storage;
    populateList();
    ui->tabWidget->setCurrentIndex(0);
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

/** Function: passBreeds
 *  In: vectors of breeds
 *  Purpose: Sets object attributes to breeds passed as arguments  */
void ViewClients::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}

/** Function: disableUnusedSpeciesButtons()
 *  Purpose: If user does not want an animal then this method makes
 *           It so the user cannot view preferences for these animals considered
 *           They have not expressed an interest in that species */
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

/** Function: findFirstValidSpecies()
 *  Purpose: Finds the earliest species that a client has expressed interest
 *           This ensures that when viewing a clients breed preferences we are
 *           always shown the values for an animal that the client wants */
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

/** Function: fillBars()
 *  Purpose: Fills the bars on a clients profile based off that clients attributes */
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
    int index = ui->clientList->currentRow();
    if(index < 0 || index > storage->getNumOfElements()) { displayTextBoxError("Error: No client selected"); return; }

    AddClient addClient;
    Client* client = nullptr;
    storage->get(&client, currentIndex);

    addClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    if(addClient.editClient(client, &storage)) { reloadView(); }
}

/** Function: reloadView()
 *  Purpose: Reloads the list so that if a client is edited that clients' new
 *           attributes are immediately shown */
void ViewClients::reloadView()
{
    //currentRow needs to be saved in a variable. If the function is passed
    // to displayAnimal as a parameter it always passes -1
    int index = ui->clientList->currentRow();
    if(index < 0 || index > storage->getNumOfElements()) { index = 0; }
    ui->clientList->clear();
    populateList();
    displayClient(index);
}

/** Function: displayTextBoxError()
 *  In: QString err
 *  Purpose: Displays error passed as argument */
void ViewClients::displayTextBoxError(QString err)
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(err);
    msgBox.exec();
}
