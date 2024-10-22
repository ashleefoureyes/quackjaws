#include "cat.h"

Cat::Cat(std::string breed, std::string name,
            int size, int age, char gender, int fur,
             int travels, int children, int goodWAnimals, int strangers,
             int crowds, int noises, int protector, int energy,
             int fearful, int affection, int messy,
             bool isNocturnal, bool hypo, int lifestyle, int history) :
    Animal(name, size, age, gender, fur, travels, children, goodWAnimals,
           strangers, crowds, noises, protector, energy, fearful, affection,
           messy, isNocturnal, hypo, lifestyle, history)
{
    Animal::setBreed(breed);
}
Cat::Cat() { Animal::setSpecies(this->species); }

void Cat::setIdNumber(int newId) { Animal::setIdNumber(newId, ANIMAL_STORAGE_CODE); }

bool Cat::areAllAttributesSet()
{
    if(Animal::areAllAttributesSet() == false) { return false; }
    if(curiosity < 0 || trained < 0 || shedding < 0) { return false; }

    return true;

}

void  Cat::setSpeciesAttributes(int curiosity, int trained, int shedding)
{
    this->curiosity = curiosity;
    this->trained = trained;
    this->shedding = shedding;
}

int Cat::getCuriosity() const
{
    return curiosity;
}

int Cat::getTrained() const
{
    return trained;
}

int Cat::getShedding() const
{
    return shedding;
}

//(Base)(Curiosity)(Trained)(Shedding)
std::string Cat::getSaveInfo()
{
    std::string baseAttributes = Animal::getSaveInfo();
    std::string returnStr = baseAttributes + "(" + std::to_string(getCuriosity()) + ")(" + std::to_string(getTrained()) + ")(" + std::to_string(getShedding()) + ")";
    return returnStr;
}
