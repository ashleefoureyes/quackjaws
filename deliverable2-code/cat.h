#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include <string>

class Cat: public Animal
{
    public:
        Cat(std::string breed, std::string name,
            int size, int age, char gender, int fur,
             int travels, int children, int goodWAnimals, int strangers,
             int crowds, int noises, int protector, int energy,
             int fearful, int affection, int messy,
             bool isNocturnal, bool hypo, int lifestyle, int history);
        void setIdNumber(int newId);
        Cat();

    private:
        int ANIMAL_STORAGE_CODE = 3;
        std::string breed, species = "Cat";
        int curiosity, water, trained, shedding;
};

#endif // CAT_H
