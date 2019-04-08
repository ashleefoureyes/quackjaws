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
    void runAlgorithm(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, AnimalStorage *animalStorage, ClientStorage *clientStorage);
    void test(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches);

private:
    double computeMatchScore(Animal*, Client*);
    std::string categorizeAnimal(Animal*);
    std::string categorizeClient(Client*);
    void computeOptimalMatches(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches);
    std::map<int, std::vector<Match*>>* countMatches (std::map<int, std::vector<Match*>> *matches, double matchThreshold);
    void makeMatch(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int clientId, Match *match, std::map<int, std::vector<Match*>> *matchCounts);

};
#endif // ALGORITHM_H
