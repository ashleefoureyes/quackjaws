#include "animalstorage.h"
#include <QMessageBox>

AnimalStorage::AnimalStorage()
{

}

AnimalStorage::~AnimalStorage()
{
    for(std::vector<Dog*>::iterator itera=dogStorage.begin(); itera != dogStorage.end(); ++itera) { delete (*itera);}
    for(std::vector<Cat*>::iterator itera=catStorage.begin(); itera != catStorage.end(); ++itera) { delete (*itera);}
    for(std::vector<Bird*>::iterator itera=birdStorage.begin(); itera != birdStorage.end(); ++itera) { delete (*itera);}
    for(std::vector<Lizard*>::iterator itera=lizardStorage.begin(); itera != lizardStorage.end(); ++itera) { delete (*itera);}
    for(std::vector<Rabbit*>::iterator itera=rabbitStorage.begin(); itera != rabbitStorage.end(); ++itera) { delete (*itera);}
}

/** Function: getSize()
 *  out: sum of the size of all vectors
 *  purpose: returns the size of all storage vectors.
 *           Used to loop through all animals in storage */
int AnimalStorage::getSize(){ return static_cast<int>(catStorage.size() + dogStorage.size() + birdStorage.size() + rabbitStorage.size() + lizardStorage.size()); }

/** Function: listInfo(int index)
 *  in: index
 *  out: Animals getListInfoStr() for the index
 *  purpose: Gets basic animal list/display information for animal at the given index
             Used to list all animals in ViewAnimals class */
std::string AnimalStorage::listInfo(int index)
{
    Animal *tempAnimal;
    get(&tempAnimal, index);
    return tempAnimal->getListInfoStr();
}

/** Functions: add(AnimalSubclass*)
 *  in: AnimalSubclass*
 *  purpose: Overloaded function to place the animal subclass in the correct vector */
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

/** Function: generateUniqueId()
 *  out: int uniqueId
 *  purpose: When adding a new animal it sets the animal Id to something unique */
int AnimalStorage::generateUniqueId()
{
    if(getSize() == 0) { largestId = ANIMAL_STARTING_ID; }
    else { ++largestId; }
    return largestId;
}

/** Function: checkForLargestId(int animalId)
 *  in-out: this->largestId
 *  purpose: Checks the passed animal's Id with the current largest
 *           If it is larger it sets that to the largest Id
 *           This ensures that any new Id's created passed that point will be larger than the largest
 *           and therefore unique */
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

/** Function: get(int index)
 *  in: Index in storage
 *  in-out: Animal
 *  purpose: Gets and returns the animal. Does not use in-out params*/
Animal* AnimalStorage::get(int index)
{
    Animal* anim = nullptr;
    get(&anim, index);
    return anim;
}

std::string AnimalStorage::getSaveInfo()
{
    std::string returnStr = "";
    Animal* animal = nullptr;

    for(int i = 0; i < getSize(); ++i)
    {
        get(&animal, i);
        if(animal->getSpecies() == "Dog") { returnStr += "D: " + (static_cast<Dog*>(animal))->getSaveInfo(); }
        if(animal->getSpecies() == "Cat") { returnStr += "C: " + (static_cast<Cat*>(animal))->getSaveInfo(); }
        if(animal->getSpecies() == "Bird") { returnStr += "B: " + (static_cast<Bird*>(animal))->getSaveInfo(); }
        if(animal->getSpecies() == "Lizard") { returnStr += "L: " + (static_cast<Lizard*>(animal))->getSaveInfo(); }
        if(animal->getSpecies() == "Rabbit") { returnStr += "R: " + (static_cast<Rabbit*>(animal))->getSaveInfo(); }

        returnStr += "\n";
    }

    return returnStr;
}






