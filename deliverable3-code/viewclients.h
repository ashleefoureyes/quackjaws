#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMessageBox>

#include "clientstorage.h"
#include "addclient.h"

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = nullptr);
    ~ViewClients();
    void viewClientsFromStorage(ClientStorage *storage, bool isStaff);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);

private slots:
    void on_clientList_itemClicked();
    void on_rbSpeciesDog_clicked();
    void on_rbSpeciesCat_clicked();
    void on_rbSpeciesBird_clicked();
    void on_rbSpeciesLizard_clicked();
    void on_rbSpeciesRabbit_clicked();

    void on_buttonEdit_clicked();

private:
    Ui::ViewClients *ui;
    void populateList();
    ClientStorage* storage;
    void displayClient(int index);

    int currentIndex;
    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;
    void disableUnusedSpeciesButtons();
    void findFirstValidSpecies();
    void fillBars();
    void reloadView();
    void displayTextBoxError(QString err);
};

#endif // VIEWCLIENTS_H
