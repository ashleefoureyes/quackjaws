#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    setupButtons();
    changeBreedBox(0);
    ui->tabWidget->setCurrentIndex(0);
    changeSpeciesTab(0);
}

AddAnimal::~AddAnimal()
{
    delete ui;
}

//TODO Implement it so that the popup box is already filled out with current animal information
//     then this->exec() is called and returns the return value
/**
int AddAnimal::editAnimal(Animal *animalToEdit)
{
    return 1;
} */

int AddAnimal::createNewAnimal(AnimalStorage** storage)
{
    this->storage = storage;
    this->exec();
    return returnVal;
}

/** Function: setupButtons()
    in-out: radio button indexes
    purpose: Assigns radio buttons in group an index.
             This is used to more easily assign values
             to the new Animal object created*/
void AddAnimal::setupButtons()
{
    QButtonGroup* buttonGroups[20] = {
        ui->groupTravel, ui->groupChildren, ui->groupGoodAnimals,
        ui->groupStrange, ui->groupCrowds, ui->groupNoise,
        ui->groupProtect, ui->groupEnergy, ui->groupFear,
        ui->groupAffection, ui->groupMessy, ui->groupBarks, ui->groupDogTrained,
        ui->groupCurious, ui->groupSheds, ui->groupTrainedCat, ui->groupIsLoudBird,
        ui->groupAttentionBird, ui->groupAttentionRabbit, ui->groupGrooming
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

/** Function: on_bUpload_clicked()
 *  purpose: Prompts user to upload an image to be attributed to the animal */
void AddAnimal::on_bUpload_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Animal Image"), "", tr("Images(*.png *.jpg *.jpeg)"));

    // If no image, return
    if(QString::compare(filename, QString()) == 0) { return; }

    QImage image;

    // Checks to make sure image is not corrupted
    bool validImage = image.load(filename);
    if(validImage == false) { ui->lbAnimalPhoto->setText(QString::fromStdString("<<Upload failed>>"));return; }

    image = image.scaledToWidth(ui->lbAnimalPhoto->width(), Qt::SmoothTransformation);
    ui->lbAnimalPhoto->setPixmap(QPixmap::fromImage(image));

    this->animalPhoto = image;
    this->customImage = validImage;

}

/** Function: savePhoto(std::string filename)
    in: string filename
    purpose: saves the animal in persistent storage to be
             loaded at a later date */
std::string AddAnimal::savePhoto(std::string filename)
{
    // If directory with DIR_NAME doesn't exist then create it
    if (!QDir(DIR_NAME).exists()) { QDir().mkdir(DIR_NAME); }

    filename = getUniqueFilename(filename);

    filename += ".jpg";

    QString qFilename = QString::fromStdString(filename);
    animalPhoto.save(qFilename);

    return filename;

}

/** Function: getOriginalFilename(std::string filename)
 *  in: std::string filename
 *  out: std::string unique filename
 *  purpose: Checks photo directory for file with same filename
 *           If there isn't a match then the filename is unique
 *           If there is a match it appends an integer and checks again
 *           then keeps incrementing that integer until the filename is unique */
std::string AddAnimal::getUniqueFilename(std::string filename)
{
    int number = 0;
    std::string originalFilename = filename;

    while(QFileInfo::exists(QString::fromStdString(IMAGE_FILEPATH + filename + ".jpg")))
    {
        filename = originalFilename + std::to_string(number);
        ++number;

    }

    return IMAGE_FILEPATH + filename;

}

/** Function: on_bSubmit_clicked()
    in: All animal attributes
    in-out: Animal *newAnimal
    purpose: Takes all information from form and creates
             a new Animal object with this information.
             This is the same Animal reference that was passed
             in at AddAnimal::initNewAnimal */
// TODO: Support saving animal image
void AddAnimal::on_bSubmit_clicked()
{
    // If still on Physical info tab move to Non-Physical tab
    if (ui->tabWidget->currentIndex() != 2)
    {
        // Moves to next tab
        ui->tabWidget->setCurrentWidget(ui->tabWidget->widget(ui->tabWidget->currentIndex() + 1));

        // If we're at the last tab then change "Next" to "Submit"
        if(ui->tabWidget->currentIndex() == 2) { ui->bSubmit->setText("Submit"); }
        else { ui->bSubmit->setText("Next"); }

        return;
    }

    if(ui->txtNameBox->text().contains(QChar('(')) || ui->txtNameBox->text().contains(QChar(')')))
    {
        displayAnimalNameError(ui->txtNameBox->text());
        return;
    }

    switch(ui->cbSpecies->currentIndex())
    {
        case 0: createDog(); break;
        case 1: createCat(); break;
        case 2: createBird(); break;
        case 3: createLizard(); break;
        case 4: createRabbit(); break;
    }
}

/** Function: on_bExit_clicked()
 *  out: QDialog::Rejected (which is 0)
 *  Purpose: Closes the addAnimal window if user clicks exit
 *           Return value is so StaffHomepage knows to delete
 *           the Animal object passed to the function */
void AddAnimal::on_bExit_clicked()
{
    returnVal = QDialog::Rejected;
    this->close();
}

/** Function: changeBreedBox(int index)
 *  in: species index
 *  purpose: Changes the breed box depending on the selected species*/
void AddAnimal::changeBreedBox(int index)
{
    ui->cbBreed->clear();

    std::vector<std::string> breeds;

    switch(index)
    {
        case 0: breeds = dogBreeds; break;
        case 1: breeds = catBreeds; break;
        case 2: breeds = birdBreeds; break;
        case 3: breeds = lizardBreeds; break;
        case 4: breeds = rabbitBreeds; break;
    }

    std::sort(breeds.begin(), breeds.end());

    // Adding other at the end ensures it's always at the end after sorting
    breeds.push_back("Other");

    // Adds all items from vector to breeds box
    for(int i = 0; i < static_cast<int>(breeds.size()); ++i)
    {
        QString element = QString::fromStdString(breeds[static_cast<unsigned int>(i)]);
        ui->cbBreed->addItem(element);
    }
}

/** Function: changeFurBox(int index)
 *  in: species index
 *  purpose: Changes fur options depending on species */
void AddAnimal::changeFurBox(int index)
{
    ui->cbFur->clear();

    // 2 = bird, 3 = lizard
    if(index == 2) { ui->cbFur->addItem(QString("Feathers")); return; }
    else if (index == 3) { ui->cbFur->addItem(QString("Scales")); return; }

    ui->cbFur->addItem(QString("Hairless"));
    ui->cbFur->addItem(QString("Short"));
    ui->cbFur->addItem(QString("Long"));
}

/** Function: changeSpeciesTab(int index)
 *  in: species index
 *  purpose: Changes the tab for species attributes
 *           depending on species selected */
void AddAnimal::changeSpeciesTab(int index)
{
    ui->tabWidget->removeTab(6);
    ui->tabWidget->removeTab(5);
    ui->tabWidget->removeTab(4);
    ui->tabWidget->removeTab(3);
    ui->tabWidget->removeTab(2);

    if(index == 0) {ui->tabWidget->addTab(ui->tabDog, "Dog");}
    else if (index == 1) { ui->tabWidget->addTab(ui->tabCat, "Cat");}
    else if (index == 2) { ui -> tabWidget->addTab(ui->tabBird, "Bird");}
    else if (index == 3) { ui -> tabWidget->addTab(ui->tabLizard, "Lizard");}
    else if (index == 4) { ui -> tabWidget->addTab(ui->tabRabbit, "Rabbit");}
    else {ui->tabWidget->removeTab(2); }
}

void AddAnimal::on_cbSpecies_currentIndexChanged(int index)
{
    speciesIndex = index;
    changeBreedBox(index);
    changeSpeciesTab(index);
    changeFurBox(index);
}

/** Function: on_tabWidget_tabBarClicked(int index)
 *  in: index (Which tab bar is clicked)
 *  Purpose: Decides what text/functionality to tie to the
 *           submit button.
 *           If on first tab it brings you to second tab.
 *           If on second tab it submits and creates the new animal */
void AddAnimal::on_tabWidget_tabBarClicked(int index)
{
    if(index != 2) { ui->bSubmit->setText("Next"); }
    else { ui->bSubmit->setText("Submit");}
}

/** Function: createCat()
 *  in-out: AnimalStorage
 *  purpose: creates a cat object and adds it to the animal storage. */
void AddAnimal::createCat()
{
    int curiosity, trained, shedding;
    Cat* newCat = new Cat();
    createAnimalBase(static_cast<Animal*>(newCat));

    curiosity = ui->groupCurious->checkedId();
    trained = ui->groupTrainedCat->checkedId();
    shedding = ui->groupSheds->checkedId();

    newCat->setBreed((ui->cbBreed->currentText()).toStdString());

    newCat->setSpeciesAttributes(curiosity, trained, shedding);

    if(newCat->areAllAttributesSet() == false && DEV_MODE == false) { displayMissingInfoError(); return; }

    (*storage)->add(newCat);
    filesaver.appendToFile(ANIMAL_SAVE_FILE, newCat);

    db->addCatToDatabase(newCat);

    this->close();
}

/** Function: createDog()
 *  in-out: AnimalStorage
 *  purpose: creates a dog object and adds to animal storage */
void AddAnimal::createDog()
{

    int barks, training;
    bool isBathroomTrained;

    Dog* newDog = new Dog();
    createAnimalBase(static_cast<Animal*>(newDog));

    barks = ui->groupBarks->checkedId();
    training = ui->groupDogTrained->checkedId();
    isBathroomTrained = ui->cbBathroomTrained->isChecked();

    newDog->setBreed((ui->cbBreed->currentText()).toStdString());

    newDog->setSpeciesAttributes(barks, training, isBathroomTrained);
    if(newDog->areAllAttributesSet() == false && DEV_MODE == false) { displayMissingInfoError(); return; }

    (*storage)->add(newDog);
    filesaver.appendToFile(ANIMAL_SAVE_FILE, newDog);
    db->addDogToDatabase(newDog);

    this->close();
}

/** Function: createBird()
 *  in-out: AnimalStorage
 *  purpose: creates a bird object and adds to animal storage */
void AddAnimal::createBird()
{
    int loud, social;
    std::string colour;

    Bird* newBird = new Bird();
    createAnimalBase(static_cast<Animal*>(newBird));

    loud = ui->groupIsLoudBird->checkedId();
    social = ui->groupAttentionBird->checkedId();
    colour = (ui->cbColourBird->currentText()).toStdString();
    newBird->setBreed((ui->cbBreed->currentText()).toStdString());

    newBird->setSpeciesAttributes(loud, social, colour);

    if(newBird->areAllAttributesSet() == false && DEV_MODE == false) { displayMissingInfoError(); return; }

    (*storage)->add(newBird);
    filesaver.appendToFile(ANIMAL_SAVE_FILE, newBird);

    db->addBirdToDatabase(newBird);

    this->close();
}

/** Function: createLizard()
 *  in-out: AnimalStorage
 *  purpose: creates a lizard object and adds to animal storage */
void AddAnimal::createLizard()
{
    std::string preferredDiet, colour, feedingInterval;
    bool spaceReqs, lightingReqs;

    Lizard* newLizard = new Lizard();
    createAnimalBase(static_cast<Animal*>(newLizard));

    preferredDiet = (ui->cbDiet->currentText()).toStdString();
    colour = (ui->cbColorLizard->currentText()).toStdString();
    spaceReqs = ui->boxSpace->isChecked();
    lightingReqs = ui->boxLighting->isChecked();
    feedingInterval = (ui->cbFeedingInterval->currentText()).toStdString();

    newLizard->setBreed((ui->cbBreed->currentText()).toStdString());

    newLizard->setSpeciesAttributes(preferredDiet, colour, feedingInterval, spaceReqs, lightingReqs);

    if(newLizard->areAllAttributesSet() == false && DEV_MODE == false) { displayMissingInfoError(); return; }

    (*storage)->add(newLizard);
    filesaver.appendToFile(ANIMAL_SAVE_FILE, newLizard);

    db->addLizardToDatabase(newLizard);

    this->close();
}

/** Function: createRabbit
 *  in-out: AnimalStorage
 *  purpose: creates rabbit object and adds to animal storage */
void AddAnimal::createRabbit()
{
    int grooming, attention;
    std::string pattern, colour;

    Rabbit* newRabbit = new Rabbit();
    createAnimalBase(static_cast<Animal*>(newRabbit));

    grooming = ui->groupGrooming->checkedId();
    attention = ui->groupAttentionRabbit->checkedId();
    pattern = (ui->cbPattern->currentText()).toStdString();
    colour = (ui->cbColourRabbit->currentText()).toStdString();

    newRabbit->setBreed((ui->cbBreed->currentText()).toStdString());

    newRabbit->setSpeciesAttributes(pattern, colour, grooming, attention);

    if(newRabbit->areAllAttributesSet() == false && DEV_MODE == false) { displayMissingInfoError(); return; }

    (*storage)->add(newRabbit);
    filesaver.appendToFile(ANIMAL_SAVE_FILE, newRabbit);

    db->addRabbitToDatabase(newRabbit);

    this->close();
}

/** Function: createAnimalBase(Animal *newAnimal)
 *  in-out: Animal* newAnimal
 *  purpose: Sets all attributes for animal base class */
void AddAnimal::createAnimalBase(Animal *newAnimal)
{
    std::string name;

    int size, fur, history, age;

    char gender;

    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy, lifestyle;

    bool isNocturnal; bool isHypoAllergenic;

    QString Qname = ui-> txtNameBox -> text();

    name = Qname.toStdString();

    if(name == "") { name = "Unknown"; }

    if(ui->rbMale->isChecked()) { gender = 'M'; }
    else { gender = 'F'; }

    if(speciesIndex == 2) { fur = 3; }
    else if (speciesIndex == 3) { fur = 4; }
    else { fur = ui->cbFur->currentIndex(); }

    size = ui->cbSize->currentIndex();
    history = ui->cbHistory->currentIndex();
    age = ui->sbAge->value();

    travels = ui->groupTravel->checkedId();
    children = ui->groupChildren->checkedId();
    goodWAnimals = ui->groupGoodAnimals->checkedId();
    strangers = ui->groupStrange->checkedId();
    crowds = ui->groupCrowds->checkedId();
    noises = ui->groupNoise->checkedId();
    protector = ui->groupProtect->checkedId();
    energy = ui->groupEnergy->checkedId();
    fearful = ui->groupFear->checkedId();
    affection = ui->groupAffection->checkedId();
    messy = ui->groupMessy->checkedId();

    if(ui->rbIndoor->isChecked()) { lifestyle = 0; }
    else if (ui->rbOutdoor->isChecked()) {lifestyle = 1;}
    else {lifestyle = 2;}

    isNocturnal = ui->boxNocturnal->isChecked();
    isHypoAllergenic = ui->boxAllergies->isChecked();

    newAnimal->setBaseAttributes(
                name, size, age, gender, fur, travels,
                children, goodWAnimals, strangers, crowds, noises, protector,
                energy, fearful, affection, messy, isNocturnal, isHypoAllergenic, lifestyle, history);

    if(customImage) { (newAnimal)->setImageFilePath(savePhoto(name)); }
}

void AddAnimal::displayAnimalNameError(QString name)
{
    QString err = QString("Error: Name '" + name + "' contains ')' or '(' symbols");

    QMessageBox msgBox;
    msgBox.setText(err);
    msgBox.exec();
}

void AddAnimal::displayMissingInfoError()
{
    QString err = QString("Error:\nOne or more animal attributes are not complete\nPlease fill them all out before proceeding");

    QMessageBox msgBox;
    msgBox.setText(err);
    msgBox.exec();
}
