#ifndef STORAGE_H
#define STORAGE_H

#include "animal.h"

#include <string>
#include <iostream>
#include <list>
#include <iterator>

class Storage
{
    public:
    Storage();
    ~Storage();
    void add(Animal*);
    bool remove(int);
    bool remove(Animal**, int);
    bool getAnimalWithId(Animal**, int);
    bool isAnimalInStorage(int);
    std::string getFormattedInfo();
    std::string getSaveInfo();

    void setLargestId(int);

    private:
    int numOfElements;
    std::list <Animal*> animalList;
    int largestId;
    int getNextId();

};


#endif
