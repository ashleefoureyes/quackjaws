#include "animal.h"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>


Animal::Animal() { }

/** Function: Animal( ... )
 *  in: animal attributes
 *  purpose: Animal constructor with attributes
 *           For use when loading animal information
 *           Delegates attributes to setAttributes method
*/
Animal::Animal(std::string breed, std::string name,
               int size, int age, char gender, int fur, int species,
                int travels, int children, int goodWAnimals, int strangers,
                int crowds, int noises, int protector, int energy,
                int fearful, int affection, int messy,
                bool isNocturnal, bool hypo, int lifestyle)
{
    setAttributes(breed, name, size, age, gender, fur, species, travels, children, goodWAnimals,
                  strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle);
}

Animal::~Animal() { }

/** Function: setAttributes( ... )
 *  in: animal attributes
 *  purpose: Sets animal attributes to those passed as parameter.
 *           Had to change functionality from constructor to method
 *           because I need to create the Animal object before passing it
 *           to the AddAnimal class.

*/
void Animal::setAttributes(std::string breed, std::string name,
               int size, int age, char gender, int fur, int species,
                int travels, int children, int goodWAnimals, int strangers,
                int crowds, int noises, int protector, int energy,
                int fearful, int affection, int messy,
                bool isNocturnal, bool hypo, int lifestyle)
{
    // Physical attributes
    this->breed = breed; this->name = name;
    this->size = size; this->age = age; this->gender = gender;
    this->fur = fur; this->species = species;
    // Non-physical
    this->travels = travels; this->children = children; this->goodWAnimals = goodWAnimals;
    this->strangers = strangers; this->crowds = crowds;
    this->noises = noises; this->protector = protector; this->energy = energy;
    this->fearful = fearful; this->affection = affection; this->messy = messy;
    this->isHypoAllergenic = hypo; this->isNocturnal = isNocturnal;
    this->lifestyle = lifestyle;

}

std::string Animal::getName() { return name; }
std::string Animal::getBreed() { return breed; }
int Animal::getAge() { return age; }
int Animal::getSize() { return size; }
char Animal::getGender() { return gender; }
int Animal::getFur() { return fur; }
bool Animal::isHypo() { return isHypoAllergenic; }
int Animal::getSpeciesNum() { return species; }
std::string Animal::getSpecies()
{
    switch(species)
    {
        case 0: return "Cat";
        case 1: return "Dog";
    }

    return "N/A";
}

/** Function: setIdNumber(int newId)
    in: Id assigned by Storage object
    purpose: Assigns the idStr to the profile
*/
void Animal::setIdNumber(int newId)
{
    // Converts to str, concatenates storage code the reconverts to int. This is to ensure
    // if we have an animal code like 2999 and we add another animal we get: 21000 instead of 3000
    // this way the storage code will always be ANIMAL_STORAGE_CODE for animals no matter
    // how many are in storage
    std::string idStr = std::to_string(ANIMAL_STORAGE_CODE) + std::to_string(newId);
    this->profileId = std::stoi(idStr);
}

/** Function getFormattedInfo
 *  out: Formatted string of animal info
 *  Purpose: Takes the Animal's attributes and returns a
 *           formatted string create from this info */
std::string Animal::getFormattedInfo()
{
    std::string returnStr = "";
    std::ostringstream formattedReturn;

    std::string sep = " | ";

    formattedReturn << std::left << "Id: " << std::to_string(getId()) << sep
                    << std::left << "Name: " << std::setw(10) << getName() << sep
                    << std::left << "Species: " << std::setw(3) << getSpecies() << sep
                    << std::left << "Breed: " << std::setw(14) << getBreed() << sep
                    << std::left << "Age: " << std::setw(3) << std::to_string(getAge()) << sep
                    << std::left << "Size: " << std::setw(7) << getSizeStr() << sep
                    << std::left << "Gender: " << std::setw(2) << getGender() << sep
                    << std::left << "Fur Type: " << std::setw(12) << getFurStr() << sep;


    returnStr = formattedReturn.str();

    return returnStr;

}

std::string Animal::getListInfoStr()
{
    std::string returnStr = "";
    returnStr += std::to_string(profileId) + ": " + getName();
    return returnStr;
}


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
    case 0: return "None";
    case 1: return "Short";
    case 2: return "Long";
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
