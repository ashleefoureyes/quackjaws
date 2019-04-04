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
        clientList->addItem(QString::fromStdString(it->second.front()->getClient()->getFullName()));
    }

}
