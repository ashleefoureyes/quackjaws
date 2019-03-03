#include "storage.h"
#include "animal.h"

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
    for(std::vector<Client*>::iterator itera=profileList.begin(); itera != profileList.end(); ++itera)
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
void Storage::add(Client* newProfile)
{
    // If animalId is -1 then they don't have an id yet and need to be assigned one
    if (newProfile->getId() < 0) { newProfile->setIdNumber(getNextId()); }

    profileList.push_back(newProfile);
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
    if(numOfElements == 0) { largestId = CLIENT_STARTING_ID; }
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

    for(std::vector<Client*>::iterator itera=profileList.begin(); itera != profileList.end(); ++itera)
    {
        returnStr += (*itera)->getFormattedInfo();
        returnStr += "\n";
    }

    return returnStr;
}

/** Function: getAnimalWithId(Animal** foundAnimal, int animalId)
 *  in: animalId
 *  in-out: Animal** foundAnimal. NULL if animal with id not in list
 *  out: true if animal found, false otherwise */
bool Storage::getProfileWithId(Client** foundProfile ,int profileId)
{
    for(std::vector<Client*>::iterator itera=profileList.begin(); itera != profileList.end(); ++itera)
    {
       if((*itera)->getId() == profileId)
       {
           *foundProfile = (*itera);
           return true;
       }
    }

    *foundProfile = nullptr;
    return false;
}

/** Function: isAnimalInStorage(int animalId)
 *  in: animalId
 *  Purpose: Searches through list to see if the animal is there
 *           Delegates to getAnimalWithId() but doesn't return
 *           the animal and only takes animalId as input parameter */
bool Storage::isProfileInStorage(int profileId)
{
    Client* profilePtr;
    return getProfileWithId(&profilePtr, profileId);
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

int Storage::getNumOfElements() { return numOfElements; }

std::string Storage::listInfo(int index)
{
    return profileList.at(index)->getListInfoStr();
}

Client* Storage::get(int index)
{
    return profileList.at(index);
}
