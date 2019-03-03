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

void Lizard::setSpeciesAttributes(std::string preferredDiet, std::string colour, std::string feedingInterval, bool spaceReqs, bool lightingReqs)
{
    this->diet = preferredDiet;
    this->colour = colour;
    this->feedingInterval = feedingInterval;
    this->spaceReqs = spaceReqs;
    this->lightingReqs = lightingReqs;
}
