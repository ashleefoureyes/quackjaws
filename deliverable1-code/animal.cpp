#include "animal.h"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

Animal::Animal(std::string breed, std::string name, int size, int age, char gender, int fur, bool hypo, int species)
{
    this->breed = breed;
    this->name = name;
    this->size = size;
    this->age = age;
    this->gender = gender;
    this->fur = fur;
    this->isHypoAllergenic = hypo;
    this->species = species;
    idNumber = -1;
}

std::string Animal::getName() { return name; }
std::string Animal::getBreed() { return breed; }
int Animal::getAge() { return age; }
int Animal::getSize() { return size; }
char Animal::getGender() { return gender; }
int Animal::getFur() { return fur; }
bool Animal::isHypo() { return isHypoAllergenic; }
int Animal::getId() { return idNumber; }
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

void Animal::setIdNumber(int newId) { this->idNumber = newId; }

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

/** Function: getSaveInfo()
 *  out: string returnStr
 *  Purpose: Takes the attributes of the Animal objects and creates
 *           a formatted string to be saved to a text file and to be
 *           parsed into new Animal objects on program execution.
 *  Format of data:
 *              (Id)(Name)(Species)(Breed)(Age)(Size)(Gender)(Fur)(IsHypo) */
std::string Animal::getSaveInfo()
{
    std::string returnStr = "";

    returnStr += "(" + std::to_string(getId()) + ")(" + getName() + ")(" + getBreed() +
                    ")(" + std::to_string(getSpeciesNum()) + ")(" + std::to_string(getAge()) + ")(" + std::to_string(getSize()) + ")(" + std::to_string(getGender()) + ")(" +
                    std::to_string(getFur()) + ")(" + std::to_string(isHypo()) + ")";

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
