#include "clientstorage.h"
#include "animal.h"

#include <string>
#include <iostream>
#include <QTextStream>

/** Function: Storage()
    Purpose: Constructor. */
ClientStorage::ClientStorage()
{
    numOfElements = 0;
    largestId = CLIENT_STARTING_ID;
}

ClientStorage::~ClientStorage()
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
int ClientStorage::add(Client* newProfile)
{   
    int id = newProfile->getId();


    // If clientId is -1 then they don't have an id yet and need to be assigned one
    if(newProfile->getId() < 0) { newProfile->setIdNumber(getNextId()); }
    else { checkForLargestId(newProfile->getId()); }

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
int ClientStorage::getNextId()
{
    if(numOfElements == 0) { largestId = CLIENT_STARTING_ID; }
    else { ++largestId; }

    return largestId;
}

/** Function getFormattedInfo()
    out: Formatted string of the info of all clients in array
    Purpose: Returns formatted animal info.
             Delegates individual animal formatting to client class */
std::string ClientStorage::getFormattedInfo()
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
bool ClientStorage::getProfileWithId(Client** foundProfile ,int profileId)
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
bool ClientStorage::isProfileInStorage(int profileId)
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
void ClientStorage::setLargestId(int largestId)
{
    this->largestId = largestId;
}

int ClientStorage::getNumOfElements() { return numOfElements; }

/* Function: listInfo(int index)*
 * in: index
 * out: listInfo for client at index
   purpose: gets list info for client at index
            Used for listing clients in ClientView */
std::string ClientStorage::listInfo(int index)
{
    return profileList.at((static_cast<unsigned int>(index)))->getListInfoStr();
}

/** Function: get(int index)
    in: index
    out: Client*
    purpose: Gets the client* for client at index
*/
Client* ClientStorage::get(int index)
{
    return profileList.at(static_cast<unsigned int>(index));
}

void ClientStorage::get(Client** client, int index)
{
    *client = profileList.at(static_cast<unsigned int>(index));
}

void ClientStorage::checkForLargestId(int clientId)
{
    // Removes leading number and checks if the Id is largest than the current largest
    // If it is larger then it sets that to the new largestId
    int rawId = std::stoi((std::to_string(clientId)).substr(1));
    if(rawId > largestId) { largestId = rawId; }
}

bool ClientStorage::isEmailInStorage(std::string email)
{
    for(std::vector<Client*>::iterator itera=profileList.begin(); itera != profileList.end(); ++itera)
    {
        if((*itera)->getEmail() == email) { return true; }
    }

    return false;
}
