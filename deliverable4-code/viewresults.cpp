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

/** Function: showMatchUi()
 *  In: std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int numOfAnimals, intNumOfClients
 *  Purpose: Public function to be called when wanting to view algorithm matching results. All input information
 *           necessary to display information to the user */
void ViewResults::showMatchUi(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int numOfAnimals, int numOfClients)
{
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setCurrentIndex(0);
    this->matches = matches;
    this->optimalMatches = optimalMatches;
    ui->lbAnimalMatches->setText(QString::fromStdString(std::to_string(optimalMatches->size()) + "/" + std::to_string(numOfAnimals)) + " animals have optimal matches");
    ui->lbClientMatches->setText(QString::fromStdString(std::to_string(optimalMatches->size()) + "/" + std::to_string(numOfClients)) + " clients have optimal matches");
    populateClientQList();
    this->exec();
}

/** Function: populateClientQList()
 *  Purpose: Takes client information from *matches and uses that to fill the client QListWidget
             so users can choose a client to compare
             Also handles population of optimal match QListWidget from *optimalMatches */
void ViewResults::populateClientQList()
{
    QListWidget *clientList = ui->listClientsDetailed;

    // Matches map
    std::map<int, std::vector<Match*>>::iterator it;
    for(it = matches->begin(); it != matches->end(); it++)
    {
        Client* client = it->second.front()->getClient();
        clientList->addItem(QString::fromStdString(std::to_string(client->getId()) + ": " + client->getFullName()));
    }

    // Optimal matches vector
    std::vector<Match*>::iterator itV;
    for(itV = optimalMatches->begin(); itV != optimalMatches->end(); itV++)
    {
        ui->listOptimalMatches->addItem(QString::fromStdString((*itV)->getMatchStr()));
    }
}

/** Function: populateAnimalQList()
 *  Purpose: Called when a client in the client QListWidget is clicked. Populates the animal QListWidget
             with all animals that can be matched with the client */
void ViewResults::populateAnimalQList(int idNum)
{
    QTextStream cerr(stderr);

    ui->listAnimalsDetailed->clear();


    std::map<int, std::vector<Match*>>::iterator itR;
    itR = matches->find(idNum);

    // Old way of populating animal QListWidget. Shows all matches, even one's that have been filtered out
    // Revert to this version in-case something breaks with QListWidgets
    /**
    //Sets class attributes to match vector
    // Indexes will match up with QListWidget
    matchesForClient = itR->second;


    std::vector<Match*>::iterator it;
    for(it = matchesForClient.begin(); it != matchesForClient.end(); it++)
    {
        Animal* anim = (*it)->getAnimal();
        if((*it)->getScore() > 200) {  }
        ui->listAnimalsDetailed->addItem(QString::fromStdString(std::to_string(anim->getId()) + ": " + anim->getName()));

    }
    */

    // New way of populating animal QListWidget. Doesn't show matches that have been filtered out
    std::vector<Match*>::iterator it;
    for(it = itR->second.begin(); it != itR->second.end(); it++)
    {
        Animal* anim = (*it)->getAnimal();
        if((*it)->getScore() < 0) { continue; }
        matchesForClient.push_back(*it);
        ui->listAnimalsDetailed->addItem(QString::fromStdString(std::to_string(anim->getId()) + ": " + anim->getName()));

    }
}

/** Function: on_listClientDetailed_itemClicked(QListWidgetItem *item)
 *  In: QListWidgetItem *item
 *  Purpose: Takes the item that has been clicked on in the client QListWidget
 *           gets the id from the QListWidgetItem and uses that to find the
 *           correct vector from the matches map.
 *           It then delegates the filling of the animal QListWidget to the
 *           populateAnimalQList(idNum) function */
void ViewResults::on_listClientsDetailed_itemClicked(QListWidgetItem *item)
{   
    setDetailedDefault();

    // Uses string from QListWidgetItem to get the Id
    // Faster retrieval method but if we remove the Id from the QListWidget
    // then the way we retrieve the id of the clicked user will need to change
    std::string id = item->text().toStdString();
    QTextStream cerr(stderr);
    id = id.substr(0, id.find(": "));
    int idNum = std::stoi(id);
    detailedId = idNum;
    populateAnimalQList(idNum);
}


/** Function: displayMatchInfo(Match* match)
 *  In: Match* match
 *  Purpose: Takes all dynamic ui elements and sets them appropriately for the values
 *           in the Match object passed to the function */
void ViewResults::displayMatchInfo(Match* match)
{
    Client* cl = match->getClient();
    Animal* an = match->getAnimal();

    std::string matchScore = std::to_string(match->getScore());
    matchScore = matchScore.substr(0, matchScore.find('.'));

    // Left side corresponds to client, right side corresponds to animals
    ui->lbMatchScore->setText("Match score: " + QString::fromStdString(matchScore));
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


/** Function: on_listAnimalsDetailed_itemClicked(QListWidgetItem *item)
 *  In: QListWidgetItem *item
 *  Purpose: Gets the animal id from the QListWidgetItem then searches the matchesForClient vector for a match.
 *           Once found it takes that match object and delegates display of that information to displayMatchInfo((*it))
*/
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


/** Function: setDetailedDefault()
 *  Purpose: Resets all dynamic ui elements to their defaults */
void ViewResults::setDetailedDefault()
{
    ui->lbMatchName->setText("");
    ui->lbMatchScore->setText("");

    int def = 0;

    // Resets bars and text back to default when user
    // selects a different client
    ui->barClTravel->setValue(def); ui->BarAnTravel->setValue(def);
    ui->barClChildren->setValue(def); ui->BarAnChildren->setValue(def);
    ui->barClAnimals->setValue(def); ui->barAnAnimals->setValue(def);
    ui->barClStrangers->setValue(def); ui->barAnStrangers->setValue(def);
    ui->barClCrowds->setValue(def); ui->barAnCrowds->setValue(def);
    ui->barClNoise->setValue(def); ui->barAnNoise->setValue(def);
    ui->barClProtective->setValue(def); ui->barAnProtective->setValue(def);
    ui->barClEnergetic->setValue(def); ui->barAnEnergetic->setValue(def);
    ui->barClFearful->setValue(def); ui->barAnFearful->setValue(def);
    ui->barClAffectionate->setValue(def); ui->barAnAffectionate->setValue(def);
    ui->barClMessy->setValue(def); ui->barAnMessy->setValue(def);
    ui->lbDetailedAnimalInfo->setText("Please select an animal to compare");
}

/** Function: on_buttonNext_clicked()
 *  Purpose: Changes the match details tab to show the one that isn't currently showing */
void ViewResults::on_buttonNext_clicked()
{
    if(ui->tabWidgetDetailed->currentIndex() == 0) { ui->tabWidgetDetailed->setCurrentIndex(1); }
    else { ui->tabWidgetDetailed->setCurrentIndex(0); }
}

/** Function: on_buttonBack_clicked()
 *  Purpose: Changes the match details tab to show the one that isn't currently showing */
void ViewResults::on_buttonBack_clicked()
{
    on_buttonNext_clicked();
}

/** Function: on_buttonDetailedMatchInfo_clicked()
 *  Purpose: Changes from optimal matches tab to detailed matches tab displaying information
             for the optimal match that was currently selected in the optimal matches QListWidget */
void ViewResults::on_buttonDetailedMatchInfo_clicked()
{
    if (ui->listOptimalMatches->currentRow() < 0 || static_cast<unsigned int>(ui->listOptimalMatches->currentRow()) > optimalMatches->size()) { displayTextBoxError("Error: Please select a match"); return; }

    ui->tabWidget->setCurrentIndex(1);
    displayMatchInfo(optimalMatches->at(static_cast<unsigned int>(ui->listOptimalMatches->currentRow())));
}

/** Function: on_listOptimalMatches_currentRowChanges(int currentRow)
 *  In: int currentRow
 *  Purpose: Changes optimalMatches displayed elements depending on select optimal match */
void ViewResults::on_listOptimalMatches_currentRowChanged(int currentRow)
{
    // Removes decimal points for printing int
    std::string matchScore = std::to_string(optimalMatches->at(currentRow)->getScore());
    matchScore = matchScore.substr(0, matchScore.find('.'));

    ui->lbOptimalMatchScore->setText(QString::fromStdString("Match score: " + matchScore));
}

/** Function: displayTextBoxError()
 *  In: QString err
 *  Purpose: Displays error passed as argument cl->getCrowds()*/
void ViewResults::displayTextBoxError(QString err)
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(err);
    msgBox.exec();
}
