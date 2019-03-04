#include "animal.h"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>


Animal::Animal() { this->imageFilePath = "noImage"; idNumber = -1; }

/** Function: Animal( ... )
 *  in: animal attributes
 *  purpose: Animal constructor with attributes
 *           For use when loading animal information
 *           Delegates attributes to setAttributes method */
Animal::Animal(std::string name,
               int size, int age, char gender, int fur,
                int travels, int children, int goodWAnimals, int strangers,
                int crowds, int noises, int protector, int energy,
                int fearful, int affection, int messy,
                bool isNocturnal, bool hypo, int lifestyle, int history)
{
    setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals,
                  strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);
    imageFilePath = nullptr;
}

Animal::~Animal() { }

/** Function: setAttributes( ... )
 *  in: animal attributes
 *  purpose: Sets animal attributes to those passed as parameter.
 *           Had to change functionality from constructor to method
 *           because I need to create the Animal object before passing it
 *           to the AddAnimal class. */
void Animal::setBaseAttributes(std::string name,
               int size, int age, char gender, int fur,
                int travels, int children, int goodWAnimals, int strangers,
                int crowds, int noises, int protector, int energy,
                int fearful, int affection, int messy,
                bool isNocturnal, bool hypo, int lifestyle, int history)
{
    // Physical attributes
    this->name = name;
    this->size = size; this->age = age; this->gender = gender;
    this->fur = fur;
    // Non-physical
    this->travels = travels; this->children = children; this->goodWAnimals = goodWAnimals;
    this->strangers = strangers; this->crowds = crowds;
    this->noises = noises; this->protector = protector; this->energy = energy;
    this->fearful = fearful; this->affection = affection; this->messy = messy;
    this->isHypoAllergenic = hypo; this->isNocturnal = isNocturnal;
    this->lifestyle = lifestyle; this->history = history;

}

// (Id)(ImagePath)(Name)(Species)(Breed)(Size)(Age)(Gender)(Fur)(Travels)(Children)(GoodWAnimals)(Strangers)(Crowds)(Noises)(Protector)
// (Energy)(Fearful)(Affection)(Messy)(isNocturnal)(Hypo)(Lifestyle)(History)
std::string Animal::getSaveInfo()
{
    std::string returnStr = "";
    returnStr = "(" + std::to_string(getId()) + ")("  + getImageFilePath() + ")(" + getName() + ")(" + getSpecies() + ")(" + getBreed() + ")(" +
                std::to_string(getSize()) + ")(" + std::to_string(getAge()) + ")(" + std::to_string(getGender()) + ")(" +
                std::to_string(getFur()) + ")(" + std::to_string(getFur()) + ")(" + std::to_string(getTravels()) + ")(" +
                std::to_string(getChildren()) + ")(" + std::to_string(getStrangers()) + ")(" + std::to_string(getCrowds()) + ")(" +
                std::to_string(getNoises()) + ")(" + std::to_string(getProtector()) + ")(" + std::to_string(getEnergy()) + ")(" +
                std::to_string(getFearful()) + ")(" + std::to_string(getAffection()) + ")(" + std::to_string(getMessy()) + ")(" +
                std::to_string(isNocturnal) + ")(" + std::to_string(isHypo()) + ")(" + std::to_string(lifestyle) + ")(" + std::to_string(history) + ")";

    return returnStr;
}

/** Function: setIdNumber(int newId)
    in: Id assigned by Storage object
    purpose: Assigns the idStr to the profile */
void Animal::setIdNumber(int newId, int animalCode)
{
    // Converts to str, concatenates storage code the reconverts to int. This is to ensure
    // if we have an animal code like 2999 and we add another animal we get: 21000 instead of 3000
    // this way the storage code will always be ANIMAL_STORAGE_CODE for animals no matter
    // how many are in storage
    std::string idStr = std::to_string(animalCode) + std::to_string(newId);
    idNumber = std::stoi(idStr);
}

void Animal::setImageFilePath(std::string filepath) { imageFilePath = filepath; }

bool Animal::areAllAttributesSet()
{
    if(travels < 0 || children < 0 || goodWAnimals < 0 || strangers < 0 || crowds < 0 || noises < 0 || protector < 0
            || energy < 0 || fearful < 0 || affection < 0 || messy < 0) { return false; }
    return true;
}

std::string Animal::getListInfoStr()
{
    std::string returnStr = "";
    returnStr += std::to_string(idNumber) + ": " + getName();
    return returnStr;
}

void Animal::setSpecies(std::string species) { this->species = species; }
void Animal::setBreed(std::string breed) { this->breed = breed; }


std::string Animal::getSizeStr()
{
    switch(size)
    {
    case 0: return "Teacup";
    case 1: return "Small";
    case 2: return "Medium";
    case 3: return "Large";
    default: return "N/A";
    }
}


std::string Animal::getFurStr()
{
    switch(fur)
    {
    case 0: return "Hairless";
    case 1: return "Short";
    case 2: return "Long";
    case 3: return "Feathers";
    case 4: return "Scales";
    default: return "N/A";
    }
}
std::string Animal::getAllergyStr()
{
    if (isHypoAllergenic == true) { return "Yes"; }
    return "No";
}

std::string Animal::getLifestyleStr() const
{
    switch(lifestyle)
    {
    case 0: return "Indoor";
    case 1: return "Outdoor";
    case 2: return "Indoor/Outdoor";
    default: return "Unknown";
    }
}

std::string Animal::getHistoryStr() const
{
    switch(lifestyle)
    {
    case 0: return "Brought by owner";
    case 1: return "Street Animal";
    case 2: return "Rescue";
    default: return "Unknown";

    }
}

std::string Animal::getImageFilePath() const { return imageFilePath; }
int Animal::getId() const { return idNumber; }
int Animal::getTravels() const { return travels; }
int Animal::getChildren() const { return children;}
int Animal::getGoodWAnimals() const { return goodWAnimals;}
int Animal::getStrangers() const { return strangers;}
int Animal::getCrowds() const { return crowds; }
int Animal::getNoises() const { return noises; }
int Animal::getProtector() const{ return protector; }
int Animal::getEnergy() const { return energy; }
int Animal::getFearful() const { return fearful; }
int Animal::getAffection() const { return affection; }
int Animal::getMessy() const { return messy; }
std::string Animal::getSpecies() const { return species; }
std::string Animal::getName() { return name; }
std::string Animal::getBreed() { return breed; }
int Animal::getAge() { return age; }
int Animal::getSize() { return size; }
char Animal::getGender() { return gender; }
int Animal::getFur() { return fur; }
bool Animal::isHypo() { return isHypoAllergenic; }
bool Animal::getNocturnal(){return isNocturnal; }

std::string getFormattedInfo() { return ""; }

