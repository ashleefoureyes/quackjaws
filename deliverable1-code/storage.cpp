#include "storage.h"
#include "animal.h"

#define STARTING_ID 1000;

#include <string>
#include <iostream>

/** Function: Storage()
    Purpose: Constructor. */
Storage::Storage()
{
    numOfElements = 0;
}

Storage::~Storage()
{
    for(std::list<Animal*>::iterator itera=animalList.begin(); itera != animalList.end(); ++itera)
    {
        delete (*itera);
    }
}

/** Function: add(Animal* newAnimal)
    in: The new animal to be added to the Array
    Purpose: Adds a new animal to the linked list.
             Calls setIdNumber() to generate unique
             id for the animal if they have no Id
    Optimization: If we store animals ordered by id number
                  and swap linkedList for an Array we can
                  do a binary search */
void Storage::add(Animal* newAnimal)
{
    // If animalId is -1 then they don't have an id yet and need to be assigned one
    if (newAnimal->getId() < 0) { newAnimal->setIdNumber(getNextId()); }

    animalList.push_back(newAnimal);
    ++numOfElements;
}

/** Function: getNextId()
    out: The new id to give to the animal
    Purpose: Gets a new unique id to give the animal before it is stored
             Having a unique id is important for searching and storage in
             the database.
    Note: STARTING_ID is a constant. This ensures that if the list is completely
          emtied we can restart at the initial id without needing to worry about
          an animal having a non-unique id. */
int Storage::getNextId()
{
    if(numOfElements == 0) { largestId = STARTING_ID; }
    else { ++largestId; }

    return largestId;
}

/** Function getFormattedInfo()
    out: Formatted string of the info of all animals in array
    Purpose: Returns formatted animal info.
             Delegates individual animal formatting to animal class */
std::string Storage::getFormattedInfo()
{
    std::string returnStr = "";

    for(std::list<Animal*>::iterator itera=animalList.begin(); itera != animalList.end(); ++itera)
    {
        returnStr += (*itera)->getFormattedInfo();
        returnStr += "\n";
    }

    return returnStr;
}

/** Function: getSaveInfo()
 *  out: Info formatted to save
 *  Purpose: Gets info for all animals in format that can be
 *           saved and parsed. While not easily readable it is
 *           better to parse at program startup */
std::string Storage::getSaveInfo()
{
    std::string returnStr = "";

    for(std::list<Animal*>::iterator itera=animalList.begin(); itera != animalList.end(); ++itera)
    {
        // A used to denote we have an animal when parsing data
        returnStr += "A:";
        returnStr += (*itera)->getSaveInfo();
        returnStr += "\n";
    }

    return returnStr;
}

/** Function: getAnimalWithId(Animal** foundAnimal, int animalId)
 *  in: animalId
 *  in-out: Animal** foundAnimal. NULL if animal with id not in list
 *  out: true if animal found, false otherwise */
bool Storage::getAnimalWithId(Animal** foundAnimal ,int animalId)
{
    for(std::list<Animal*>::iterator itera=animalList.begin(); itera != animalList.end(); ++itera)
    {
       if((*itera)->getId() == animalId)
       {
           *foundAnimal = (*itera);
           return true;
       }
    }

    *foundAnimal = nullptr;
    return false;
}

/** Function: isAnimalInStorage(int animalId)
 *  in: animalId
 *  Purpose: Searches through list to see if the animal is there
 *           Delegates to getAnimalWithId() but doesn't return
 *           the animal and only takes animalId as input parameter */
bool Storage::isAnimalInStorage(int animalId)
{
    Animal* animalPtr;
    return getAnimalWithId(&animalPtr, animalId);
}

/** Function: remove(Animal** removedAnimal, int animalId)
 *  in: animalId
 *  in-out: Animal** removedAnimal
 *  out: true if animal removed, false otherwise
 *  Purpose: Removes animal and returns it to in-out parameter variable
 *           Returns true if animal found
 *           Return false if animal not in list and sets removedAnimal to NULL */
bool Storage::remove(Animal** removedAnimal, int animalId)
{
    // Create temporary animal ptr to pass to getAnimalWithId()
    // The value in tempAnimal later gets transfered to Animal** removedAnimal
    Animal* tempAnimal;

    // Returns true if animal is found. &tempAnimal is also an in-out parameter
    // meaning that calling this function will put an animal instance in tempAnimal
    // if the animal with the id is found
    if(getAnimalWithId(&tempAnimal, animalId) == true)
    {
        *removedAnimal = tempAnimal;
        animalList.remove(tempAnimal);
        return true;
    }

    *removedAnimal = nullptr;
    return false;


}

/** Function: remove(int animalId)
 *  in: animalId
 *  out: true if removed, false otherwise
 *  Purpose: Finds and dereferenes the animal with that id
 *           Delegates removal of animal from list to remove(Animal**, int)
 *           Then handles the dereferencing on the in-out parameter */
bool Storage::remove(int animalId)
{
    Animal* animalToDel;

    // remove(Animal**, int) has Animal** as in-out parameter
    // if remove(Animal**, int) returns true then there will be
    // an animal in animalToDel which we can then dereference
    if (remove(&animalToDel, animalId))
    {
        delete animalToDel;
        return true;
    }

    return false;
}

/** Function setLargestId(int largestId)
 *  in: largestId
 *  Purpose: To be called when program is starting up.
 *           This ensures that all animals loaded in from
 *           a file retain their ID's while allowing all subsequent
 *           animals added to the list to have unique id's */
void Storage::setLargestId(int largestId)
{
    this->largestId = largestId;
}
