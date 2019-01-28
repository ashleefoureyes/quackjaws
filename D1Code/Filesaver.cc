#include "Filesaver.h"

#include <iostream>
#include <string>
#include <fstream>

/** Function: saveToFile(string fileName, animalStorage)
 *  in: string fileName, Storage* animalStorage
 *  out: N/A
 * 
 *  Purpose: Takes all the animal information from the animalStorage
 *           object and saves it to a text file.
 *           Uses animalStorage's getSaveInfo() function to get
 *           the formatted string to save
*/
void Filesaver::saveToFile(std::string fileName, Storage* animalStorage)
{
    std::ofstream outfile(fileName);
    outfile << animalStorage->getSaveInfo() << std::endl;
    outfile.close();
}

/** Function: readFromFile(string fileName, Storage* animalStorage)
 *  in: fileName
 *  in-out: Storage* animalStorage
 *  out: N/A
 * 
 *  Purpose: Loads the file and reads through each line.
 *           Every line of the file is a different Animal object
 *           that gets passed to parseData(). Once the attributes are
 *           parsed from the data it creates a new Animal instane and puts
 *           the pointer in the Storage* passed as an argument
*/
void Filesaver::readFromFile(std::string fileName, Storage* animalStorage)
{
    // ######################################
    // TODO: If no file in directory with name of fileName
    //       program will not start correctly
    // ######################################
    std::ifstream infile(fileName, std::ifstream::in);

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
            int age, size, fur, id;
            char gender;
            bool isHypo;

            // All arguments besides fileLine.substr(2) passed by reference
            parseData(fileLine.substr(2), breed, name, size, age, gender, fur, isHypo, id); 
            
            // Uses data from parseData() to build Animal instances
            Animal* newAnimal;
            newAnimal = new Animal(breed, name, size, age, gender, fur, isHypo);
            newAnimal->setIdNumber(id);
            animalStorage->add(newAnimal);

            if(id > largestId) { largestId = id; }
        }
    }

    animalStorage->setLargestId(largestId);
}

/** Function: parseData(args)
 *  in: std::string fileLine
 *  in-out: Attributes for creation of animal instance
 *  out: N/A
 * 
 *  Purpose: Takes the string fileLine and parses through it giving the
 *           values to the relevant function argument.
 *           Does this by creating substrings between the parenthesis
 * 
 * The order of the fileLine string is as follows:
 *              (Id)(Name)(Breed)(Age)(Size)(Gender)(Fur)(IsHypo)
*/
void Filesaver::parseData(std::string fileLine, std::string &breed, std::string &name, 
                            int &size, int &age, char &gender, int &fur, bool &hypo, int &id)
{
    // ID
    id = std::stoi(fileLine.substr(fileLine.find("(") + 1, fileLine.find(")") - 1), nullptr, 10);
    std::string cutString = fileLine.substr(fileLine.find(")") + 1);
    
    // Name
    name = cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Breed
    breed = cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Age
    age = std::stoi(cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1), nullptr, 10);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Size
    size = std::stoi(cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1), nullptr, 10);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Gender
    gender = std::stoi(cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1), nullptr, 10);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Fur
    fur = std::stoi(cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1), nullptr, 10);
    cutString = cutString.substr(cutString.find(")") + 1);

    // Is hypoallergenic
    hypo = std::stoi(cutString.substr(cutString.find("(") + 1, cutString.find(")") - 1), nullptr, 10);
}
