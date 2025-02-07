#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QDialog>
#include <QMessageBox>
#include <vector>
#include <map>
#include <stdlib.h>
#include <time.h>

#include "clientstorage.h"
#include "animalstorage.h"
#include "viewanimals.h"
#include "addclient.h"
#include "addanimal.h"
#include "animal.h"
#include "client.h"
#include "viewclients.h"
#include "databasestorage.h"
#include "match.h"
#include "algorithm.h"
#include "viewresults.h"

namespace Ui {
class StaffHomepage;
}

class StaffHomepage : public QDialog
{
    Q_OBJECT

public:
    explicit StaffHomepage(QWidget *parent, AnimalStorage *animalStorage, ClientStorage *clientStorage);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);
    ~StaffHomepage();
    int showStaffPage();

private slots:

    void on_bAddAnimal_clicked();
    void on_bViewAnimals_clicked();
    void on_bLogout_clicked();
    void on_bAddClient_clicked();
    void on_bViewClients_clicked();
    void on_bRunAlgorithm_clicked();

    void on_bViewMatches_clicked();

private:
    Ui::StaffHomepage *ui;
    AnimalStorage *animalStorage;
    ClientStorage *clientStorage;
    int returnResult;
    databaseStorage *db;
    std::map<int, std::vector<Match*>> matches;
    std::vector<Match*> optimalMatches;

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;

    bool changesSinceLastRun = false;
    bool algorithmHasBeenRun = false;

    void emptyMatchMap();
    void fillMapTesting();
    void testMakeMatch(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int clientId, Match *match, std::map<int, std::vector<Match*>> *matchCounts);

    void displayTextBox(QString txt);

};

#endif // STAFFHOMEPAGE_H
