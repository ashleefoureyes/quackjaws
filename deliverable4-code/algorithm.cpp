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
    cerr << "Distance for " << a->getName() << "and" << c->getFullName() "is: " << distance;
    return distance;
}
