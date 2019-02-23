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

void StaffHomepage::on_bAddAnimal_clicked()
{
    AddAnimal addAnim;
    addAnim.setModal(true);
    Animal *newAnimal = new Animal();

    if(addAnim.createNewAnimal(newAnimal) == 0) { return; }

    animalStorage->add(newAnimal);
}

void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(animalStorage);

}

void StaffHomepage::on_bLogout_clicked()
{
    returnResult = QDialog::Accepted;
    this->close();
}

void StaffHomepage::on_bAddClient_clicked()
{
    AddClient addClient;
    addClient.setModal(true);
    Client *newClient = new Client;

    if(addClient.createNewClient(newClient) == 0) { return; }

    clientStorage->add(newClient);
}

void StaffHomepage::on_bViewClients_clicked()
{
    ViewClients viewClient;
    viewClient.setModal(true);
    viewClient.viewClientsFromStorage(clientStorage);

}

void StaffHomepage::on_bRunAlgorithm_clicked()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Feature coming soon!");
    msgBox.setText(qst);
    msgBox.exec();
}
