#ifndef DOG_H
#define DOG_H

#include "dog.h"
#include "animal.h"
#include <string>

class Dog: public Animal
{
    public:
        Dog(std::string breed, std::string name,
            int size, int age, char gender, int fur,
             int travels, int children, int goodWAnimals, int strangers,
             int crowds, int noises, int protector, int energy,
             int fearful, int affection, int messy,
             bool isNocturnal, bool hypo, int lifestyle, int history);
        void setIdNumber(int newId);

    private:
        std::string breed;
        int ANIMAL_STORAGE_CODE = 2;

};
#endif // DOG_H
