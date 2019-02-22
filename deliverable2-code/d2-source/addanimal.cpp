#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    setupButtons();
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

int AddAnimal::createNewAnimal(Animal *newAnimal)
{
    this->newAnimal = &newAnimal;
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

std::string AddAnimal::savePhoto(std::string filename)
{
    if (!QDir(DIR_NAME).exists()) { QDir().mkdir(DIR_NAME); }

   filename += ".jpg";
   filename = IMAGE_FILEPATH + filename;

    QString qFilename = QString::fromStdString(filename);
    animalPhoto.save(qFilename);

    return filename;

}

/** Function: on_bSubmit_clicked()
    in: All animal attributes
    in-out: Animal *newAnimal
    purpose: Takes all information from form and creates
             a new Animal object with this information.
             This is the same Animal reference that was passed
             in at AddAnimal::createNewAnimal */
// TODO: Support saving animal image
void AddAnimal::on_bSubmit_clicked()
{
    std::string name, breed;

    int size, species, fur, history, age;

    char gender;

    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy, lifestyle;

    bool isNocturnal; bool isHypoAllergenic;

    QString Qname = ui-> txtNameBox -> text();
    QString Qbreed = ui->txtBreedBox->text();

    name = Qname.toStdString();

    if(name == "") { name = "N/A"; }

    breed = Qbreed.toStdString();
    if(breed == "") { breed = "N/A"; }

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
                breed,name, size, age, gender, fur, species, travels,
                children, goodWAnimals, strangers, crowds, noises, protector,
                energy, fearful, affection, messy, isNocturnal, isHypoAllergenic, lifestyle);

    // TODO: Write function to generate original filename
    if(customImage) { (*newAnimal)->setImageFilePath(savePhoto(name)); }

    //QMessageBox msgBox;
    //QString qst = QString::fromStdString("Animal added successfully");
    //msgBox.setText(qst);
    //msgBox.exec();

    returnVal = QDialog::Accepted;
    this->close();
}

void AddAnimal::on_bExit_clicked()
{
    delete (*newAnimal);
    returnVal = QDialog::Rejected;
    this->close();
}
