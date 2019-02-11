#include "filesaver.h"

#include <iostream>
#include <string>
#include <fstream>
#include <QTextStream>
#include <QFile>

/** Function: saveToFile(string fileName, animalStorage)
 *  in: string fileName, Storage* animalStorage
 *  Purpose: Takes all the animal information from the animalStorage
 *           object and saves it to a text file.
 *           Uses animalStorage's getSaveInfo() function to get
 *           the formatted string to save */
void Filesaver::saveToFile(std::string fileName, Storage* animalStorage)
{
    std::ofstream outfile(fileName);
    outfile << animalStorage->getSaveInfo() << std::endl;
    outfile.close();

}

/** Function: readFromFile(string fileName, Storage* animalStorage)
 *  in: fileName
 *  in-out: Storage* animalStorage
 *  Purpose: Loads the file and reads through each line.
 *           Every line of the file is a different Animal object
 *           that gets passed to parseData(). Once the attributes are
 *           parsed from the data it creates a new Animal instane and puts
 *           the pointer in the Storage* passed as an argument */
void Filesaver::readFromFile(std::string fileName, Storage* animalStorage)
{
    std::ifstream infile(fileName, std::ifstream::in);

    // Checks to make sure the file exists, is open and isn't corrupt
    if(!infile.good() || !infile.is_open()) { return; }

    // Used to find largest id so each new animal added will have
    // a unique ID
    int largestId = -1;

    while(infile.eof() == false)
    {
        std::string fileLine;
        std::getline(infile, fileLine);

        // If a line starts with A that means it's an animal
        // This information can then be used to parse the data
        if(fileLine.length() != 0 && fileLine.at(0) == 'A')
        {
            std::string name, breed;
            int age, size, fur, id, species;
            char gender;
            bool isHypo;

            // All arguments besides fileLine.substr(2) passed by reference
            parseData(fileLine.substr(2), breed, name, size, age, gender, fur, isHypo, id, species);

            // Uses data from parseData() to build Animal instances
            Animal* newAnimal;
            newAnimal = new Animal(breed, name, size, age, gender, fur, isHypo, species);
            newAnimal->setIdNumber(id);
            animalStorage->add(newAnimal);

            if(id > largestId) { largestId = id; }
        }
    }

    animalStorage->setLargestId(largestId);
    infile.close();
}

/** Function: parseData(args)
 *  in: std::string fileLine
 *  in-out: Attributes for creation of animal instance
 *  Purpose: Takes the string fileLine and parses through it giving the
 *           values to the relevant function argument.
 *           Does this by creating substrings between the parenthesis
 * The order of the fileLine string is as follows:
 *              (Id)(Name)(Breed)(Species)(Age)(Size)(Gender)(Fur)(IsHypo) */
void Filesaver::parseData(std::string fileLine, std::string &breed, std::string &name,
                            int &size, int &age, char &gender, int &fur, bool &hypo, int &id, int &species)
{
    //std::cout << fileLine << std::endl;

    std::string strArray[NUM_OF_ATTRIBUTES];

    for(int i = 0; i < NUM_OF_ATTRIBUTES; ++i)
    {
        strArray[i] = fileLine.substr(fileLine.find("(") + 1, fileLine.find(")") - 1);
        fileLine = fileLine.substr(fileLine.find(")") + 1);
    }

    id = std::stoi(strArray[0], nullptr, 10);
    name = strArray[1];
    breed = strArray[2];
    species = std::stoi(strArray[3], nullptr, 10);
    age = std::stoi(strArray[4], nullptr, 10);
    size = std::stoi(strArray[5], nullptr, 10);
    gender = std::stoi(strArray[6], nullptr, 10);
    fur = std::stoi(strArray[7], nullptr, 10);
    hypo = std::stoi(strArray[8], nullptr, 10);

}
