#include "animal.h"

#include <string>
#include <iostream>

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
    std::string charStr(1, getGender());

    returnStr += "Id: " + std::to_string(getId()) + " Name: " + getName() + " Species: " + getSpecies() + " Breed:" + getBreed() +
                    " Age: " + std::to_string(getAge()) + " Size: " + getSizeStr() + " Gender: " + charStr + " Fur Type: " +
                    getFurStr() + " is HypoAllergenic: " + getAllergyStr();

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
    case 0: return "Hairless";
    case 1: return "Shorthair";
    case 2: return "Longhair";
    default: return "N/A";
    }
}
std::string Animal::getAllergyStr()
{
    switch(isHypoAllergenic)
    {
    case 0: return "No";
    case 1: return "Yes";
    default: return "No";
    }
}
