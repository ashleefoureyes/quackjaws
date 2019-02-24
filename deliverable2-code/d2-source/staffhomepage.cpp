#include "staffhomepage.h"
#include "ui_staffhomepage.h"

StaffHomepage::StaffHomepage(QWidget *parent, Storage *animalStorage, Storage *clientStorage) :
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
    Animal *newAnimal = new Animal();

    if(addAnim.initNewAnimal(newAnimal) == 0) { delete newAnimal; return; }

    animalStorage->add(newAnimal);
}

/** Function: on_bViewAnimals_clicked()
    purpose: Opens window to view all animals */
void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(animalStorage);

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
    Client *newClient = new Client;

    if(addClient.initNewClient(newClient) == 0) { delete newClient; return; }

    clientStorage->add(newClient);
}

/** Function: on_bViewClients_clicked()
    purpose: Opens window to view all clients */
void StaffHomepage::on_bViewClients_clicked()
{
    ViewClients viewClient;
    viewClient.setModal(true);
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
