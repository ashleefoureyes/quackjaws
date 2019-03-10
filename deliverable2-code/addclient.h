#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QMessageBox>
#include <QComboBox>

#include "client.h"

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();
    int initNewClient(Client*);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);

private slots:
    void on_pbSubmit_clicked();
    void on_pbExit_clicked();
    void on_boxDog_stateChanged();
    void on_boxCat_stateChanged();
    void on_boxBird_stateChanged();
    void on_boxLizard_stateChanged();
    void on_boxRabbit_stateChanged();

private:
    Ui::AddClient *ui;
    Client **newClient;
    int returnResult;
    void displaySubmissionError();
    bool areParenthesisInInput();
    void displayTextBoxError();
    void handleSubmitButton();
    bool handleNextButton();
    void handleExitClicked();
    void populateBreedBoxes();
    void populateBreedBox(std::vector<std::string> breed, QComboBox *breedBox );

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;
};

#endif // ADDCLIENT_H
