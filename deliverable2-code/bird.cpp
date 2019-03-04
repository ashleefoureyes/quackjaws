#include "bird.h"

Bird::Bird(std::string breed, std::string name,
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

void Bird::setIdNumber(int newId) { Animal::setIdNumber(newId, ANIMAL_STORAGE_CODE); }

Bird::Bird() { Animal::setSpecies(this->species); }

bool Bird::areAllAttributesSet()
{
    if (Animal::areAllAttributesSet() == false) { return false; }
    if(loud < 0 || social < 0) { return false; }

    return true;
}

void Bird::setSpeciesAttributes(int loud, int social, std::string colour)
{
    this->loud = loud;
    this->social = social;
    this->colour = colour;
}

int Bird::getLoud() const
{
    return loud;
}

int Bird::getSocial() const
{
    return social;
}

std::string Bird::getColour() const
{
    return colour;
}

//(Base)(loud)(social)(colour)
std::string Bird::getSaveInfo()
{
    std::string baseAttributes = Animal::getSaveInfo();
    std::string returnStr = baseAttributes + "(" + std::to_string(getLoud()) + ")(" + std::to_string(getSocial()) + ")(" + getColour() + ")";
    return returnStr;
}
