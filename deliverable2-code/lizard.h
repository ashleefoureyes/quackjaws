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
        void setSpeciesAttributes(std::string preferredDiet, std::string colour, std::string feedingInterval, bool spaceReqs, bool lightingReqs);
        Lizard();

        bool getSpaceReqs() const;
        bool getLightingReqs() const;
        std::string getDiet() const;
        std::string getColour() const;
        std::string getFeedingInterval() const;

private:
        int ANIMAL_STORAGE_CODE = 5;
        bool spaceReqs, lightingReqs;
        std::string species = "Lizard", diet, colour, feedingInterval;
};

#endif // LIZARD_H
