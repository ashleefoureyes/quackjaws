#include "staffhomepage.h"
#include "ui_staffhomepage.h"
#include "addanimal.h"
#include "animal.h"

StaffHomepage::StaffHomepage(QWidget *parent, Storage *storage) :
    QDialog(parent),
    ui(new Ui::StaffHomepage)
{
    ui->setupUi(this);
    this->storage = storage;
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

    storage->add(newAnimal);
}

void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(storage);

}

void StaffHomepage::on_bLogout_clicked()
{
    returnResult = QDialog::Accepted;
    this->close();
}

void StaffHomepage::on_bAddClient_clicked()
{
    AddClient addClient;
    Client *newClient = new Client;
    addClient.createNewClient(newClient);

}
