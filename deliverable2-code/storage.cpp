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

/** Function: add(Client* newprofile)
    in: The new animal to be added to the Array
    out: animalId;
    Purpose: Adds a new client to the vector.
             Calls setIdNumber() to generate unique
             id for the animal if they have no Id */
int Storage::add(Client* newProfile)
{   
    int id = newProfile->getId();

    // If clientId is -1 then they don't have an id yet and need to be assigned one
    if (newProfile->getId() < 0) { id = getNextId(); newProfile->setIdNumber(id); }

    profileList.push_back(newProfile);
    ++numOfElements;

    return id;
}

/** Function: getNextId()
    out: The new id to give to the client
    Purpose: Gets a new unique id to give the client before it is stored
             Having a unique id is important for searching and storage in
             the database.
    Note: CLIENT_STARTING_ID is a constant. This ensures that if the list is completely
          emtied we can restart at the initial id without needing to worry about
          an animal having a non-unique id. */
int Storage::getNextId()
{
    if(numOfElements == 0) { largestId = CLIENT_STARTING_ID; }
    else { ++largestId; }

    return largestId;
}

/** Function getFormattedInfo()
    out: Formatted string of the info of all clients in array
    Purpose: Returns formatted animal info.
             Delegates individual animal formatting to client class */
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

/** Function: getProfileWithId(Client** foundProfile, int profileId)
 *  in: profileId
 *  in-out: Profile** foundProfile. NULL if profile with id not in list
 *  out: true if profile found, false otherwise */
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

/** Function: isProfileInStorage(int profileId)
 *  in: profileId
 *  Purpose: Searches through list to see if the animal is there
 *           Delegates to getProfileWithId() but doesn't return
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

/* Function: listInfo(int index)*
 * in: index
 * out: listInfo for client at index
   purpose: gets list info for client at index
            Used for listing clients in ClientView */
std::string Storage::listInfo(int index)
{
    return profileList.at((static_cast<unsigned int>(index)))->getListInfoStr();
}

/** Function: get(int index)
    in: index
    out: Client*
    purpose: Gets the client* for client at index
*/
Client* Storage::get(int index)
{
    return profileList.at(static_cast<unsigned int>(index));
}
