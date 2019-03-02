#ifndef LIZARD_H
#define LIZARD_H

#include "animal.h"

class Lizard : public Animal
{
public:
    Lizard(std::string breed, std::string name,
           int size, int age, char gender, int fur,
            int travels, int children, int goodWAnimals, int strangers,
            int crowds, int noises, int protector, int energy,
            int fearful, int affection, int messy,
            bool isNocturnal, bool hypo, int lifestyle, int history);
    void setIdNumber(int newId);
private:
    int ANIMAL_STORAGE_CODE = 5;
};

#endif // LIZARD_H
