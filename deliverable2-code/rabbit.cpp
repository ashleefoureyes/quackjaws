#include "rabbit.h"

Rabbit::Rabbit(std::string breed, std::string name,
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

void Rabbit::setIdNumber(int newId) { Animal::setIdNumber(newId, ANIMAL_STORAGE_CODE); }

Rabbit::Rabbit() { Animal::setSpecies(this->species); }

void Rabbit::setSpeciesAttributes(std::string pattern, std::string colour, int grooming, int attention)
{
    this->pattern = pattern;
    this->colour = colour;
    this->grooming = grooming;
    this->attention = attention;
}

int Rabbit::getGrooming() const
{
    return grooming;
}

int Rabbit::getAttention() const
{
    return attention;
}

std::string Rabbit::getColour() const
{
    return colour;
}

std::string Rabbit::getPattern() const
{
    return pattern;
}

//(Base)(pattern)(colour)(grooming)(attention)
std::string Rabbit::getSaveInfo()
{
    std::string baseAttributes = Animal::getSaveInfo();
    std::string returnStr = baseAttributes + "(" + getPattern() + ")(" + getColour() + ")(" + std::to_string(getGrooming()) + ")(" + std::to_string(getAttention()) + ")";
    return returnStr;
}
