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

    if(newDog->getId() == -1) { newDog->setIdNumber(generateUniqueId()); }
    else { checkForLargestId(newDog->getId());}
    dogStorage.push_back(newDog);
}

void AnimalStorage::add(Cat* newCat)
{

    if(newCat->getId() == -1) { newCat->setIdNumber(generateUniqueId()); }
    else { checkForLargestId(newCat->getId());}
    catStorage.push_back(newCat);
}

void AnimalStorage::add(Bird* newBird)
{

    if(newBird->getId() == -1) { newBird->setIdNumber(generateUniqueId()); }
    else { checkForLargestId(newBird->getId());}
    birdStorage.push_back(newBird);
}

void AnimalStorage::add(Lizard* newLizard)
{

    if(newLizard->getId() == -1) { newLizard->setIdNumber(generateUniqueId()); }
    else { checkForLargestId(newLizard->getId());}
    lizardStorage.push_back(newLizard);
}

void AnimalStorage::add(Rabbit* newRabbit)
{

    if(newRabbit->getId() == -1) { newRabbit->setIdNumber(generateUniqueId()); }
    else { checkForLargestId(newRabbit->getId());}
    rabbitStorage.push_back(newRabbit);
}

int AnimalStorage::generateUniqueId()
{
    if(getSize() == 0) { largestId = ANIMAL_STARTING_ID; }
    else { ++largestId; }
    return largestId;
}

void AnimalStorage::checkForLargestId(int animalId)
{
    // Removes leading number and checks if the Id is largest than the current largest
    // If it is larger then it sets that to the new largestId
    int rawId = std::stoi((std::to_string(animalId)).substr(1));
    if(rawId > largestId) { largestId = rawId; }
}

/** Function: get(Animal** animal, int index)
 *  in: Index in storage
 *  in-out: Animal** animal
 *  purpose: Gets the animal at the index of the combined vectors
 *           Best used by looping through all animals */
void AnimalStorage::get(Animal** animal, int index)
{
    unsigned int i = static_cast<unsigned int>(index);

    // Dog vector
    if(i < dogStorage.size()) { *animal = dogStorage[i]; }

    // Cat vector
    else if (i >= dogStorage.size() && i < (dogStorage.size() + catStorage.size())) { *animal = catStorage[i - dogStorage.size()];}

    // Bird vector
    else if (i >= (dogStorage.size() + catStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size()))
            {*animal = birdStorage[i - (dogStorage.size() + catStorage.size())]; }

    // Lizard vector
    else if (i >= (dogStorage.size() + catStorage.size() + birdStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size()))
            {*animal = lizardStorage[i - (dogStorage.size() + catStorage.size() + birdStorage.size())]; }

    // Rabbit vector
    else if (i >= (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size()) && i < (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size() + rabbitStorage.size()))
            {*animal = rabbitStorage[i - (dogStorage.size() + catStorage.size() + birdStorage.size() + lizardStorage.size())]; }

    else
    {
        QMessageBox msgBox;
        QString qst = QString::fromStdString("Error: Index out of bounds");
        msgBox.setText(qst);
        msgBox.exec();
    }
}
