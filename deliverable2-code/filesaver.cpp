#include "filesaver.h"

#include <iostream>
#include <string>
#include <fstream>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

Filesaver::Filesaver() { }

/** Function: saveToFile(string fileName, animalStorage)
 *  in: string fileName, Storage* animalStorage
 *  Purpose: Takes all the animal information from the animalStorage
 *           object and saves it to a text file.
 *           Uses animalStorage's getSaveInfo() function to get
 *           the formatted string to save */
void Filesaver::saveToFile(std::string fileName, AnimalStorage* animalStorage)
{
    std::ofstream outfile(fileName);
    outfile << animalStorage->getSaveInfo() << std::endl;
    outfile.close();

}

void Filesaver::appendToFile(std::string fileName, Animal* animal)
{
    std::ofstream outfile;
    outfile.open(fileName, std::ios_base::app);

    std::string returnStr = "";

    if(animal->getSpecies() == "Dog") { returnStr += "D: " + (static_cast<Dog*>(animal))->getSaveInfo(); }
    if(animal->getSpecies() == "Cat") { returnStr += "C: " + (static_cast<Cat*>(animal))->getSaveInfo(); }
    if(animal->getSpecies() == "Bird") { returnStr += "B: " + (static_cast<Bird*>(animal))->getSaveInfo(); }
    if(animal->getSpecies() == "Lizard") { returnStr += "L: " + (static_cast<Lizard*>(animal))->getSaveInfo(); }
    if(animal->getSpecies() == "Rabbit") { returnStr += "R: " + (static_cast<Rabbit*>(animal))->getSaveInfo(); }

    returnStr += "\n";

    outfile << returnStr;
}

void Filesaver::appendToFile(std::string fileName, Client *client)
{
    std::string returnStr = "";

    std::ofstream outfile;
    outfile.open(fileName, std::ios_base::app);

    returnStr += "C: " + client->getSaveInfo() + "\n";
    outfile << returnStr;

}

// Functions so you can pass a derived class to appendToFile without needing to cast
void Filesaver::appendToFile(std::string fileName, Dog* animal) { appendToFile(fileName, static_cast<Animal*>(animal)); }
void Filesaver::appendToFile(std::string fileName, Cat* animal) { appendToFile(fileName, static_cast<Animal*>(animal)); }
void Filesaver::appendToFile(std::string fileName, Bird* animal) { appendToFile(fileName, static_cast<Animal*>(animal)); }
void Filesaver::appendToFile(std::string fileName, Lizard* animal) { appendToFile(fileName, static_cast<Animal*>(animal)); }
void Filesaver::appendToFile(std::string fileName, Rabbit* animal) { appendToFile(fileName, static_cast<Animal*>(animal)); }

void Filesaver::readFromClientFile(std::string fileName, Storage* clientStorage)
{
    std::ifstream infile(fileName, std::ifstream::in);
    int largestId = -1;

    // Checks to make sure the file exists, is open and isn't corrupt
    if(!infile.good() || !infile.is_open()) { return; }


    while(infile.eof() == false)
    {
        std::string fileLine;
        std::getline(infile, fileLine);

        if(fileLine.length() != 0 && fileLine.at(0) == 'C')
        {
            int id;
            std::string firstName, lastName, address, city, province, phone, email;
            parseClient(fileLine.substr(2), id, firstName, lastName, address, city, province, phone, email);

            id = std::stoi(std::to_string(id).substr(1));
            Client* newClient = new Client();
            newClient->setContactInformation(firstName, lastName, address, phone, email, city, province);
            newClient->setIdNumber(id);

            if(id > largestId) { largestId = id; }
            clientStorage->add(newClient);
        }
    }

    clientStorage->setLargestId(largestId);
    infile.close();

}

/** Function: readFromFile(string fileName, Storage* animalStorage)
 *  in: fileName
 *  in-out: Storage* animalStorage
 *  Purpose: Loads the file and reads through each line.
 *           Every line of the file is a different Animal object
 *           that gets passed to parseData(). Once the attributes are
 *           parsed from the data it creates a new Animal instane and puts
 *           the pointer in the Storage* passed as an argument */

void Filesaver::readFromAnimalFile(std::string fileName, AnimalStorage* animalStorage)
{
    std::ifstream infile(fileName, std::ifstream::in);

    // Checks to make sure the file exists, is open and isn't corrupt
    if(!infile.good() || !infile.is_open()) { return; }


    while(infile.eof() == false)
    {
        std::string fileLine;
        std::getline(infile, fileLine);

        // If a line starts with A that means it's an animal
        // This information can then be used to parse the data
        if(fileLine.length() != 0)
        {
            std::string name, imagePath, species, breed;
            int id;
            int size, age, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy,
                fearful, affection, messy, lifestyle, history;
            bool isNocturnal, hypo;
            char gender;

            // All arguments besides fileLine.substr(2) passed by reference
            std::string remainingAttributes = parseAnimal(fileLine, id, imagePath, name, species, breed, size, age, gender, fur,
                                         travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy,
                                         isNocturnal, hypo, lifestyle, history);

            if(fileLine.at(0) == 'D')
            {
                int barks, training;
                bool isBathroomTrained;
                parseDog(remainingAttributes, barks, training, isBathroomTrained);
                Dog* newDog = new Dog();
                newDog->setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);
                newDog->setSpeciesAttributes(barks, training, isBathroomTrained);
                newDog->setImageFilePath(imagePath);
                newDog->setBreed(breed);
                animalStorage->add(newDog);
            }

            else if(fileLine.at(0) == 'C')
            {
                int curiosity, trained, shedding;
                parseCat(remainingAttributes, curiosity, trained, shedding);
                Cat* newCat = new Cat();

                newCat->setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);

                newCat->setSpeciesAttributes(curiosity, trained, shedding);
                newCat->setImageFilePath(imagePath);
                newCat->setBreed(breed);

                animalStorage->add(newCat);
            }

            else if(fileLine.at(0) == 'B')
            {
                int loud, social;
                std::string colour;
                parseBird(remainingAttributes, loud, social, colour);
                Bird* newBird = new Bird();
                newBird->setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);
                newBird->setSpeciesAttributes(loud, social, colour);
                newBird->setImageFilePath(imagePath);
                newBird->setBreed(breed);
                animalStorage->add(newBird);
            }

            else if(fileLine.at(0) == 'L')
            {
                bool spaceReqs, lightingReqs;
                std::string diet, colour, feedingInterval;
                parseLizard(remainingAttributes,diet,colour,feedingInterval,spaceReqs,lightingReqs);
                Lizard* newLizard = new Lizard();
                newLizard->setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);
                newLizard->setSpeciesAttributes(diet,colour,feedingInterval,spaceReqs,lightingReqs);
                newLizard->setImageFilePath(imagePath);
                newLizard->setBreed(breed);
                animalStorage->add(newLizard);
            }

            else if(fileLine.at(0) == 'R')
            {
                int grooming, attention;
                std::string pattern, colour;
                parseRabbit(remainingAttributes, grooming, attention, colour,pattern);
                Rabbit* newRabbit = new Rabbit();
                newRabbit->setBaseAttributes(name, size, age, gender, fur, travels, children, goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, isNocturnal, hypo, lifestyle, history);
                newRabbit->setSpeciesAttributes(pattern, colour, grooming, attention);
                newRabbit->setImageFilePath(imagePath);
                newRabbit->setBreed(breed);
                animalStorage->add(newRabbit);
            }
        }
    }

    infile.close();
}

void Filesaver::parseClient(std::string fileLine,int &id, std::string &firstName, std::string &lastName, std::string &address, std::string &city, std::string &province, std::string &phone, std::string &email)
{
    std::string strArray[8];

    for(int i = 0; i < 8; ++i)
    {
        strArray[i] = fileLine.substr(fileLine.find("(") + 1, fileLine.find(")") - 1);
        fileLine = fileLine.substr(fileLine.find(")") + 1);
    }

    id = std::stoi(strArray[0]);
    firstName = strArray[1];
    lastName = strArray[2];
    address = strArray[3];
    city = strArray[4];
    province = strArray[5];
    phone = strArray[6];
    email = strArray[7];
}

void Filesaver::parseDog(std::string remainingAttributes, int &barks, int &training, bool &isBathroomTrained)
{
    std::string strArray[3];

    for(int i = 0; i < 3; ++i)
    {
        strArray[i] = remainingAttributes.substr(remainingAttributes.find("(") + 1, remainingAttributes.find(")") - 1);
        remainingAttributes = remainingAttributes.substr(remainingAttributes.find(")") + 1);
    }

    barks = std::stoi(strArray[0], nullptr, 10);
    training = std::stoi(strArray[1], nullptr, 10);
    isBathroomTrained = std::stoi(strArray[2], nullptr, 10);
}

void Filesaver::parseCat(std::string remainingAttributes, int &curious, int &trained, int &shedding)
{
    std::string strArray[3];

    for(int i = 0; i < 3; ++i)
    {
        strArray[i] = remainingAttributes.substr(remainingAttributes.find("(") + 1, remainingAttributes.find(")") - 1);
        remainingAttributes = remainingAttributes.substr(remainingAttributes.find(")") + 1);
    }

    curious = std::stoi(strArray[0], nullptr, 10);
    trained = std::stoi(strArray[1], nullptr, 10);
    shedding = std::stoi(strArray[2], nullptr, 10);
}

void Filesaver::parseBird(std::string remainingAttributes, int &loud, int &social, std::string &colour)
{
    std::string strArray[3];

    for(int i = 0; i < 3; ++i)
    {
        strArray[i] = remainingAttributes.substr(remainingAttributes.find("(") + 1, remainingAttributes.find(")") - 1);
        remainingAttributes = remainingAttributes.substr(remainingAttributes.find(")") + 1);
    }

    loud = std::stoi(strArray[0], nullptr, 10);
    social = std::stoi(strArray[1], nullptr, 10);
    colour = strArray[2];
}

void Filesaver::parseLizard(std::string remainingAttributes, std::string &diet, std::string &colour, std::string &feedingInterval, bool &spaceReqs, bool &lightingReqs)
{
    std::string strArray[5];

    for(int i = 0; i < 5; ++i)
    {
        strArray[i] = remainingAttributes.substr(remainingAttributes.find("(") + 1, remainingAttributes.find(")") - 1);
        remainingAttributes = remainingAttributes.substr(remainingAttributes.find(")") + 1);
    }

    diet = strArray[0];
    colour = strArray[1];
    feedingInterval = strArray[2];
    spaceReqs = std::stoi(strArray[3], nullptr, 10);
    lightingReqs = std::stoi(strArray[4], nullptr, 10);
}


void Filesaver::parseRabbit(std::string remainingAttributes, int &grooming, int &attention, std::string &colour, std::string &pattern)
{
    std::string strArray[5];

    for(int i = 0; i < 5; ++i)
    {
        strArray[i] = remainingAttributes.substr(remainingAttributes.find("(") + 1, remainingAttributes.find(")") - 1);
        remainingAttributes = remainingAttributes.substr(remainingAttributes.find(")") + 1);
    }

    pattern = strArray[0];
    colour = strArray[1];
    grooming = std::stoi(strArray[2], nullptr, 10);
    attention = std::stoi(strArray[3], nullptr, 10);
}


std::string Filesaver::parseAnimal(std::string fileline, int &id, std::string &imagePath, std::string &name, std::string &species, std::string &breed,
                            int &size, int &age, char &gender, int &fur,
                             int &travels, int &children, int &goodWAnimals, int &strangers,
                             int &crowds, int &noises, int &protector, int &energy,
                             int &fearful, int &affection, int &messy,
                             bool &isNocturnal, bool &hypo, int &lifestyle, int &history)
{
    //std::cout << fileLine << std::endl;

    std::string strArray[NUM_OF_ATTRIBUTES];

    for(int i = 0; i < NUM_OF_ATTRIBUTES; ++i)
    {
        strArray[i] = fileline.substr(fileline.find("(") + 1, fileline.find(")") - 1);
        fileline = fileline.substr(fileline.find(")") + 1);
    }

    id = std::stoi(strArray[0], nullptr, 10);
    imagePath = strArray[1];
    name = strArray[2];
    species = strArray[3];
    breed = strArray[4];
    size = std::stoi(strArray[5], nullptr, 10);
    age = std::stoi(strArray[6], nullptr, 10);
    gender = static_cast<char>(std::stoi(strArray[7], nullptr, 10));
    fur = std::stoi(strArray[8], nullptr, 10);
    travels = std::stoi(strArray[9], nullptr, 10);
    children = std::stoi(strArray[10], nullptr, 10);
    goodWAnimals = std::stoi(strArray[11], nullptr, 10);
    strangers = std::stoi(strArray[12], nullptr, 10);
    crowds = std::stoi(strArray[13], nullptr, 10);
    noises = std::stoi(strArray[14], nullptr, 10);
    protector = std::stoi(strArray[15], nullptr, 10);
    energy = std::stoi(strArray[16], nullptr, 10);
    fearful = std::stoi(strArray[17], nullptr, 10);
    affection = std::stoi(strArray[18], nullptr, 10);
    messy = std::stoi(strArray[19], nullptr, 10);
    isNocturnal = std::stoi(strArray[20], nullptr, 10);
    hypo = std::stoi(strArray[21], nullptr, 10);
    lifestyle = std::stoi(strArray[22], nullptr, 10);
    history = std::stoi(strArray[23], nullptr, 10);

    return fileline;
}

