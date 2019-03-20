#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QDialog>
#include <QMessageBox>
#include <vector>

#include "clientstorage.h"
#include "animalstorage.h"
#include "viewanimals.h"
#include "addclient.h"
#include "addanimal.h"
#include "animal.h"
#include "client.h"
#include "viewclients.h"
#include "databasestorage.h"

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

private:
    Ui::StaffHomepage *ui;
    AnimalStorage *animalStorage;
    ClientStorage *clientStorage;
    int returnResult;
    databaseStorage *db;

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;

};

#endif // STAFFHOMEPAGE_H
