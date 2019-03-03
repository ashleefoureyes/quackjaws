#ifndef STORAGE_H
#define STORAGE_H

#define CLIENT_STARTING_ID 100

#include "client.h"

#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <vector>

class Storage
{
    public:
    Storage();
    ~Storage();
    void add(Client*);
    bool getProfileWithId(Client**, int);
    bool isProfileInStorage(int);
    int getNumOfElements();
    std::string listInfo(int);
    Client* get(int i);

    std::string getFormattedInfo();

    void setLargestId(int);

    private:
    int numOfElements;
    std::vector <Client*> profileList;
    int largestId;
    int getNextId();

};


#endif
