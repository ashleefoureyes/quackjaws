#include "addclient.h"
#include "ui_addclient.h"

AddClient::AddClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClient)
{
    ui->setupUi(this);
    ui->sbPhone->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->sbAreaCode->setButtonSymbols(QAbstractSpinBox::NoButtons);
    QTabBar *tabBar = ui->tabClientInfo->findChild<QTabBar *>();
    tabBar->hide();

}

AddClient::~AddClient()
{
    delete ui;
}

/** Function: initNewClient(Client*)
 *  in-out: Client* newClient
 *  purpose: Called to create set all the parameters for the new Client.
 *           Returns 1 if the Client is set or 0 if the user clicked Exit.
 *           The latter causes the instantiated Client to be delete. */
int AddClient::initNewClient(Client* newClient)
{
    this->newClient = &newClient;
    populateBreedBoxes();
    this->exec();
    return returnResult;
}

void AddClient::populateBreedBoxes()
{
    populateBreedBox(dogBreeds, ui->cbDogBreeds);
    populateBreedBox(catBreeds, ui->cbCatBreeds);
    populateBreedBox(birdBreeds, ui->cbBirdBreeds);
    populateBreedBox(lizardBreeds, ui->cbLizardBreeds);
    populateBreedBox(rabbitBreeds, ui->cbRabbitBreeds);
}

void AddClient::populateBreedBox(std::vector<std::string> breed, QComboBox *breedBox )
{
    for(int i = 0; i < static_cast<int>(breed.size()); ++i)
    {
        QString element = QString::fromStdString(breed[static_cast<unsigned int>(i)]);
        breedBox->addItem(element);
    }
}

/** Function: on_bSubmit_clicked()
    in: All client attributes
    in-out: Client *newClient
    purpose: Takes all information from form and creates
             a new Animal object with this information.
             This is the same Client reference that was passed
             in at AddClient::initNewClient */
void AddClient::on_pbSubmit_clicked()
{

    if(handleNextButton()) { handleSubmitButton(); }
}

bool AddClient::handleNextButton()
{
    ui->pbExit->setText("Back");
    // If still on Physical info tab move to Non-Physical tab
    if (ui->tabClientInfo->currentIndex() != 4)
    {
        // Moves to next tab
        ui->tabClientInfo->setCurrentWidget(ui->tabClientInfo->widget(ui->tabClientInfo->currentIndex() + 1));
        ui->barCompleted->setValue(ui->tabClientInfo->currentIndex());

        // If we're at the last tab then change "Next" to "Submit"
        if(ui->tabClientInfo->currentIndex() == 4) { ui->pbSubmit->setText("Submit"); }
        else { ui->pbSubmit->setText("Next"); }

        return false;
    }
    else { return true; }
}

void AddClient::handleSubmitButton()
{
    if(areParenthesisInInput()) { displayTextBoxError(); return;}

    std::string firstName, lastName, address,
        phone, email, city, province;

    firstName = (ui->txtFirstName->text()).toStdString();
    lastName = (ui->txtLastName->text()).toStdString();
    city = (ui->txtCity->text()).toStdString();
    province = (ui->cbProvince->currentText()).toStdString();
    address = (ui->txtAddress->text()).toStdString();
    phone = std::to_string(ui->sbAreaCode->value()) + std::to_string(ui->sbPhone->value());
    email = (ui->txtEmail->text()).toStdString();

    (*newClient)->setContactInformation(firstName,lastName,address,phone, email, city, province);

    if(firstName == "" || lastName == "" || city == "" || address == "" || phone == "" || email == "")
    {
        displaySubmissionError();
        return;
    }

    returnResult = QDialog::Accepted;
    this->close();
}

/** Function: on_bExit_clicked()
 *  out: QDialog::Rejected (which is 0)
 *  Purpose: Closes the addClient window if user clicks exit
 *           Return value is so StaffHomepage knows to delete
 *           the Client object passed to the function */
void AddClient::on_pbExit_clicked()
{
    handleExitClicked();
}

void AddClient::handleExitClicked()
{
    if(ui->tabClientInfo->currentIndex() != 0)
    {
        // Moves to next tab
        ui->tabClientInfo->setCurrentWidget(ui->tabClientInfo->widget(ui->tabClientInfo->currentIndex() - 1));
        ui->barCompleted->setValue(ui->tabClientInfo->currentIndex());


        ui->pbSubmit->setText("Next");
        // If we're at the last tab then change "Next" to "Submit"
        if(ui->tabClientInfo->currentIndex() == 0) { ui->pbExit->setText("Exit"); }
        else { ui->pbExit->setText("Back"); }

        return;
    }

    else {
      QMessageBox::StandardButton answer;
      answer = QMessageBox::question(this, "Quit?", "Are you sure you want to quit\n"
                                                    "All client information will be lost",
                                                     QMessageBox::Yes|QMessageBox::No);
      if(answer == QMessageBox::Yes) {
          this->close();
      }
      else { return; }
    }
}

bool AddClient::areParenthesisInInput()
{
    // Combines all strings then checks the combined string for ')' and '('
    QString comboStr = "";
    comboStr += ui->txtFirstName->text();
    comboStr += ui->txtLastName->text();
    comboStr += ui->txtCity->text();
    comboStr += ui->txtEmail->text();
    comboStr += ui->txtAddress->text();

    return (comboStr.contains(QChar(')')) || comboStr.contains(QChar('(')));
}

void AddClient::displayTextBoxError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Error, one textbox contains character ')' and/or '(' symbols");
    msgBox.setText(qst);
    msgBox.exec();
}

/** Function: displaySubmissionError()
 *  purpose: Displays error message if client
 *           information is missing */
void AddClient::displaySubmissionError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Please fill out all client contact information");
    msgBox.setText(qst);
    msgBox.exec();
}

void AddClient::passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds)
{
    this->dogBreeds = dogBreeds;
    this->catBreeds = catBreeds;
    this->birdBreeds = birdBreeds;
    this->lizardBreeds = lizardBreeds;
    this->rabbitBreeds = rabbitBreeds;
}

void AddClient::on_boxDog_stateChanged()
{
    if(ui->boxDog->isChecked()) {ui->widgetDogInfo->setEnabled(true); }
    else { ui->widgetDogInfo->setEnabled(false); }
}

void AddClient::on_boxCat_stateChanged()
{
    if(ui->boxCat->isChecked()) {ui->widgetCatInfo->setEnabled(true); }
    else { ui->widgetCatInfo->setEnabled(false); }
}

void AddClient::on_boxBird_stateChanged()
{
    if(ui->boxBird->isChecked()) {ui->widgetBirdInfo->setEnabled(true); }
    else { ui->widgetBirdInfo->setEnabled(false); }
}

void AddClient::on_boxLizard_stateChanged()
{
    if(ui->boxLizard->isChecked()) {ui->widgetLizardInfo->setEnabled(true); }
    else { ui->widgetLizardInfo->setEnabled(false); }
}

void AddClient::on_boxRabbit_stateChanged()
{
    if(ui->boxRabbit->isChecked()) {ui->widgetRabbitInfo->setEnabled(true); }
    else { ui->widgetRabbitInfo->setEnabled(false); }
}

void AddClient::on_bDogBreedAdd_clicked() { addBreedToList(ui->cbDogBreeds->currentText(), ui->listDog, ui->cbDogBreeds); }
void AddClient::on_bCatBreedAdd_clicked() { addBreedToList(ui->cbCatBreeds->currentText(), ui->listCat, ui->cbCatBreeds); }
void AddClient::on_bBirdBreedAdd_clicked() { addBreedToList(ui->cbBirdBreeds->currentText(), ui->listBird, ui->cbBirdBreeds); }
void AddClient::on_bLizardBreedAdd_clicked() { addBreedToList(ui->cbLizardBreeds->currentText(), ui->listLizard, ui->cbLizardBreeds); }
void AddClient::on_bRabbitBreedAdd_clicked() { addBreedToList(ui->cbRabbitBreeds->currentText(), ui->listRabbit, ui->cbRabbitBreeds); }

void AddClient::addBreedToList(QString breed, QListWidget *breedList, QComboBox *breedBox)
{
    if(breedBox->count() == 0) { return; }
    breedBox->removeItem(breedBox->findText(breed));
    breedList->addItem(breed);
}

void AddClient::on_bDogBreedRemove_clicked() { if(ui->listDog->selectedItems().size() != 0) { removeBreedFromList(ui->listDog->currentItem()->text(), ui->listDog, ui->cbDogBreeds, ui->listDog->currentRow());} }
void AddClient::on_bCatBreedRemove_clicked() { if(ui->listCat->selectedItems().size() != 0) { removeBreedFromList(ui->listCat->currentItem()->text(), ui->listCat, ui->cbCatBreeds, ui->listCat->currentRow()); }}
void AddClient::on_bBirdBreedRemove_clicked() { if(ui->listBird->selectedItems().size() != 0) { removeBreedFromList(ui->listBird->currentItem()->text(), ui->listBird, ui->cbBirdBreeds, ui->listBird->currentRow()); }}
void AddClient::on_bLizardBreedRemove_clicked() { if(ui->listLizard->selectedItems().size() != 0) { removeBreedFromList(ui->listLizard->currentItem()->text(), ui->listLizard, ui->cbLizardBreeds, ui->listLizard->currentRow()); }}
void AddClient::on_bRabbitBreedRemove_clicked() { if(ui->listRabbit->selectedItems().size() != 0) { removeBreedFromList(ui->listRabbit->currentItem()->text(), ui->listRabbit, ui->cbRabbitBreeds, ui->listRabbit->currentRow()); }}

void AddClient::removeBreedFromList(QString breed, QListWidget *breedList, QComboBox *breedBox, int index)
{
    if(breedList->count() == 0) { return; }
    breedBox->addItem(breed);
    breedList->takeItem(index);
}

