#include "staffhomepage.h"
#include "ui_staffhomepage.h"

StaffHomepage::StaffHomepage(QWidget *parent, AnimalStorage *animalStorage, ClientStorage *clientStorage) :
    QDialog(parent),
    ui(new Ui::StaffHomepage)
{
    ui->setupUi(this);
    this->animalStorage = animalStorage;
    this->clientStorage = clientStorage;
}

StaffHomepage::~StaffHomepage()
{
    delete ui;
}


int StaffHomepage::showStaffPage()
{
    returnResult = 0;
    this->exec();
    return returnResult;
}

/** Function: on_bAddAnimal_clicked()
 *  Purpose: Opens addAnimal window. If staff clicked submit
 *           then the new animal is initialized and put in storage
 *           If staff clicked exit then the animal is deleted */
void StaffHomepage::on_bAddAnimal_clicked()
{
    AddAnimal addAnim;
    addAnim.setModal(true);
    addAnim.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    addAnim.createNewAnimal(&animalStorage);
}

/** Function: on_bViewAnimals_clicked()
    purpose: Opens window to view all animals */
void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    viewAnim.viewAnimalsFromStorage(animalStorage, true);

}

/** Function: on_bLogout_clicked()
    purpose: Returns to mainwindow*/
void StaffHomepage::on_bLogout_clicked()
{
    returnResult = QDialog::Accepted;
    this->close();
}

/** Function: on_bAddClient_clicked()
 *  Purpose: Opens addClient window. If staff clicked submit
 *           then the new client is initialized and put in storage
 *           If staff clicked exit then the client is deleted */
void StaffHomepage::on_bAddClient_clicked()
{
    AddClient addClient;
    addClient.setModal(true);
    addClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);

    addClient.initNewClient(&clientStorage);

    // CLIENT WILL NOW NEED TO BE ADDED TO DB IN ADDCLIENT PROGRAM
    // OTHERWISE IT MAKES EDITING CLIENTS IN STORAGE
    // VERY DIFFICULT

    //db->addClientToDatabase(newClient);
}

/** Function: on_bViewClients_clicked()
    purpose: Opens window to view all clients */
void StaffHomepage::on_bViewClients_clicked()
{
    ViewClients viewClient;
    viewClient.setModal(true);
    viewClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    viewClient.viewClientsFromStorage(clientStorage);

}

// Not yet implemented
void StaffHomepage::on_bRunAlgorithm_clicked()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Feature coming soon!");
    msgBox.setText(qst);
    msgBox.exec();
}

/** Function: passBreeds(breeds)
    in: vectors of strings for each breed
    purpose: Sets the breeds to the string vector that was passed.
             This allows us to change the breeds in one location and
             have them remain consistent between all "addAnimal" and "addClients" */
void StaffHomepage::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}




