#include "animalstorage.h"
#include <QMessageBox>

AnimalStorage::AnimalStorage()
{

}

int AnimalStorage::getSize(){ return static_cast<int>(catStorage.size() + dogStorage.size() + birdStorage.size() + rabbitStorage.size() + lizardStorage.size()); }

std::string AnimalStorage::listInfo(int index)
{

    Animal *tempAnimal;
    get(&tempAnimal, index);
    return tempAnimal->getListInfoStr();
}

void AnimalStorage::add(Dog* newDog)
{

    newDog->setIdNumber(generateUniqueId());
    dogStorage.push_back(newDog);
}

void AnimalStorage::add(Cat* newCat)
{

    newCat->setIdNumber(generateUniqueId());
    catStorage.push_back(newCat);
}

void AnimalStorage::add(Bird* newBird)
{

    newBird->setIdNumber(generateUniqueId());
    birdStorage.push_back(newBird);
}

void AnimalStorage::add(Lizard* newLizard)
{

    newLizard->setIdNumber(generateUniqueId());
    lizardStorage.push_back(newLizard);
}

void AnimalStorage::add(Rabbit* newRabbit)
{

    newRabbit->setIdNumber(generateUniqueId());
    rabbitStorage.push_back(newRabbit);
}

int AnimalStorage::generateUniqueId()
{
    if(getSize() == 0) { largestId = ANIMAL_STARTING_ID; }
    else { ++largestId; }
    return largestId;
}

//Dog 2, Cat 3, Bird 4, Lizard 5, Rabbit 6
void AnimalStorage::get(Animal** animal, int index)
{
    unsigned int i = static_cast<unsigned int>(index);

    // Dog vector
    if(i < dogStorage.size()) { *animal = dogStorage[i]; }

    // Cat vector
    else if (i >= dogStorage.size() && i < (dogStorage.size() + catStorage.size())) { *animal = catStorage[i - dogStorage.size()];}

    // Bird vector
    else if (i >= (dogStorage.size() + catStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size()))
            {*animal = birdStorage[i - dogStorage.size() - catStorage.size()]; }

    // Lizard vector
    else if (i >= (dogStorage.size() + catStorage.size() + birdStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size()))
            {*animal = lizardStorage[i - dogStorage.size() - catStorage.size() - birdStorage.size()]; }

    // Rabbit vector
    else if (i >= (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size() + rabbitStorage.size()))
            {*animal = rabbitStorage[i - dogStorage.size() - catStorage.size() - birdStorage.size()- rabbitStorage.size()]; }

    else
    {
        QMessageBox msgBox;
        QString qst = QString::fromStdString("Error: Index out of bounds");
        msgBox.setText(qst);
        msgBox.exec();
    }
}

void AnimalStorage::getWithId(Animal** animal, int id)
{
    Animal* temp = nullptr;

    for(int i = 0; i < getSize(); ++i)
    {
        get(&temp, i);
        if(temp->getId() == id) { *animal = temp; return; }
    }
}
