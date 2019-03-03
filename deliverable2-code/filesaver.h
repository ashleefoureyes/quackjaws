#ifndef FILESAVER_H
#define FILESAVER_H

#include <iostream>
#include <string>
#include <QFile>

#include "storage.h"
#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "rabbit.h"
#include "lizard.h"
#include "bird.h"
#include "animalstorage.h"

#define NUM_OF_ATTRIBUTES 24

class Filesaver
{
    public:
    Filesaver();
    void saveToFile(std::string, AnimalStorage*);
    void readFromAnimalFile(std::string, AnimalStorage*);
    void readFromClientFile(std::string, Storage*);
    void readFromFile(std::string, Storage*);
    void appendToFile(std::string fileName, Client* client);
    void appendToFile(std::string fileName, Animal* animal);
    void appendToFile(std::string fileName, Dog* animal);
    void appendToFile(std::string fileName, Cat* animal);
    void appendToFile(std::string fileName, Bird* animal);
    void appendToFile(std::string fileName, Rabbit* animal);
    void appendToFile(std::string fileName, Lizard* animal);

    private:
    void parseClient(std::string fileLine, int &id, std::string &firstName, std::string &lastName, std::string &address, std::string &city, std::string &province, std::string &phone, std::string &email);

    void parseData(std::string fileLine, std::string &breed, std::string &name,
                    int &size, int &age, char &gender, int &fur, bool &hypo, int &id, int &species);

    std::string parseAnimal(std::string fileline, int &id, std::string &imagePath, std::string &name, std::string &species, std::string &breed,
                            int &size, int &age, char &gender, int &fur,
                             int &travels, int &children, int &goodWAnimals, int &strangers,
                             int &crowds, int &noises, int &protector, int &energy,
                             int &fearful, int &affection, int &messy,
                             bool &isNocturnal, bool &hypo, int &lifestyle, int &history);

    void parseDog(std::string remainingAttributes, int &barks, int &training, bool &isBathroomTrained);
    void parseCat(std::string remainingAttributes, int &curious, int &trained, int &shedding);
    void parseBird(std::string remainingAttributes, int &loud, int &social, std::string &colour);
    void parseLizard(std::string remainingAttributes, std::string &diet, std::string &colour, std::string &feedingInterval, bool &spaceReqs, bool &lightingReqs);
    void parseRabbit(std::string remainingAttributes, int &grooming, int &attention, std::string &colour, std::string &pattern);
};

#endif
