#include "algorithm.h"
#include <QtMath>
#include <QTextStream>


Algorithm::Algorithm()
{

}

/** function runAlgorithm(...)
 *  in: AnimalStorage *animalStorage, ClientStorage *clientStorage
 *  in-out: map<int, std::vector<Match*>> *matches, std::vector<Match*> optimalMatches
 *  Purpose: To be called by another class to run the matching algorithm. Puts all matches in the map with
 *           the clientId as the key.
 *
 * Optimal matches go in std::vector *optimalMatches. This vector should only contain one Match object per client
 *           in clientStorage
*/
void Algorithm::runAlgorithm(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, AnimalStorage *animalStorage, ClientStorage *clientStorage)
{
    Client* currentClient;

    for (int i = 0; i < clientStorage->getNumOfElements(); ++i) {
        for (int j = 0; j < animalStorage->getSize(); ++j) {

            // calculate the match score value for the animal-client pair
            double score = computeDistance(animalStorage->get(j), clientStorage->get(i));

            currentClient = clientStorage->get(i);
            Match *match = new Match(currentClient, animalStorage->get(j), score);

            // If the key is not in the dictionary, then make the value a new vector that holds Match pointers
            // and add the first match to the vector
            if(matches->count(currentClient->getId()) == 0)
            {
                matches->insert(std::pair<int, std::vector<Match*>>(currentClient->getId(), std::vector<Match*>()));
                matches->at(currentClient->getId()).push_back(match);
            }
            // If the key already exists then just add the match to the back of the vector
            else { matches->at(currentClient->getId()).push_back(match); }
        }
    }
}


double Algorithm::computeDistance(Animal *a, Client *c){
    double distance = 0;
    double sum = 0;
    //breed

    //General Animal Preferences
    sum += qPow(c->getTravels() - a->getTravels(), 2);
    sum += qPow(c->getHasChildren() - a->getChildren(), 2);
    sum += qPow(c->getHasAnimals() - a->getGoodWAnimals(), 2);
    sum += qPow(c->getStrangers() - a->getStrangers(), 2);
    sum += qPow(c->getCrowds() - a->getCrowds(), 2);
    sum += qPow(c->getNoises() - a->getNoises(), 2);
    sum += qPow(c->getProtector() - a->getProtector(), 2);
    sum += qPow(c->getEnergy() - a->getEnergy(), 2);
    sum += qPow(c->getFearful() - a->getFearful(), 2);
    sum += qPow(c->getAffection() - a->getAffection(), 2);
    sum += qPow(c->getMessy() - a->getMessy(), 2);
    sum += qPow(c->getDwelling() - a->getLifestyle(), 2);
    sum += qPow(c->getWorkSchedule() - a->getNocturnal(), 2);

    //Dog Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "dog", Qt::CaseInsensitive)){
        Dog *d = static_cast<Dog*>(a);
        //sum += qPow(c->getWantsDog() - a->ge(), 2);
        //sum += qPow(c->getHasDogAllergies() - a->getGoodWAnimals(), 2);
        sum += qPow(c->getDogAge() - d->getAge(), 2);
        sum += qPow(c->getDogSize() - d->getSize(), 2);
        sum += qPow(c->getDogGender() - d->getGender(), 2);
        sum += qPow(c->getDogFur() - d->getFur(), 2);
        sum += qPow(c->getQuietness() - d->getBarks(), 2);
        sum += qPow(c->getFollowsCommandsDog() - d->getTraining(), 2);
        sum += qPow(c->getHouseTrained() - d->getIsBathroomTrained(), 2);

    } //Cat Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "cat", Qt::CaseInsensitive)){
        Cat *cat = static_cast<Cat*>(a);
        //sum += qPow(c->getWantsCat() - cat->ge(), 2);
        //sum += qPow(c->getHasCatAllergies() - cat->getGoodWAnimals(), 2);
        sum += qPow(c->getCatAge() - cat->getAge(), 2);
        sum += qPow(c->getCatSize() - cat->getSize(), 2);
        sum += qPow(c->getCatGender() - cat->getGender(), 2);
        sum += qPow(c->getCatFur() - cat->getFur(), 2);
        sum += qPow(c->getIsCurious() - cat->getCuriosity(), 2);
        sum += qPow(c->getFollowCommandsCat() - cat->getTrained(), 2);
        sum += qPow(c->getDoesntShed() - cat->getShedding(), 2);

    } //Bird Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "bird", Qt::CaseInsensitive)){
        Bird *b = static_cast<Bird*>(a);
        //sum += qPow(c->getWantsBird() - a->ge(), 2);
        //sum += qPow(c->getHasBirdAllergies() - a->getGoodWAnimals(), 2);
        sum += qPow(c->getBirdAge() - b->getAge(), 2);
        sum += qPow(c->getBirdSize() - b->getSize(), 2);
        sum += qPow(c->getBirdGender() - b->getGender(), 2);
        sum += qPow(c->getBirdFur() - b->getFur(), 2);
       // sum += qPow(c->getBirdColour() - b->getColour(), 2);
        sum += qPow(c->getIsQuietBird() - b->getLoud(), 2);
        sum += qPow(c->getIsSocialBird() - b->getSocial(), 2);

    } //Lizard Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "lizard", Qt::CaseInsensitive)){
        Lizard *l = static_cast<Lizard*>(a);
        //sum += qPow(c->getWantsLizard() - a->ge(), 2);
        //sum += qPow(c->getHasLizardAllergies() - a->getGoodWAnimals(), 2);
        sum += qPow(c->getLizardAge() - l->getAge(), 2);
        sum += qPow(c->getLizardSize() - l->getSize(), 2);
        sum += qPow(c->getLizardGender() - l->getGender(), 2);
        sum += qPow(c->getLizardFur() - l->getFur(), 2);
        //sum += qPow(c->getLizardColour() - l->getColour(), 2);
        //sum += qPow(c->getEasyToFeed() - l->getFeedingInterval(), 2);
        sum += qPow(c->getSimpleLiving() - l->getLightingReqs(), 2);

    } //Rabbit Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "rabbit", Qt::CaseInsensitive)){
        Rabbit *r = static_cast<Rabbit*>(a);
        //sum += qPow(c->getWantsRabbit() - a->ge(), 2);
        //sum += qPow(c->getHasRabbitAllergies() - a->getGoodWAnimals(), 2);
        sum += qPow(c->getRabbitAge() - r->getAge(), 2);
        sum += qPow(c->getRabbitSize() - r->getSize(), 2);
        sum += qPow(c->getRabbitGender() - r->getGender(), 2);
        sum += qPow(c->getRabbitFur() - r->getFur(), 2);
        //sum += qPow(c->getRabbitColour() - r->getColour(), 2);
        //sum += qPow(c->getIsSocialRabbit() - r->get, 2);
        sum += qPow(c->getNeedsGrooming() - r->getGrooming(), 2);

    }
    QTextStream cerr(stderr);
    distance = qSqrt(sum);
    cerr << "Distance for " << QString::fromStdString(a->getName()) << "and" << QString::fromStdString(c->getFullName()) <<"is: " << distance;
    return distance;
}

/*
Urban Dweller
    {0,2,2,1,4,4,0,2,2,2,1,True,0}

Cuddly Companion
    optimal array: {1,2,2,1,1,1,1,1,1,4,2,True,0}

Fierce Convoy
    optimal array: {4,2,0,0,1,3,4,4,0,1,2,False,2}

Experienced Sidekick
    optimal array: {2,4,2,2,3,4,1,1,2,3,0,True,0}

{size,age,children,goodWAnimals,crowds,noises,protector,energy,fearful,affection,messy,hypo,lifestyle}

*/

double Algorithm::categorize(Animal* a){
  double distance, rural, family, urban, cuddle, fierce, exper = 0;
  double rurDist, famDist, urbDist, cudDist, fierDist, expDist = 0;

    // Rural Rovers optimal array: {4,2,2,4,2,3,3,4,0,1,4,False,1}
    rural += qPow(4 - a->getSize(), 2);
    rural += qPow(2 - a->getAge(), 2);
    rural += qPow(2 - a->getChildren(), 2);
    rural += qPow(4 - a->getGoodWAnimals(), 2);
    rural += qPow(2 - a->getCrowds(), 2);
    rural += qPow(3 - a->getNoises(), 2);
    rural += qPow(3 - a->getProtector(), 2);
    rural += qPow(4 - a->getEnergy(), 2);
    rural += qPow(0 - a->getFearful(), 2);
    rural += qPow(1 - a->getAffection(), 2);
    rural += qPow(4 - a->getMessy(), 2);
    rural += qPow(0 - a->isHypo(), 2); //false
    rural += qPow(1 - a->getLifestyle(), 2);
    rurDist = qSqrt(rural);

    // Family Pal optimal array: {3,1,4,3,3,4,2,3,1,3,2,False,2}
    family += qPow(4 - a->getSize(), 2);
    family += qPow(2 - a->getAge(), 2);
    family += qPow(2 - a->getChildren(), 2);
    family += qPow(4 - a->getGoodWAnimals(), 2);
    family += qPow(2 - a->getCrowds(), 2);
    family += qPow(3 - a->getNoises(), 2);
    family += qPow(3 - a->getProtector(), 2);
    family += qPow(4 - a->getEnergy(), 2);
    family += qPow(0 - a->getFearful(), 2);
    family += qPow(1 - a->getAffection(), 2);
    family += qPow(4 - a->getMessy(), 2);
    family += qPow(0 - a->isHypo(), 2); //false
    family += qPow(1 - a->getLifestyle(), 2);
    famDist = qSqrt(family);

    urban += qPow(4 - a->getSize(), 2);
    urban += qPow(2 - a->getAge(), 2);
    urban += qPow(2 - a->getChildren(), 2);
    urban += qPow(4 - a->getGoodWAnimals(), 2);
    urban += qPow(2 - a->getCrowds(), 2);
    urban += qPow(3 - a->getNoises(), 2);
    urban += qPow(3 - a->getProtector(), 2);
    urban += qPow(4 - a->getEnergy(), 2);
    urban += qPow(0 - a->getFearful(), 2);
    urban += qPow(1 - a->getAffection(), 2);
    urban += qPow(4 - a->getMessy(), 2);
    urban += qPow(0 - a->isHypo(), 2); //false
    urban += qPow(1 - a->getLifestyle(), 2);
    urbDist = qSqrt(urban);

    cuddle += qPow(4 - a->getSize(), 2);
    cuddle += qPow(2 - a->getAge(), 2);
    cuddle += qPow(2 - a->getChildren(), 2);
    cuddle += qPow(4 - a->getGoodWAnimals(), 2);
    cuddle += qPow(2 - a->getCrowds(), 2);
    cuddle += qPow(3 - a->getNoises(), 2);
    cuddle += qPow(3 - a->getProtector(), 2);
    cuddle += qPow(4 - a->getEnergy(), 2);
    cuddle += qPow(0 - a->getFearful(), 2);
    cuddle += qPow(1 - a->getAffection(), 2);
    cuddle += qPow(4 - a->getMessy(), 2);
    cuddle += qPow(0 - a->isHypo(), 2); //false
    cuddle += qPow(1 - a->getLifestyle(), 2);
    cudDist = qSqrt(cuddle);

    fierce += qPow(4 - a->getSize(), 2);
    fierce += qPow(2 - a->getAge(), 2);
    fierce += qPow(2 - a->getChildren(), 2);
    fierce += qPow(4 - a->getGoodWAnimals(), 2);
    fierce += qPow(2 - a->getCrowds(), 2);
    fierce += qPow(3 - a->getNoises(), 2);
    fierce += qPow(3 - a->getProtector(), 2);
    fierce += qPow(4 - a->getEnergy(), 2);
    fierce += qPow(0 - a->getFearful(), 2);
    fierce += qPow(1 - a->getAffection(), 2);
    fierce += qPow(4 - a->getMessy(), 2);
    fierce += qPow(0 - a->isHypo(), 2); //false
    fierce += qPow(1 - a->getLifestyle(), 2);
    fierDist = qSqrt(fierce);

    exper += qPow(4 - a->getSize(), 2);
    exper += qPow(2 - a->getAge(), 2);
    exper += qPow(2 - a->getChildren(), 2);
    exper += qPow(4 - a->getGoodWAnimals(), 2);
    exper += qPow(2 - a->getCrowds(), 2);
    exper += qPow(3 - a->getNoises(), 2);
    exper += qPow(3 - a->getProtector(), 2);
    exper += qPow(4 - a->getEnergy(), 2);
    exper += qPow(0 - a->getFearful(), 2);
    exper += qPow(1 - a->getAffection(), 2);
    exper += qPow(4 - a->getMessy(), 2);
    exper += qPow(0 - a->isHypo(), 2); //false
    exper += qPow(1 - a->getLifestyle(), 2);
    expDist = qSqrt(exper);

   // return qMin(rurDist, famDist, urbDist, cudDist, fierDist, expDist);

    return 0;
}

std::map<int, std::vector<Match*>> countMatches (std::map<int, std::vector<Match*>> *matches,
        double matchThreshold) {
    std::map<int, int> matchCounts;
    std::map<int, std::vector<Match*>>::iterator mIter;

    for (mIter = *matches.begin(); mIter < *matches.end(); mIter++) {
        int clientId = mIter->first;
        std::vector<Match*>::iterator vIter;

        for (vIter = mIter->d.begin(); vIter < mIter->second.end(); vIter++) {
            if (vIter->getScore() <= matchThreshold) {
                if(matchCounts.count(clientId) == 0) {
                    matchCounts.insert(std::pair<int, std::vector<Match*>>(clientId, std::vector<Match*>()));
                    matchCounts.at(clientId).push_back(vIter);
                }
                else {
                    matchCounts.at(clientId).push_back(vIter);
                }
            }
        }
    }
    return matchCounts;
}

void makeMatch(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches, int clientId, Match *match) {
        // Add match to optimal matches
        // Remove client from matches map
        // Loop through remaining clients in matches map and remove the
        // match from their vector where the animal in `match` is the same
        // as the animal in the match that client's vector
}

void computeOptimalMatches(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches) {
    double matchThreshold = 4.00;
    while (matchThreshold < 11.00) {
        // Count number of matches for remaining clients
        std::map<int, std::vector<Match*>> matchCounts = countMatches(matches, matchThreshold);
        // Keep matching those with only one match until none left or there
        // exists only clients with 2+ matches. In that case match one client
        // based on their lowest score and keep matching those with only one match.
        std::map<int, std::vector<Match*>>::iterator iter;
        for (iter = matchCounts.begin(); iter < matchCounts.end; iter++) {
            if (iter->second == 1) {
                makeMatch(matches, optimalMatches, iter->first, )
            }
        }
        // Repeat until no clients remain in match count
        // Increment matchThreshold by 1.00 and do it all again.
        matchThreshold += 1.00;
    }

}
