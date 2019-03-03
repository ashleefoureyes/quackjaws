#include "lizard.h"

Lizard::Lizard(std::string breed, std::string name,
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

void Lizard::setIdNumber(int newId) { Animal::setIdNumber(newId, ANIMAL_STORAGE_CODE); }

Lizard::Lizard() { Animal::setSpecies(this->species); }

bool Lizard::getSpaceReqs() const
{
    return spaceReqs;
}

bool Lizard::getLightingReqs() const
{
    return lightingReqs;
}

std::string Lizard::getDiet() const
{
    return diet;
}

std::string Lizard::getColour() const
{
    return colour;
}

std::string Lizard::getFeedingInterval() const
{
    return feedingInterval;
}

void Lizard::setSpeciesAttributes(std::string preferredDiet, std::string colour, std::string feedingInterval, bool spaceReqs, bool lightingReqs)
{
    this->diet = preferredDiet;
    this->colour = colour;
    this->feedingInterval = feedingInterval;
    this->spaceReqs = spaceReqs;
    this->lightingReqs = lightingReqs;
}

//(Base)(diet)(colour)(feedingInterval)(spaceReqs)(lightingReqs)
std::string Lizard::getSaveInfo()
{
    std::string baseAttributes = Animal::getSaveInfo();
    std::string returnStr = baseAttributes + ")(" + getDiet() + ")(" + getColour() + ")(" +
            getFeedingInterval() + "(" + std::to_string(getSpaceReqs()) + ")(" + std::to_string(getLightingReqs()) + ")";
    return returnStr;
}
