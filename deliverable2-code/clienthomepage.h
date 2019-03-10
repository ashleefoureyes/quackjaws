#ifndef CLIENTHOMEPAGE_H
#define CLIENTHOMEPAGE_H

#include <QDialog>
#include <vector>

#include "clientstorage.h"
#include "viewanimals.h"
#include "animalstorage.h"
#include "client.h"

namespace Ui {
class ClientHomepage;
}

class ClientHomepage : public QDialog
{
    Q_OBJECT

public:
    explicit ClientHomepage(QWidget *parent, AnimalStorage *animalStorage, ClientStorage *clientStorage, Client* client);
    ~ClientHomepage();
    int showClientPage();
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);

private slots:
    void on_lbLogout_clicked();
    void on_lbViewAnimals_clicked();

private:
    Ui::ClientHomepage *ui;
    AnimalStorage *animalStorage;
    ClientStorage *clientStorage;
    int returnResult;
    Client *client;

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;
};

#endif // CLIENTHOMEPAGE_H
