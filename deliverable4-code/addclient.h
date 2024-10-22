#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QMessageBox>
#include <QComboBox>
#include <QListWidget>
#include <QComboBox>
#include <QRadioButton>

#include "client.h"
#include "clientstorage.h"
#include "databasestorage.h"

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();
    int initNewClient(ClientStorage** clientStorage);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);
    bool editClient(Client* clientToEdit, ClientStorage **storage);

private slots:
    void on_pbSubmit_clicked();
    void on_pbExit_clicked();
    void on_boxDog_stateChanged();
    void on_boxCat_stateChanged();
    void on_boxBird_stateChanged();
    void on_boxLizard_stateChanged();
    void on_boxRabbit_stateChanged();
    void on_bDogBreedAdd_clicked();
    void on_bCatBreedAdd_clicked();
    void on_bBirdBreedAdd_clicked();
    void on_bLizardBreedAdd_clicked();
    void on_bRabbitBreedAdd_clicked();
    void on_bDogBreedRemove_clicked();
    void on_bCatBreedRemove_clicked();
    void on_bBirdBreedRemove_clicked();
    void on_bLizardBreedRemove_clicked();
    void on_bRabbitBreedRemove_clicked();

private:
    Ui::AddClient *ui;
    Client **newClient;
    Client *clientToEdit;
    ClientStorage **clientStorage;
    int returnResult;
    bool isEditingClient;
    void setBreedAttributes(QComboBox *ageBox, QComboBox *sizeBox, QComboBox *sexBox, QComboBox *furBox, QRadioButton *allergiesYes, QRadioButton *allergiesNo,
                                       int age, int size, int sex, int fur, bool allergies,
                                       std::string colour, QComboBox *colourBox);

    databaseStorage* db;

    void handleBreedlist(std::vector<std::string> breeds, QListWidget *list, QComboBox *breedBox);

    bool areParenthesisInInput();
    void handleSubmitButton();
    bool handleNextButton();
    void handleExitClicked();
    void populateBreedBoxes();
    void populateBreedBox(std::vector<std::string> breed, QComboBox *breedBox );
    void addBreedToList(QString breed, QListWidget *breedList, QComboBox *breedBox);
    void removeBreedFromList(QString breed, QListWidget *breedList, QComboBox *breedBox, int index);
    void setClientAttributes(Client *clientToSet);
    bool createClient();
    std::vector<std::string> createBreedVector(QListWidget* widget);
    void setupButtons();
    void fillInfoForEdit(Client* client);
    bool doesEmailAlreadyExist(std::string email);

    void displayTextBoxError();
    void displayTextBoxError(QString err);
    void displaySubmissionError();
    bool isContactInfoFilledOut();
    bool areAnimalPreferencesFilledOut();

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;
};

#endif // ADDCLIENT_H
