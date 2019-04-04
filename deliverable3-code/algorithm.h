#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <map>
#include <vector>

#include "match.h"
#include "animalstorage.h"
#include "clientstorage.h"
#include "animal.h"

class Algorithm
{
public:
    Algorithm();
    void runAlgorithm(std::map<int, std::vector<Match*>> *matches, AnimalStorage *animalStorage, ClientStorage *clientStorage);
};

#endif // ALGORITHM_H
