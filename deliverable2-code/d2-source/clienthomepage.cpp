#include "clienthomepage.h"
#include "ui_clienthomepage.h"

ClientHomepage::ClientHomepage(QWidget *parent, Storage *animalStorage, Storage *clientStorage) :
    QDialog(parent),
    ui(new Ui::ClientHomepage)
{
    ui->setupUi(this);
    this->animalStorage = animalStorage;
    this->clientStorage = clientStorage;
}

ClientHomepage::~ClientHomepage()
{
    delete ui;
}

int ClientHomepage::showClientPage()
{
    returnResult = 0;
    this->exec();
    return returnResult;
}

void ClientHomepage::on_lbLogout_clicked()
{
    returnResult = QDialog::Accepted;
    this->close();
}

void ClientHomepage::on_lbViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(animalStorage);
}
