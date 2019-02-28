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

/** Function: on_lbLogout_clicked
    purpose: Returns 1 if user logs out This is so the mainpage knows
             to show itself again as opposed to just closing the program*/
void ClientHomepage::on_lbLogout_clicked()
{
    returnResult = QDialog::Accepted;
    this->close();
}

/** Function: on_lbViewAnimals_clicked()
 *  purpose: Shows the list of all animals in storage */
void ClientHomepage::on_lbViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(animalStorage);
}
