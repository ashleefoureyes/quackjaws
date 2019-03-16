#ifndef CLIENTSTORAGE_H
#define CLIENTSTORAGE_H

#define CLIENT_STARTING_ID 100

#include "client.h"

#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <vector>

class ClientStorage
{
    public:
    ClientStorage();
    ~ClientStorage();
    int add(Client*);
    bool getProfileWithId(Client**, int);
    bool isProfileInStorage(int);
    int getNumOfElements();
    std::string listInfo(int);
    Client* get(int i);
    void get(Client** client, int index);

    std::string getFormattedInfo();
    bool isEmailInStorage(std::string email);
    int getIdOfMatchingEmail(std::string email);

    void setLargestId(int);

    private:
    int numOfElements;
    std::vector <Client*> profileList;
    int largestId;

    int getNextId();
    void checkForLargestId(int id);

};


#endif
