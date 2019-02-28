#ifndef STORAGE_H
#define STORAGE_H

#define STARTING_ID 100;

#include "profile.h"

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
    void add(Profile*);
    bool remove(int);
    bool remove(Profile**, int);
    bool getProfileWithId(Profile**, int);
    bool isProfileInStorage(int);
    int getNumOfElements();
    std::string listInfo(int);
    Profile* get(int i);

    std::string getFormattedInfo();

    void setLargestId(int);

    private:
    int numOfElements;
    std::vector <Profile*> profileList;
    int largestId;
    int getNextId();

};


#endif
