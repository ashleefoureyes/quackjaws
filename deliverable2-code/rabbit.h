#ifndef RABBIT_H
#define RABBIT_H

#include "animal.h"

class Rabbit: public Animal
{
public:
    Rabbit(std::string breed, std::string name,
           int size, int age, char gender, int fur,
            int travels, int children, int goodWAnimals, int strangers,
            int crowds, int noises, int protector, int energy,
            int fearful, int affection, int messy,
            bool isNocturnal, bool hypo, int lifestyle, int history);
    void setIdNumber(int newId);
private:
    int ANIMAL_STORAGE_CODE = 6;
};

#endif // RABBIT_H
