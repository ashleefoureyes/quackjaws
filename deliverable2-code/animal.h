#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>


class Animal
{
    private:
    std::string name, breed, species, imageFilePath;
    int idNumber;

    int size; // 0 = Teacup, 1 = Small, 2 = Medium, 3 = Large
    int fur; // 0 = hairless, 1 = shorthair, 2 = longhair, 3 = feathers, 4 scales
    int history; // 0 = Given up by owner, 1 = Street animal, 2 = Rescue, 3 = Unknown
    int lifestyle; // 0 = Indoor, 1 = Outdoor, 2 = Both

    char gender;
    int age;

    // 0 = Not at all -> 4 = A lot
    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy;

    bool isNocturnal;
    bool isHypoAllergenic;

    public:
    Animal();
    Animal(std::string name,
           int size, int age, char gender, int fur,
            int travels, int children, int goodWAnimals, int strangers,
            int crowds, int noises, int protector, int energy,
            int fearful, int affection, int messy,
            bool isNocturnal, bool hypo, int lifestyle, int history);
    ~Animal();

    void setBaseAttributes(std::string name="n/a",
                       int size = -1, int age = -1, char gender = '?', int fur =-1,
                        int travels = -1, int children = -1, int goodWAnimals = -1, int strangers = -1,
                        int crowds = -1, int noises = -1, int protector = -1, int energy = -1,
                        int fearful = -1, int affection = -1, int messy = -1,
                        bool isNoturnal = false, bool hypo = false, int lifestyle = 0, int history = 0);

    // TODO add non-physical attributes for later Deliverable

    std::string getName();
    std::string getBreed();
    int getSize();
    int getAge();
    char getGender();
    int getFur();
    bool isHypo();
    std::string getFormattedInfo();

    void setIdNumber(int, int);
    void setSpecies(std::string species);
    void setBreed(std::string breed);


    std::string getSizeStr();
    std::string getFurStr();
    std::string getAllergyStr();
    std::string getListInfoStr();

    std::string getSaveInfo();
    int getTravels() const;
    int getChildren() const;
    int getGoodWAnimals() const;
    int getStrangers() const;
    int getCrowds() const;
    int getNoises() const;
    int getProtector() const;
    int getEnergy() const;
    int getFearful() const;
    int getAffection() const;
    int getMessy() const;
    int getId() const;
    std::string getImageFilePath() const;
    std::string getLifestyleStr() const;
    std::string getHistoryStr() const;
    std::string getSpecies() const;

    void setImageFilePath(std::string);

};

#endif
