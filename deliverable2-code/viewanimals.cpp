#include "viewanimals.h"
#include "ui_viewanimals.h"
#include <QListWidgetItem>
#include <QListWidget>
#include <QMessageBox>

#include <list>

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{
    ui->setupUi(this);

    ui->tabWidget->removeTab(5);
    ui->tabWidget->removeTab(4);
    ui->tabWidget->removeTab(3);
    ui->tabWidget->removeTab(2);
    ui->tabWidget->removeTab(1);
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}

/** Function: viewAnimalsFromStorage(Storage*)
 *  in: Storage*
 *  purpose: To be called when ViewAnimals is clicked. Displays all animals in storage */
void ViewAnimals::viewAnimalsFromStorage(AnimalStorage *storage)
{
    this->storage = storage;
    populateList();
    this->exec();
}

/** Function: PopulateList
    purpose: Populates animal list with all Animals in storage
             Now supports filtering by species */
void ViewAnimals::populateList()
{
    ui->animalList->clear();

    int i = 0;
    Animal* animal = nullptr;
    viewStorage.clear();

    while(i < storage->getSize())
    {

        storage->get(&animal, i);

        if(!(ui->filterDogs->isChecked()) && animal->getSpecies() == "Dog") { ++i; continue; }
        if(!(ui->filterCats->isChecked()) && animal->getSpecies() == "Cat") { ++i; continue; }
        if(!(ui->filterBirds->isChecked()) && animal->getSpecies() == "Bird") { ++i; continue; }
        if(!(ui->filterLizards->isChecked()) && animal->getSpecies() == "Lizard") { ++i; continue; }
        if(!(ui->filterRabbits->isChecked()) && animal->getSpecies() == "Rabbit") { ++i; continue; }

        QString qAnimInfo = QString::fromStdString(animal->getListInfoStr());

        ui->animalList->addItem(qAnimInfo);

        //Stores in vector to keep indexing correct with filtering
        viewStorage.push_back(animal);

        ++i;
    }
}

void ViewAnimals::changeSpeciesTab(int index)
{

    ui->tabWidget->removeTab(5);
    ui->tabWidget->removeTab(4);
    ui->tabWidget->removeTab(3);
    ui->tabWidget->removeTab(2);
    ui->tabWidget->removeTab(1);

    if(index == 2) {ui->tabWidget->addTab(ui->tabDog, "Species Attributes");}
    else if (index == 3) { ui->tabWidget->addTab(ui->tabCat, "Species Attributes");}
    else if (index == 4) { ui -> tabWidget->addTab(ui->tabBird, "Species Attributes");}
    else if (index == 5) { ui -> tabWidget->addTab(ui->tabLizard, "Species Attributes");}
    else if (index == 6) { ui -> tabWidget->addTab(ui->tabRabbit, "Species Attributes");}
    else {ui->tabWidget->removeTab(2); }
}

/** Funciton: on_animalList_itemClicked()
    purpose: Changes displayed Animal information when list
             item clicked */
void ViewAnimals::on_animalList_itemClicked()
{
        int index = ui->animalList->currentRow();

        // Gets text in list, gets first element which is the animal ID
        // and determines which tab to show based off that
        std::string listElement = (ui->animalList->item(index)->text()).toStdString();
        changeSpeciesTab(std::stoi(listElement.substr(0,1)));

        displayAnimal(index);
}

/** Function: displayAnimal(int index)
    in: int index in list of clicked element
    purpose: Displays all animal information in relevant areas
             when list element has been clicked*/
void ViewAnimals::displayAnimal(int index)
{
   if(storage->getSize() == 0) { return; }

   Animal *reqAnimal = viewStorage.at(static_cast<unsigned int>(index));

   displayAnimalAttributes(reqAnimal);

   // Checks the species and casts to that species
   if(reqAnimal->getSpecies() == "Dog") { displaySpeciesAttributes(static_cast<Dog*>(reqAnimal)); }
   if(reqAnimal->getSpecies() == "Cat") { displaySpeciesAttributes(static_cast<Cat*>(reqAnimal)); }
   if(reqAnimal->getSpecies() == "Bird") { displaySpeciesAttributes(static_cast<Bird*>(reqAnimal)); }
   if(reqAnimal->getSpecies() == "Lizard") { displaySpeciesAttributes(static_cast<Lizard*>(reqAnimal)); }
   if(reqAnimal->getSpecies() == "Rabbit") { displaySpeciesAttributes(static_cast<Rabbit*>(reqAnimal)); }

}

/** Function: loadImage(string filename)
    in: string filename
    purpose: Loads the image of the animal if there is one
             If there isn't just display text */
void ViewAnimals::loadImage(std::string filename)
{
    QString qFilename = QString::fromStdString(filename);

    // If no image, return
    if(QString::compare(qFilename, QString()) == 0) { return; }

    QImage image;

    // Checks to make sure image is not corrupted
    bool validImage = image.load(qFilename);
    if(validImage == false) { return; }

    image = image.scaledToWidth(ui->lbAnimalImage->width(), Qt::SmoothTransformation);
    ui->lbAnimalImage->setPixmap(QPixmap::fromImage(image));
}

void ViewAnimals::on_filterDogs_clicked() { populateList(); }
void ViewAnimals::on_filterCats_clicked() { populateList(); }
void ViewAnimals::on_filterBirds_clicked() { populateList(); }
void ViewAnimals::on_filterLizards_clicked() { populateList(); }
void ViewAnimals::on_filterRabbits_clicked() { populateList(); }

void ViewAnimals::displaySpeciesAttributes(Dog *dog)
{
    ui->barTrainingDog->setValue(dog->getTraining());
    ui->barLoudnessDog->setValue(dog->getBarks());

    if(dog->getIsBathroomTrained() == true) { ui->lbBathroomTrained->setText(QString::fromStdString("Bathroom Trained")); }
    else { ui->lbBathroomTrained->setText(QString::fromStdString("Not Bathroom Trained")); }

}

void ViewAnimals::displaySpeciesAttributes(Cat *cat)
{
    ui->barCuriosity->setValue(cat->getCuriosity());
    ui->barTrainingCat->setValue(cat->getTrained());
    ui->barShedding->setValue(cat->getShedding());
}

void ViewAnimals::displaySpeciesAttributes(Bird *bird)
{

}

void ViewAnimals::displaySpeciesAttributes(Lizard *dog)
{

}

void ViewAnimals::displaySpeciesAttributes(Rabbit *dog)
{

}

void ViewAnimals::displayAnimalAttributes(Animal* reqAnimal)
{
    std::string s(1, reqAnimal->getGender());

    // Top part
    ui->aName->setText(QString::fromStdString(reqAnimal->getName()));
    ui->aBreed->setText(QString::fromStdString(reqAnimal->getBreed()));
    ui->aGender->setText(QString::fromStdString(s));
    ui->aAge->setText(QString::fromStdString(std::to_string(reqAnimal->getAge())));
    ui->aSize->setText(QString::fromStdString(reqAnimal->getSizeStr()));
    ui->aFur->setText(QString::fromStdString(reqAnimal->getFurStr()));
    ui->aSpecies->setText(QString::fromStdString(reqAnimal->getSpecies()));

    //Progress bar
    ui->barLikesTravel->setValue(reqAnimal->getTravels());
    ui->barChildren->setValue(reqAnimal->getChildren());
    ui->barAnimals->setValue(reqAnimal->getGoodWAnimals());
    ui->barStrangers->setValue(reqAnimal->getStrangers());
    ui->barCrowds->setValue(reqAnimal->getCrowds());
    ui->barNoise->setValue(reqAnimal->getNoises());
    ui->barProtector->setValue(reqAnimal->getProtector());
    ui->barEnergy->setValue(reqAnimal->getEnergy());
    ui->barFear->setValue(reqAnimal->getFearful());
    ui->barAffection->setValue(reqAnimal->getAffection());
    ui->barMessy->setValue(reqAnimal->getMessy());

    //Additional attributes
    if(reqAnimal->isHypo() == true) { ui->lbNocturnal->setText(QString::fromStdString("Nocturnal")); }
    else { ui->lbNocturnal->setText(QString::fromStdString("Not nocturnal")); }

    ui->lbHistory->setText(QString::fromStdString(reqAnimal->getHistoryStr()));
    ui->lbIndoor->setText(QString::fromStdString(reqAnimal->getLifestyleStr()));

    if (reqAnimal->getImageFilePath() != "noImage") { loadImage(reqAnimal->getImageFilePath()); }
    else { ui->lbAnimalImage->clear(); ui->lbAnimalImage->setText(QString::fromStdString("No Image")); }
}
