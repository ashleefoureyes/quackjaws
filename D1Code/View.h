#ifndef VIEW_H
#define VIEW_H

#include "Storage.h"

#include <iostream>
#include <string>

class View
{
    public:
    int displayMenu();
    void getAnimalInfoFromUser(std::string &breed, std::string &name, int &size, int &age, char &gender, int &fur, bool &hypo);
    void viewAnimals(Storage*);
    int getIdForAnimal();
};

#endif