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
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}

void ViewAnimals::viewAnimalsFromStorage(Storage *storage)
{
    this->storage = storage;
    populateList();
    displayAnimal(0);
    this->exec();
}

void ViewAnimals::populateList()
{
    int i = 0;

    while(i < storage->getNumOfElements())
    {

        QString qAnimInfo = QString::fromStdString(storage->listInfo(i));
        ui->animalList->addItem(qAnimInfo);

        ++i;
    }
}

void ViewAnimals::on_animalList_itemClicked(QListWidgetItem *item)
{
        int index = ui->animalList->currentRow();
        displayAnimal(index);
}

void ViewAnimals::displayAnimal(int index)
{
   if(storage->getNumOfElements() == 0) { return; }

   Animal *reqAnimal = static_cast<Animal*>(storage->get(index));

   std::string s(1, reqAnimal->getGender());

   // Top part
   ui->aName->setText(QString::fromStdString(reqAnimal->getName()));
   ui->aSpecies->setText(QString::fromStdString(reqAnimal->getSpecies()));
   ui->aBreed->setText(QString::fromStdString(reqAnimal->getBreed()));
   ui->aGender->setText(QString::fromStdString(s));
   ui->aAge->setText(QString::fromStdString(std::to_string(reqAnimal->getAge())));
   ui->aSize->setText(QString::fromStdString(reqAnimal->getSizeStr()));
   ui->aFur->setText(QString::fromStdString(reqAnimal->getFurStr()));

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
