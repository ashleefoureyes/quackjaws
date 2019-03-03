#include "dog.h"

Dog::Dog(std::string breed, std::string name,
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

Dog::Dog() { Animal::setSpecies(this->species); }

void Dog::setIdNumber(int newId) { Animal::setIdNumber(newId, ANIMAL_STORAGE_CODE); }

void Dog::setSpeciesAttributes(int barks, int training, bool isBathroomTrained)
{
    this->barks = barks;
    this->training = training;
    this->isBathroomTrained = isBathroomTrained;
}
