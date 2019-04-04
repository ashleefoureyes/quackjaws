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

// Not yet implemented
void StaffHomepage::on_bRunAlgorithm_clicked()
{
    /**
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Feature coming soon!");
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(qst);
    msgBox.exec(); */

    emptyMatchMap();
    //Algorithm algo;
    //algo.runAlgorithm(&matches, &optimalMatches, animalStorage, clientStorage);
    fillMapTesting();
    changesSinceLastRun = false;
}

void StaffHomepage::on_bViewMatches_clicked()
{
    if(changesSinceLastRun) { displayTextBox("Note: Animals or Clients have been added since the last time the algorithm was run\nMatching results may be outdated"); }
    ViewResults viewResults;
    viewResults.setModal(true);
    viewResults.showMatchUi(&matches, &optimalMatches);
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
            Match *match = new Match(currentClient, animalStorage->get(a), rand() % 1000);

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
            testIncrementor = (testIncrementor + 1)%animalStorage->getSize();

            cerr << QString::fromStdString(match->getMatchStr()) << "\n";
        }
    }
}

void StaffHomepage::emptyMatchMap()
{
    QTextStream cerr(stderr);

    std::map<int, std::vector<Match*>>::iterator it;
    std::vector<Match*>::iterator itVect;
    for(it = matches.begin(); it != matches.end(); it++)        
    {
        for(itVect = it->second.begin(); itVect != it->second.end(); itVect++)
        {
            cerr << "Deleting: " << QString::fromStdString((*itVect)->getMatchStr()) << "\n";
            delete *itVect;
        }
    }

    matches.clear();
}

void StaffHomepage::displayTextBox(QString txt)
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.setText(txt);
    msgBox.exec();
}
