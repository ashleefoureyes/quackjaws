#include "viewresults.h"
#include "ui_viewresults.h"

ViewResults::ViewResults(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewResults)
{
    ui->setupUi(this);
    ui->tabWidgetDetailed->findChild<QTabBar *>()->hide();
}

ViewResults::~ViewResults()
{
    delete ui;
}

void ViewResults::showMatchUi(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int numOfAnimals, int numOfClients)
{
    this->matches = matches;
    this->optimalMatches = optimalMatches;
    ui->lbAnimalMatches->setText(QString::fromStdString(std::to_string(optimalMatches->size()) + "/" + std::to_string(numOfAnimals)) + " animals have optimal matches");
    ui->lbClientMatches->setText(QString::fromStdString(std::to_string(optimalMatches->size()) + "/" + std::to_string(numOfClients)) + " clients have optimal matches");
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

    std::vector<Match*>::iterator itV;
    for(itV = optimalMatches->begin(); itV != optimalMatches->end(); itV++)
    {
        ui->listOptimalMatches->addItem(QString::fromStdString((*itV)->getMatchStr()));
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
    setDetailedDefault();

    // Uses string from QListWidgetItem to get the Id
    // Faster retrieval method but if we remove the Id from the QListWidget
    // then the way we retrieve the id of the clicked user will need to change
    std::string id = item->text().toStdString();
    QTextStream cerr(stderr);
    cerr << QString::fromStdString(id);
    id = id.substr(0, id.find(": "));
    int idNum = std::stoi(id);
    detailedId = idNum;
    cerr << QString::fromStdString(std::to_string(idNum));
    populateAnimalQList(idNum);
}

void ViewResults::displayMatchInfo(Match* match)
{
    Client* cl = match->getClient();
    Animal* an = match->getAnimal();

    ui->lbMatchScore->setText("Match score: " + QString::fromStdString(std::to_string(match->getScore())));
    ui->lbMatchName->setText("Comparing: " + QString::fromStdString(match->getClient()->getFullName() + " and " + match->getAnimal()->getName()));
    ui->barClTravel->setValue(cl->getTravels()); ui->BarAnTravel->setValue(an->getTravels());
    ui->barClChildren->setValue(cl->getChildren()); ui->BarAnChildren->setValue(an->getChildren());
    ui->barClAnimals->setValue(cl->getGoodWAnimals()); ui->barAnAnimals->setValue(an->getGoodWAnimals());
    ui->barClStrangers->setValue(cl->getStrangers()); ui->barAnStrangers->setValue(an->getStrangers());
    ui->barClCrowds->setValue(cl->getCrowds()); ui->barAnCrowds->setValue(an->getCrowds());
    ui->barClNoise->setValue(cl->getNoises()); ui->barAnNoise->setValue(an->getNoises());
    ui->barClProtective->setValue(cl->getProtector()); ui->barAnProtective->setValue(an->getProtector());
    ui->barClEnergetic->setValue(cl->getEnergy()); ui->barAnEnergetic->setValue(an->getEnergy());
    ui->barClFearful->setValue(cl->getFearful()); ui->barAnFearful->setValue(an->getFearful());
    ui->barClAffectionate->setValue(cl->getAffection()); ui->barAnAffectionate->setValue(an->getAffection());
    ui->barClMessy->setValue(cl->getMessy()); ui->barAnMessy->setValue(an->getMessy());
    ui->lbDetailedAnimalInfo->setText(match->speciesTraitsQStr());
}

void ViewResults::on_listAnimalsDetailed_itemClicked(QListWidgetItem *item)
{
    if(ui->listClientsDetailed->currentRow() < 0 || ui->listClientsDetailed->currentRow() > ui->listClientsDetailed->count()) { return; }

    std::string animalIdStr = item->text().toStdString();
    animalIdStr = animalIdStr.substr(0, animalIdStr.find(": "));
    int idNum = std::stoi(animalIdStr);

    std::vector<Match*>::iterator it;
    for(it = matchesForClient.begin(); it != matchesForClient.end(); it++)
    {
        Animal* anim = (*it)->getAnimal();
        if(anim->getId() == idNum) { displayMatchInfo((*it)); }
    }
}

void ViewResults::setDetailedDefault()
{
    ui->lbMatchName->setText("");
    ui->lbMatchScore->setText("");
}

void ViewResults::on_buttonNext_clicked()
{
    if(ui->tabWidgetDetailed->currentIndex() == 0) { ui->tabWidgetDetailed->setCurrentIndex(1); }
    else { ui->tabWidgetDetailed->setCurrentIndex(0); }
}

void ViewResults::on_buttonBack_clicked()
{
    on_buttonNext_clicked();
}
