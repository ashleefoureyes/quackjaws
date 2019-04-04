#include "viewresults.h"
#include "ui_viewresults.h"

ViewResults::ViewResults(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewResults)
{
    ui->setupUi(this);
}

ViewResults::~ViewResults()
{
    delete ui;
}

void ViewResults::showMatchUi(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches)
{
    this->matches = matches;
    this->optimalMatches = optimalMatches;
    populateClientQList();
    this->exec();
}

void ViewResults::populateClientQList()
{
    QListWidget *clientList = ui->listClientsDetailed;

    std::map<int, std::vector<Match*>>::iterator it;
    for(it = matches->begin(); it != matches->end(); it++)
    {
        Client* client = it->second.front()->getClient();
        clientList->addItem(QString::fromStdString(std::to_string(client->getId()) + ": " + client->getFullName()));

    }
}

void ViewResults::populateAnimalQList(int idNum)
{
    QTextStream cerr(stderr);

    ui->listAnimalsDetailed->clear();


    std::map<int, std::vector<Match*>>::iterator itR;
    itR = matches->find(idNum);

    //Sets class attributes to match vector
    // Indexes will match up with QListWidget
    matchesForClient = itR->second;

    std::vector<Match*>::iterator it;
    for(it = matchesForClient.begin(); it != matchesForClient.end(); it++)
    {
        Animal* anim = (*it)->getAnimal();
        ui->listAnimalsDetailed->addItem(QString::fromStdString(std::to_string(anim->getId()) + ": " + anim->getName()));
    }
}

void ViewResults::on_listClientsDetailed_itemClicked(QListWidgetItem *item)
{
    // Uses string from QListWidgetItem to get the Id
    // Faster retrieval method but if we remove the Id from the QListWidget
    // then the way we retrieve the id of the clicked user will need to change
    std::string id = item->text().toStdString();
    QTextStream cerr(stderr);
    cerr << QString::fromStdString(id);
    id = id.substr(0, id.find(": "));
    int idNum = std::stoi(id);
    cerr << QString::fromStdString(std::to_string(idNum));
    populateAnimalQList(idNum);
}
