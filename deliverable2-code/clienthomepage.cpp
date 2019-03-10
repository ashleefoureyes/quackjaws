#include "clienthomepage.h"
#include "ui_clienthomepage.h"

ClientHomepage::ClientHomepage(QWidget *parent, AnimalStorage *animalStorage, ClientStorage *clientStorage, Client* client) :
    QDialog(parent),
    ui(new Ui::ClientHomepage)
{
    ui->setupUi(this);
    this->animalStorage = animalStorage;
    this->clientStorage = clientStorage;
    this->client = client;
}

ClientHomepage::~ClientHomepage()
{
    delete ui;
}

int ClientHomepage::showClientPage()
{
    returnResult = 0;
    ui->lbUserWelcome->setText(QString::fromStdString("Welcome: " + client->getFirstName() + " " + client->getLastName()));
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
    viewAnim.viewAnimalsFromStorage(animalStorage, false);
}

void ClientHomepage::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}
