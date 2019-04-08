#include "staffhomepage.h"
#include "ui_staffhomepage.h"

#include <QTextStream>
#include <QProgressDialog>
#include <QThread>

StaffHomepage::StaffHomepage(QWidget *parent, AnimalStorage *animalStorage, ClientStorage *clientStorage) :
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
    int animalStorageSize = animalStorage->getSize();

    AddAnimal addAnim;
    addAnim.setModal(true);
    addAnim.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    addAnim.createNewAnimal(&animalStorage);

    // If size grew then we know a new animal was added
    if(animalStorage->getSize() > animalStorageSize) { changesSinceLastRun = true; }
}

/** Function: on_bViewAnimals_clicked()
    purpose: Opens window to view all animals */
void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    viewAnim.viewAnimalsFromStorage(animalStorage, true);

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
    int clientStorageSize = clientStorage->getNumOfElements();

    AddClient addClient;
    addClient.setModal(true);
    addClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);

    addClient.initNewClient(&clientStorage);

    // If this is true then that means we added a new client
    if(clientStorage->getNumOfElements() > clientStorageSize) { changesSinceLastRun = true; }
}

/** Function: on_bViewClients_clicked()
    purpose: Opens window to view all clients */
void StaffHomepage::on_bViewClients_clicked()
{
    ViewClients viewClient;
    viewClient.setModal(true);
    viewClient.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
    viewClient.viewClientsFromStorage(clientStorage, true);

}

/** Function: on_bRunAlgorithm_clicked()
 *  Purpose: Calls public function in Algorithm class to get the map of all matches and the vector of optimal matches
 *           based on the AnimalStorage and ClientStorage objects passed. */
void StaffHomepage::on_bRunAlgorithm_clicked()
{
    QTextStream cerr(stderr);

    /**
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Feature coming soon!");
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(qst);
    msgBox.exec(); */

    emptyMatchMap();
    Algorithm algo;
    algo.runAlgorithm(&matches, &optimalMatches, animalStorage, clientStorage);
    //fillMapTesting();
    //optimalMatches.empty();
    //std::vector<Match*> optimalMatches;
    cerr << QString::fromStdString(std::to_string(optimalMatches.size()));

    //std::map<int, std::vector<Match*>> matchesCount = matches;
    //testMakeMatch(&matches,&optimalMatches,optimalMatches.front()->getClient()->getId(), optimalMatches.front(), &matchesCount);
    changesSinceLastRun = false;
    algorithmHasBeenRun = true;
}

/** Function: on_bViewMatches_clicked()
 *  Purpose: Calls public function showMatchUi() in ViewResults object to view results of the algorithm */
void StaffHomepage::on_bViewMatches_clicked()
{
    if (!algorithmHasBeenRun) { displayTextBox("Error: Algorithm has not been run since logging in as staff\nPlease run algorithm before viewing results"); return; }
    if(changesSinceLastRun) { displayTextBox("Note: Animals or Clients have been added since the last time the algorithm was run\nMatching results may be outdated"); }
    ViewResults viewResults;
    viewResults.setModal(true);
    viewResults.showMatchUi(&matches, &optimalMatches, animalStorage->getSize(), clientStorage->getNumOfElements());
}

/** Function: passBreeds(breeds)
    in: vectors of strings for each breed
    purpose: Sets the breeds to the string vector that was passed.
             This allows us to change the breeds in one location and
             have them remain consistent between all "addAnimal" and "addClients" */
void StaffHomepage::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}

/** Function: emptyMatchMap()
 *  Purpose: Empties the match map and optimalMatches vector so it can be refilled by the algorithm
 *           Deallocates memory for each Match object.
 *           NOTE: Do NOT deallocate memory for animal and client pointers inside Match objects */
void StaffHomepage::emptyMatchMap()
{

    std::map<int, std::vector<Match*>>::iterator it;
    std::vector<Match*>::iterator itVect;
    for(it = matches.begin(); it != matches.end(); it++)        
    {
        for(itVect = it->second.begin(); itVect != it->second.end(); itVect++)
        {
            delete *itVect;
        }
    }

    matches.clear();
    optimalMatches.clear();
}

void StaffHomepage::displayTextBox(QString txt)
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(txt);
    msgBox.exec();
}

/** #############################
    #TESTING/DEBUGGING FUNCTIONS#
    ############################# */

/** Function: testMakeMatch
 *  Purpose: Used to test the makeMatch function in Algorithm.cpp at a time when Algorithm.cpp
             was not complete

### To call for testing have the following lines of code precede this function call ###
             fillMapTesting();
             std::map<int, std::vector<Match*>> matchesCount = matches;
             testMakeMatch(&matches,&optimalMatches,optimalMatches.front()->getClient()->getId(), optimalMatches.front(), &matchesCount);
*/
void StaffHomepage::testMakeMatch(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches, int clientId, Match *match,
        std::map<int, std::vector<Match*>> *matchCounts) {

        QTextStream cerr(stderr);

        // Add match to optimal matches
        optimalMatches->push_back(match);
        cerr << QString::fromStdString("Optimal match: " + match->getClient()->getFullName() + " and " + match->getAnimal()->getName() + "\n");

        cerr << "Matches size before: " << QString::fromStdString(std::to_string(matches->size()) + "\n");
        // Remove client from matches map
        matches->erase(clientId);
        matchCounts->erase(clientId);
        cerr << "Matches size after: " << QString::fromStdString(std::to_string(matches->size()) + "\n");

        // Loop through remaining clients in matches map and remove the
        // match from their vector where the animal in `match` is the same
        // as the animal in the match that client's vector
        std::map<int, std::vector<Match*>>::iterator it;
        std::vector<Match*>::iterator itVect;
        for(it = matches->begin(); it != matches->end(); it++)
        {
            int vectorIndex = 0;
            Client* cl = (it->second).front()->getClient();
            std::vector<Match*> *matchVect = &(it->second);
            for(itVect = it->second.begin(); itVect != it->second.end(); itVect++)
            {

                if((*itVect)->getAnimal()->getId() == match->getAnimal()->getId())
                {
                    cerr << "Removing: " << QString::fromStdString((*itVect)->getAnimal()->getName() + " from " + (*itVect)->getClient()->getFullName() + "'s vector\n");
                    cerr << "Vector 1 size before: " << QString::fromStdString(std::to_string(matchVect->size()) + "\n");
                    cerr << "Vector 2 size before: " << QString::fromStdString(std::to_string(matchCounts->at(cl->getId()).size()) + "\n");
                    matchVect->erase(matchVect->begin() + vectorIndex);
                    matchCounts->at(cl->getId()).erase(matchCounts->at(cl->getId()).begin() + vectorIndex);
                    cerr << "Vector 1 size after: " << QString::fromStdString(std::to_string(matchVect->size()) + "\n");
                    cerr << "Vector 2 size after: " << QString::fromStdString(std::to_string(matchCounts->at(cl->getId()).size()) + "\n");
                    break;
                }
                ++vectorIndex;
            }
        }
}

/** Function: fillMapTesting()
 *  Purpose: Fills the match map and optimalMatch vector with random data.
             Used to create and test the ViewResults Ui before the algorithm was
             fully implemented */
void StaffHomepage::fillMapTesting()
{
    // Used for testing purpose to generate random match score
    srand(time(NULL));
    QTextStream cerr(stderr);

    // Might work but it's done too fast
    //QProgressDialog progress("Adding to map", "Cancel", 0, (animalStorage->getSize(), clientStorage->getNumOfElements()), this);
    //progress.setWindowModality(Qt::WindowModal);
    //progress.show();

    int testIncrementor = 0;
    Client* currentClient;

    // c for client, a for animal
    for(int c = 0; c < clientStorage->getNumOfElements(); c++)
    {
        for(int a = 0; a < animalStorage->getSize(); ++a)
        {
            //progress.setValue(c*animalStorage->getSize() + a);
            currentClient = clientStorage->get(c);
            Match *match = new Match(currentClient, animalStorage->get(a), rand() % 15);

            // If the key is not in the dictionary, then make the value a new vector that holds Match pointers
            // and add the first match to the vector
            if(matches.count(currentClient->getId()) == 0)
            {
                matches.insert(std::pair<int, std::vector<Match*>>(currentClient->getId(), std::vector<Match*>()));
                matches.at(currentClient->getId()).push_back(match);
            }
            // If the key already exists then just add the match to the back of the vector
            else { matches.at(currentClient->getId()).push_back(match); }

            if(testIncrementor == a) { optimalMatches.push_back(match); }
        }

        testIncrementor = (testIncrementor + 1)%animalStorage->getSize();
    }
}
