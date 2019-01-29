#include "Animal.h"

#include <string>
#include <iostream>

Animal::Animal(std::string breed, std::string name, int size, int age, char gender, int fur, bool hypo)
{
    this->breed = breed;
    this->name = name;
    this->size = size;
    this->age = age;
    this->gender = gender;
    this->fur = fur;
    this->isHypoAllergenic = hypo;
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

void Animal::setIdNumber(int newId) { this->idNumber = newId; }

/** Function getFormattedInfo
 *  in: N/A
 *  out: Formatted string of animal info
 * 
 *  Purpose: Takes the Animal's attributes and returns a
 *           formatted string create from this info
 * 
*/
std::string Animal::getFormattedInfo()
{
    std::string returnStr = "";
    std::string charStr(1, getGender());

    returnStr += "Id: " + std::to_string(getId()) + " Name: " + getName() + " Breed:" + getBreed() + 
                    " Age: " + std::to_string(getAge()) + " Size: " + std::to_string(getSize()) + " Gender: " + charStr + " Fur Type: " + 
                    std::to_string(getFur()) + " is HypoAllergenic: " + std::to_string(isHypo());
    
    return returnStr;
    
}

/** Function: getSaveInfo()
 *  in: N/A
 *  out: string returnStr
 * 
 *  Purpose: Takes the attributes of the Animal objects and creates
 *           a formatted string to be saved to a text file and to be
 *           parsed into new Animal objects on program execution.
 * 
 *  Format of data:
 *              (Id)(Name)(Breed)(Age)(Size)(Gender)(Fur)(IsHypo)
*/
std::string Animal::getSaveInfo()
{
    std::string returnStr = "";

    returnStr += "(" + std::to_string(getId()) + ")(" + getName() + ")(" + getBreed() + 
                    ")(" + std::to_string(getAge()) + ")(" + std::to_string(getSize()) + ")(" + std::to_string(getGender()) + ")(" + 
                    std::to_string(getFur()) + ")(" + std::to_string(isHypo()) + ")";
    
    return returnStr;
    
}