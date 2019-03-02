#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    setupButtons();
    changeBreedBox(0);
}

AddAnimal::~AddAnimal()
{
    delete ui;
}

//TODO Implement it so that the popup box is already filled out with current animal information
//     then this->exec() is called and returns the return value
int AddAnimal::editAnimal(Animal *animalToEdit)
{
    this->newAnimal = &animalToEdit;
    return 1;
}

/** Function: initNewAnimal(Animal*)
 *  in-out: Animal* newAnimal
 *  purpose: Called to create set all the parameters for the new Animal.
 *           Returns 1 if the Animal is set or 0 if the user clicked Exit.
 *           The latter causes the instantiated Animal to be delete. */
int AddAnimal::initNewAnimal(Animal *newAnimal)
{
    this->newAnimal = &newAnimal;
    this->exec();
    return returnVal;
}

int AddAnimal::createNewAnimal(AnimalStorage**)
{
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
    QButtonGroup* buttonGroups[NUM_OF_BUTTON_GROUPS] = {
        ui->groupTravel, ui->groupChildren, ui->groupGoodAnimals,
        ui->groupStrange, ui->groupCrowds, ui->groupNoise,
        ui->groupProtect, ui->groupEnergy, ui->groupFear,
        ui->groupAffection, ui->groupMessy
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
    if(validImage == false) { return; }

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
    /**
    // If still on Physical info tab move to Non-Physical tab
    if (ui->Tabs->currentIndex() == 0)
    {
        ui->Tabs->setCurrentWidget(ui->tabNonPhysical);
        ui->bSubmit->setText("Submit");
        return;
    }

    std::string name, breed;

    int size, species, fur, history, age;

    char gender;

    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy, lifestyle;

    bool isNocturnal; bool isHypoAllergenic;

    QString Qname = ui-> txtNameBox -> text();
    QString Qbreed = ui->txtBreedBox->text();

    name = Qname.toStdString();

    if(name == "") { name = "Unknown"; }

    breed = Qbreed.toStdString();
    if(breed == "") { breed = "Unknown"; }

    if(ui->rbCat->isChecked()) { species = 0; }
    else if(ui->rbDog->isChecked()) { species = 1; }
    else { species = -1; }

    if(ui->rbMale->isChecked()) { gender = 'M'; }
    else { gender = 'F'; }

    fur = ui->cbFur->currentIndex();
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

    (*newAnimal)->setAttributes(
                name, size, age, gender, fur, species, travels,
                children, goodWAnimals, strangers, crowds, noises, protector,
                energy, fearful, affection, messy, isNocturnal, isHypoAllergenic, lifestyle, history);

    // TODO: Write function to generate original filename
    if(customImage) { (*newAnimal)->setImageFilePath(savePhoto(name)); }

    //QMessageBox msgBox;
    //QString qst = QString::fromStdString(name);
    //msgBox.setText(qst);
    //msgBox.exec();

    returnVal = QDialog::Accepted;
    this->close();
    */
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

/** Function: on_Tabs_tabBarClicked(int index)
 *  in: index (Which tab bar is clicked)
 *  Purpose: Decides what text/functionality to tie to the
 *           submit button.
 *           If on first tab it brings you to second tab.
 *           If on second tab it submits and creates the new animal */
void AddAnimal::on_Tabs_tabBarClicked(int index)
{
    if(index == 0) { ui->bSubmit->setText("Next"); }
    else { ui->bSubmit->setText("Submit");}
}

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

    for(int i = 0; i < static_cast<int>(breeds.size()); ++i)
    {
        QString element = QString::fromStdString(breeds.at(i));
        ui->cbBreed->addItem(element);
    }
}

void AddAnimal::changeSpeciesTab(int index)
{
    ui->tabWidget->removeTab(2);
    if(index == 0) {ui->tabWidget->addTab(ui->tabDog, "Dog");}
    else {ui->tabWidget->removeTab(2); }
}

void AddAnimal::on_cbSpecies_currentIndexChanged(int index)
{
    speciesIndex = index;
    changeBreedBox(index);
    changeSpeciesTab(index);

}
