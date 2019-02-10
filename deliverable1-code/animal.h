#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
    private:
    //Id number created when added to storage
    int idNumber;
    std::string name;

    // ######################
    // # Physical Attributes#
    // ######################
    std::string breed;
    // 0 = Teacup, 1 = Small, 2 = Medium, 3 = Large
    int size;
    int age;
    // 0 = Cat, 1 = Dog
    int species;
    char gender;
    // 0 = hairless, 1 = shorthair, 2 = longhair
    int fur;
    bool isHypoAllergenic;

    // TODO turn public to protected once inherited classes created
    public:
    Animal(std::string="n/a", std::string="n/a", int = -1, int = -1, char = '?', int=-1, bool=false, int=-1);

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

    std::string getFormattedInfo();
    std::string getSaveInfo();
};

#endif
