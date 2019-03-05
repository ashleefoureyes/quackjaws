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
        Rabbit();
        void setSpeciesAttributes(std::string pattern, std::string colour, int grooming, int attention);

        int getGrooming() const;
        int getAttention() const;
        std::string getColour() const;
        std::string getPattern() const;
        std::string getSaveInfo();
        bool areAllAttributesSet();

private:
        int ANIMAL_STORAGE_CODE = 6;
        int grooming, attention;
        std::string species = "Rabbit", colour, pattern;
};

#endif // RABBIT_H
