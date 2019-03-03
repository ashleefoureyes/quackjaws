#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird: public Animal
{
    public:
        Bird(std::string breed, std::string name,
             int size, int age, char gender, int fur,
              int travels, int children, int goodWAnimals, int strangers,
              int crowds, int noises, int protector, int energy,
              int fearful, int affection, int messy,
              bool isNocturnal, bool hypo, int lifestyle, int history);
        void setIdNumber(int newId);
        Bird();
        void setSpeciesAttributes(int loud, int social, std::string colour);

        int getLoud() const;
        int getSocial() const;
        std::string getColour() const;
        std::string getSaveInfo();

private:
        int ANIMAL_STORAGE_CODE = 4;
        std::string species = "Bird";
        int loud, social;
        std::string colour;

};

#endif // BIRD_H
