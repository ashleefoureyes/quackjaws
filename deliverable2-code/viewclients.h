#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>
#include "clientstorage.h"
#include <QListWidgetItem>

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = nullptr);
    ~ViewClients();
    void viewClientsFromStorage(ClientStorage *storage);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);

private slots:
    void on_clientList_itemClicked();

private:
    Ui::ViewClients *ui;
    void populateList();
    ClientStorage* storage;
    void displayClient(int index);

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;
};

#endif // VIEWCLIENTS_H
