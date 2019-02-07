#ifndef FILESAVER_H
#define FILESAVER_H

#include <iostream>
#include <string>

#include "Storage.h"
#include "Animal.h"

#define NUM_OF_ATTRIBUTES 9

class Filesaver
{
    public:
    void saveToFile(std::string, Storage*);
    void readFromFile(std::string, Storage*);

    private:
    void parseData(std::string fileLine, std::string &breed, std::string &name, 
                    int &size, int &age, char &gender, int &fur, bool &hypo, int &id, int &species);
};

#endif