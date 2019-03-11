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
    ui->tabClientInfo->setCurrentIndex(0);
    ui->tabWidgetBreeds->setCurrentIndex(0);
    setupButtons();
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
int AddClient::initNewClient(ClientStorage** clientStorage)
{
    //this->newClient = &newClient;
    this->clientStorage = clientStorage;
    populateBreedBoxes();
    this->exec();
    return returnResult;
}

/** Function: setupButtons()
    in-out: radio button indexes
    purpose: Assigns radio buttons in group an index.
             This is used to more easily assign values
             to the new Client object created*/
void AddClient::setupButtons()
{
    QButtonGroup* buttonGroups[12] = {
        ui->groupTravel, ui->groupChildren, ui->groupAnimals,
        ui->groupStrangers, ui->groupCrowds, ui->groupLoudNoise,
        ui->groupProtector, ui->groupEnergy, ui->groupFearful,
        ui->groupAffection, ui->groupMessy, ui->groupActivityLevel
    };

    int index;
    int numOfButtons = sizeof(buttonGroups)/sizeof(buttonGroups[0]);

    for(int i = 0; i < numOfButtons; ++i)
    {
        index = 0;

        foreach(QAbstractButton *button, buttonGroups[i]->buttons())
        {
            buttonGroups[i]->setId(button, index);
            ++index;
        }
    }
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

//
// TODO: Implement it so that the user cannot proceed further than the first screen
//       If they have not filled in all the information
// TODO: Make sure all users have a unique email address
//
void AddClient::handleSubmitButton()
{
    if(areParenthesisInInput()) { displayTextBoxError(); return;}

    createClient();

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
    QString qst = QString::fromStdString("Please fill out all client contact information before proceeding");
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
    if(ui->boxDog->isChecked()) {ui->widgetDogInfo->setEnabled(true); ui->widgetDog->setEnabled(true); }
    else { ui->widgetDogInfo->setEnabled(false); ui->widgetDog->setEnabled(false); }
}

void AddClient::on_boxCat_stateChanged()
{
    if(ui->boxCat->isChecked()) {ui->widgetCatInfo->setEnabled(true); ui->widgetCat->setEnabled(true); }
    else { ui->widgetCatInfo->setEnabled(false); ui->widgetCat->setEnabled(false); }
}

void AddClient::on_boxBird_stateChanged()
{
    if(ui->boxBird->isChecked()) {ui->widgetBirdInfo->setEnabled(true); ui->widgetBird->setEnabled(true); }
    else { ui->widgetBirdInfo->setEnabled(false); ui->widgetBird->setEnabled(false); }
}

void AddClient::on_boxLizard_stateChanged()
{
    if(ui->boxLizard->isChecked()) {ui->widgetLizardInfo->setEnabled(true); ui->widgetLizard->setEnabled(true); }
    else { ui->widgetLizardInfo->setEnabled(false); ui->widgetLizard->setEnabled(false); }
}

void AddClient::on_boxRabbit_stateChanged()
{
    if(ui->boxRabbit->isChecked()) {ui->widgetRabbitInfo->setEnabled(true); ui->widgetRabbit->setEnabled(true); }
    else { ui->widgetRabbitInfo->setEnabled(false); ui->widgetRabbit->setEnabled(false); }
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

std::vector<std::string> AddClient::createBreedVector(QListWidget* widget)
{
    std::vector<std::string> desiredBreeds;

    // Take item removes the item from the list hence always using 0
    // and saving the count in a variable
    while(widget->count() != 0)
    {
        desiredBreeds.push_back(widget->takeItem(0)->text().toStdString());
    }

    return desiredBreeds;

}

void AddClient::createClient()
{
    Client * newClient = new Client;
    setClientAttributes(newClient);
    (*clientStorage)->add(newClient);

}

void AddClient::setClientAttributes(Client* clientToSet)
{
    std::string firstName = (ui->txtFirstName->text()).toStdString();
    std::string lastName = (ui->txtLastName->text()).toStdString();
    std::string city = (ui->txtCity->text()).toStdString();
    std::string province = (ui->cbProvince->currentText()).toStdString();
    std::string address = (ui->txtAddress->text()).toStdString();
    std::string phone = std::to_string(ui->sbAreaCode->value()) + std::to_string(ui->sbPhone->value());
    std::string email = (ui->txtEmail->text()).toStdString();

    // Client attributes
    int dwelling = ui->cbDwellingType->currentIndex();
    int location = ui->cbLocation->currentIndex();
    int workSchedule = ui->cbWorkSchedule->currentIndex();
    int activity = ui->groupActivityLevel->checkedId(); // TODO: Have it set correct button index at start
    bool hasChildren = ui->rbYoungChildrenYes->isChecked();
    bool hasAnimals = ui->rbOtherAnimalsYes->isChecked();

    // General Animal Preferences
    int travels = ui->groupTravel->checkedId();
    int children = ui->groupTravel->checkedId();
    int goodWAnimals = ui->groupAnimals->checkedId();
    int strangers = ui->groupStrangers->checkedId();
    int crowds = ui->groupCrowds->checkedId();
    int noises = ui->groupLoudNoise->checkedId();
    int protector = ui->groupProtector->checkedId();
    int energy = ui->groupEnergy->checkedId();
    int fearful = ui->groupFearful->checkedId();
    int affection = ui->groupAffection->checkedId();
    int messy = ui->groupMessy->checkedId();

    // The physical comboboxes have a -1. This is so "No preference" is -1
    // and the lowest preference value becomes 0

    // Dog-specific
    bool wantsDog = ui->boxDog->isChecked();
    bool hasDogAllergies = ui->rbDogAllergiesYes->isChecked();
    std::vector<std::string> dogBreeds = createBreedVector(ui->listDog);
    int dogAge = ui->cbAgeDog->currentIndex() - 1;
    int dogSize = ui->cbSizeDog->currentIndex() - 1;
    int dogGender = ui->cbDogSex->currentIndex() - 1;
    int dogFur = ui->cbFurPrefDog->currentIndex() - 1;
    int quietness = ui->cbQuietDog->currentIndex();
    int followsCommandsDog = ui->cdCommandsDog->currentIndex();
    int houseTrained = ui->cbHouseTrainedDog->currentIndex();

    // Cat-specific
    bool wantsCat = ui->boxCat->isChecked();
    bool hasCatAllergies = ui->rbCatAllergiesYes->isChecked();
    std::vector<std::string> catBreeds = createBreedVector(ui->listCat);
    int catAge = ui->cbAgeCat->currentIndex() - 1;
    int catGender = ui->cbCatSex->currentIndex() - 1;
    int catSize = ui->cbSizeCat->currentIndex() - 1;
    int catFur = ui->cbFurPrefCat->currentIndex()-1;
    int isCurious = ui->cbCuriousCat->currentIndex();
    int followCommandsCat = ui->cbCommandsCat->currentIndex();
    int doesntShed = ui->cbShedCat->currentIndex();

    // Bird-specific
    bool wantsBird = ui->boxBird->isChecked();
    bool hasBirdAllergies = ui->rbBirdAllergiesYes->isChecked();
    std::vector<std::string> birdBreeds = createBreedVector(ui->listBird);
    int birdAge = ui->cbAgeBird->currentIndex() - 1;
    int birdGender = ui->cbBirdSex->currentIndex() - 1;
    int birdSize = ui->cbSizeBird->currentIndex() - 1;
    int birdFur = ui->cbFurPrefBird->currentIndex()-1;
    std::string birdColour = ui->cbColourBird->currentText().toStdString();
    int isQuietBird = ui->cbQuietBird->currentIndex();
    int isSocialBird = ui->cbSocialBird->currentIndex();

    // Lizard-specific
    bool wantsLizard = ui->boxLizard;
    bool hasLizardAllergies = ui->rbLizardAllergiesYes->isChecked();
    std::vector<std::string> lizardBreeds = createBreedVector(ui->listLizard);
    int lizardAge = ui->cbAgeLizard->currentIndex()-1;
    int lizardGender = ui->cbLizardSex->currentIndex()-1;
    int lizardSize = ui->cbSizeLizard->currentIndex()-1;
    int lizardFur = ui->cbFurPrefLizard->currentIndex()-1;
    std::string lizardColour = ui->cbColorLizard->currentText().toStdString();
    int easyToFeed = ui->cbLizardFeed->currentIndex();
    int simpleLiving = ui->cbLivingSpaceLizard->currentIndex();

    // Rabbit-specific
    bool wantsRabbit = ui->boxRabbit->isChecked();
    bool hasRabbitAllergies = ui->rbRabbitAllergiesYes->isChecked();
    std::vector<std::string> rabbitBreeds = createBreedVector(ui->listRabbit);
    int rabbitAge = ui->cbAgeRabbit->currentIndex()-1;
    int rabbitGender = ui->cbRabbitSex->currentIndex()-1;
    int rabbitSize = ui->cbSizeRabbit->currentIndex()-1;
    int rabbitFur = ui->cbFurPrefRabbit->currentIndex()-1;
    std::string rabbitColour = ui->cbColourRabbit->currentText().toStdString();
    int isSocialRabbit = ui->cbSocialRabbit->currentIndex();
    int needsGrooming = ui->cbNeedsGroomingRabbit->currentIndex();

    clientToSet->setClientAttributes(firstName, lastName, address, phone, email, city, province, dwelling, location, workSchedule, activity, hasChildren, hasAnimals,
                                     travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, wantsDog, hasDogAllergies,
                                     dogBreeds, dogAge, dogSize, dogGender, followsCommandsDog, houseTrained, wantsCat, hasCatAllergies, catBreeds, catAge, catSize,
                                     catGender, isCurious, followCommandsCat, doesntShed, wantsBird, hasBirdAllergies, birdBreeds, birdAge, birdSize, birdGender, isQuietBird,
                                     isSocialBird, birdColour, wantsLizard, hasLizardAllergies, lizardBreeds, lizardAge, lizardSize, lizardGender, easyToFeed, simpleLiving,
                                     lizardColour, wantsRabbit, hasRabbitAllergies, rabbitBreeds, rabbitAge, rabbitSize, rabbitGender, isSocialRabbit, needsGrooming, rabbitColour,
                                     dogFur, catFur, birdFur, lizardFur, rabbitFur, quietness);
}
