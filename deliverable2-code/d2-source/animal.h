#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
    private:
    //Id number created when added to storage
    int idNumber;

    std::string name, breed;

    // 0 = Teacup, 1 = Small, 2 = Medium, 3 = Large
    int size;
    // 0 = Cat, 1 = Dog
    int species;
    // 0 = hairless, 1 = shorthair, 2 = longhair
    int fur;
    // 0 = Indoor, 1 = Outdoor, 2 = Both
    int history;

    char gender;
    int age;

    // 0 = Not at all -> 4 = A lot
    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy;

    bool isNocturnal;
    bool isHypoAllergenic;

    public:
    Animal(std::string breed="n/a", std::string name="n/a",
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
    int getId();
    std::string getSpecies();
    int getSpeciesNum();

    void setIdNumber(int);


    std::string getSizeStr();
    std::string getFurStr();
    std::string getAllergyStr();


    std::string getFormattedInfo();
    std::string getSaveInfo();
};

#endif
