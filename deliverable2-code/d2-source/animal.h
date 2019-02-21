#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "profile.h"

#define ANIMAL_STORAGE_CODE 1

class Animal: public Profile
{
    private:
    std::string name, breed;

    int size; // 0 = Teacup, 1 = Small, 2 = Medium, 3 = Large
    int species; // 0 = Cat, 1 = Dog
    int fur; // 0 = hairless, 1 = shorthair, 2 = longhair
    int history; // 0 = Indoor, 1 = Outdoor, 2 = Both

    char gender;
    int age;

    // 0 = Not at all -> 4 = A lot
    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy;

    bool isNocturnal;
    bool isHypoAllergenic;

    public:
    Animal();
    Animal(std::string breed, std::string name,
           int size, int age, char gender, int fur, int species,
            int travels, int children, int goodWAnimals, int strangers,
            int crowds, int noises, int protector, int energy,
            int fearful, int affection, int messy,
            bool isNocturnal, bool hypo);
    ~Animal();

    void setAttributes(std::string breed="n/a", std::string name="n/a",
                       int size = -1, int age = -1, char gender = '?', int fur =-1, int species=-1,
                        int travels = -1, int children = -1, int goodWAnimals = -1, int strangers = -1,
                        int crowds = -1, int noises = -1, int protector = -1, int energy = -1,
                        int fearful = -1, int affection = -1, int messy = -1,
                        bool isNoturnal = false, bool hypo = false);

    // TODO add non-physical attributes for later Deliverable

    std::string getName();
    std::string getBreed();
    int getSize();
    int getAge();
    char getGender();
    int getFur();
    bool isHypo();
    std::string getSpecies();
    int getSpeciesNum();

    void setIdNumber(int);


    std::string getSizeStr();
    std::string getFurStr();
    std::string getAllergyStr();


    std::string getFormattedInfo();
    std::string getListInfoStr();
};

#endif
