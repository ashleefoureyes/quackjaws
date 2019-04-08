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
    double auxScore = 0;
    bool badMatch = false;

    //General Animal Preferences
    sum += qPow(c->getTravels() - a->getTravels(), 2);
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

    if(c->getWorkSchedule() != 0 && a->getNocturnal()){ auxScore -= 1; }

//    if(a->getChildren() >= 3 && c->getHasChildren()) {auxScore += 1;}
//    if(a->getChildren() == 0 && c->getHasChildren()) {auxScore -= 1; }
    sum += qPow(a->getChildren(), c->getChildren());

//    if(a->getGoodWAnimals() >= 3 && c->getHasAnimals()) {auxScore += 1;}
//    if(a->getGoodWAnimals() == 0 && c->getHasAnimals()) {auxScore -=1;}
    sum += qPow(a->getGoodWAnimals(), c->getGoodWAnimals());

//    if(a->getEnergy() >= 3 && c->getActivity() >= 3) { auxScore +=1; }
//    if(a->getEnergy() <= 2 && c->getActivity() <= 2) { auxScore +=1; }
    sum += qPow(a->getEnergy(), c->getEnergy());


//    if(a->getEnergy() == 0 && c->getActivity() >= 3) { auxScore -=1; }
//    if(a->getEnergy() >= 3 && c->getActivity() == 0) { auxScore -=1; }
    sum += qPow(a->getEnergy(), c->getActivity());



    //Dog Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "dog", Qt::CaseInsensitive)){
        Dog *d = static_cast<Dog*>(a);
        if (c->getWantsDog()){
            if(c->getHasDogAllergies() && !d->getIsHypoAllergenic()){ auxScore -= 5; }

            int dogGender = 0;
            if(d->getGender() == 'M') {dogGender = 1;}
            else { dogGender = 5; }

            sum += qPow(dogGender, c->getDogGender());

            std::vector<std::string> breeds = c->getDogBreeds();
            if(std::find(breeds.begin(), breeds.end(), d->getBreed()) != breeds.end()){ auxScore +=2; }

            sum += qPow(d->getSize(), c->getDogSize());
            sum += qPow(d->getFur(), c->getDogFur());

            int bathTrained = 0;
            if(d->getIsBathroomTrained()) {bathTrained = 5;}
            else { bathTrained = 0; }

            sum += qPow(bathTrained, c->getHouseTrained());

            sum+= qPow(d->getTraining() >= 3, c->getFollowsCommandsDog());

            sum += qPow(d->getBarks(), c->getQuietness());

            if(d->getBarks() >= 4 && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}

        } else { badMatch = true; }
    }

    //Cat Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "cat", Qt::CaseInsensitive)){
        Cat *cat = static_cast<Cat*>(a);
        if (c->getWantsCat()){
            if(c->getHasCatAllergies() && !cat->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getCatBreeds();
            if(std::find(breeds.begin(), breeds.end(), cat->getBreed()) != breeds.end()){ auxScore +=2; }

            int catGender = 0;
            if(cat->getGender() == 'M') {catGender = 1;}
            else { catGender = 5; }

            sum += qPow(catGender, c->getCatGender());

            sum += qPow(cat->getSize(), c->getCatSize());
            sum += qPow(cat->getFur(), c->getCatFur());

            sum += qPow(cat->getCuriosity(), c->getIsCurious());

            sum += qPow(cat->getTrained(), c->getFollowCommandsCat());

            sum += qPow(cat->getShedding(), c->getDoesntShed());

        } else { badMatch = true; }
    }

    //Bird Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "bird", Qt::CaseInsensitive)){
        Bird *b = static_cast<Bird*>(a);
        if (c->getWantsBird()){
            if(c->getHasBirdAllergies() && !b->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getBirdBreeds();
            if(std::find(breeds.begin(), breeds.end(), b->getBreed()) != breeds.end()){ auxScore +=2; }

            int birdGender = 0;
            if(b->getGender() == 'M') {birdGender = 1;}
            else { birdGender = 5; }

            sum += qPow(birdGender, c->getBirdGender());

            sum += qPow(b->getSize(), c->getBirdSize());
            sum += qPow(b->getFur(), c->getBirdFur());

            if (QString::compare(QString::fromStdString(c->getBirdColour()), QString::fromStdString(b->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            sum += qPow(b->getLoud(), c->getIsQuietBird());

            sum += qPow(b->getSocial(), c->getIsSocialBird());

            if(b->getLoud() && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}

        } else { badMatch = true; }
    }

    //Lizard Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "lizard", Qt::CaseInsensitive)){
        Lizard *l = static_cast<Lizard*>(a);
        if (c->getWantsLizard()){
            if(c->getHasLizardAllergies() && !l->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getLizardBreeds();
            if(std::find(breeds.begin(), breeds.end(), l->getBreed()) != breeds.end()){ auxScore +=2; }

            int lizGender = 0;
            if(l->getGender() == 'M') {lizGender = 1;}
            else { lizGender = 5; }

            sum += qPow(lizGender, c->getLizardGender());

            sum += qPow(l->getSize(), c->getLizardSize());
            sum += qPow(l->getFur(), c->getLizardFur());

            if (QString::compare(QString::fromStdString(c->getLizardColour()), QString::fromStdString(l->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            if((l->getLightingReqs() || l->getSpaceReqs()) && c->getSimpleLiving() >= 3) { auxScore +=1; }
            if((l->getLightingReqs() || l->getSpaceReqs()) && c->getSimpleLiving() == 0) { auxScore -=1; }

            int simple = 0;
            if (l->getLightingReqs() || l->getSpaceReqs()) { simple = 5; }
            if (!l->getLightingReqs() || l->getSpaceReqs()) { simple = 5; }
            if (l->getLightingReqs() || !l->getSpaceReqs()) { simple = 5; }
            else { simple = 0; }

            sum += qPow(simple, c->getSimpleLiving());

            int feed = 0;
            if((l->getDiet() == "Mice" || l->getFeedingInterval() == "Daily")) { feed = 5; }
            if((l->getDiet() == "Mice" || l->getFeedingInterval() != "Daily")) { feed = 3; }
            if((l->getDiet() != "Mice" || l->getFeedingInterval() == "Daily")) { feed = 3; }
            else { feed = 0; }

            sum += qPow(feed, c->getEasyToFeed());

            if(l->getSpaceReqs() && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}


        } else { badMatch = true; }
    }

    //Rabbit Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "rabbit", Qt::CaseInsensitive)){
        Rabbit *r = static_cast<Rabbit*>(a);
        if (c->getWantsRabbit()){
            if(c->getHasRabbitAllergies() && !r->getIsHypoAllergenic()){ auxScore -= 5; }

            int rabGender = 0;
            if(r->getGender() == 'M') {rabGender = 1;}
            else { rabGender = 5; }

            sum += qPow(rabGender, c->getRabbitGender());

            sum += qPow(r->getSize(), c->getRabbitSize());
            sum += qPow(r->getFur(), c->getRabbitFur());

            if (QString::compare(QString::fromStdString(c->getRabbitColour()), QString::fromStdString(r->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            sum += qPow(r->getGrooming(), c->getNeedsGrooming());
            sum += qPow(r->getAttention(), c->getIsSocialRabbit());

        } else { badMatch = true; }
    }
    QTextStream cerr(stderr);
    distance = qSqrt(sum);
    cerr << "Distance for " << QString::fromStdString(a->getName()) << "and" << QString::fromStdString(c->getFullName()) <<"is: " << distance;

    //if animalCategory = clientCategory then auxScore += 5
    distance -= auxScore;

    if (distance < 0) {distance = 0;}

    if (badMatch) { distance = -1;}
    return distance;
}



/*
 *
 * { dwelling, location, workSchedule, activity, hasChildren, hasAnimals }
 *
 */
double Algorithm:: categorize(Client* c){
    double distance = 0, rural = 0, family = 0, urban = 0, cuddle = 0, fierce = 0, exper = 0;
    double rurDist = 0, famDist = 0, urbDist = 0, cudDist = 0, fierDist = 0, expDist = 0;

    // Rural Rovers client optimal array: {4,2,5,4,True,True}
    rural += qPow(4 - c->getDwelling(),2);
    rural += qPow(2 - c->getLocation(),2);
    rural += qPow(5 - c->getWorkSchedule(),2);
    rural += qPow(4 - c->getActivity(),2);
    rural += qPow(1 - c->getHasChildren(),2);
    rural += qPow(1 - c->getHasAnimals(),2);
    rurDist = qSqrt(rural);

    // Family Pal client optimal array: {3,1,0,2,True,True}
    family += qPow(3 - c->getDwelling(),2);
    family += qPow(1 - c->getLocation(),2);
    family += qPow(0 - c->getWorkSchedule(),2);
    family += qPow(2 - c->getActivity(),2);
    family += qPow(1 - c->getHasChildren(),2);
    family += qPow(1 - c->getHasAnimals(),2);
    famDist = qSqrt(family);

    // Urban Dweller client optimal array {0,0,0,1,False,False}
    urban += qPow(0 - c->getDwelling(),2);
    urban += qPow(0 - c->getLocation(),2);
    urban += qPow(0 - c->getWorkSchedule(),2);
    urban += qPow(1 - c->getActivity(),2);
    urban += qPow(0 - c->getHasChildren(),2);
    urban += qPow(0 - c->getHasAnimals(),2);
    urbDist = qSqrt(urban);

    // Cuddly Companion client optimal array: {2,1,5,1,True,False}
    cuddle += qPow(2 - c->getDwelling(),2);
    cuddle += qPow(1 - c->getLocation(),2);
    cuddle += qPow(5 - c->getWorkSchedule(),2);
    cuddle += qPow(1 - c->getActivity(),2);
    cuddle += qPow(1 - c->getHasChildren(),2);
    cuddle += qPow(0 - c->getHasAnimals(),2);
    cudDist = qSqrt(cuddle);

    // Fierce Convoy optimal array: {3,1,3,3,False,False}
    fierce += qPow(3 - c->getDwelling(),2);
    fierce += qPow(1 - c->getLocation(),2);
    fierce += qPow(3 - c->getWorkSchedule(),2);
    fierce += qPow(3 - c->getActivity(),2);
    fierce += qPow(0 - c->getHasChildren(),2);
    fierce += qPow(0 - c->getHasAnimals(),2);
    fierDist = qSqrt(fierce);

    // Experienced Sidekick client optimal array: {1,0,6,0,False,False}
    exper += qPow(1 - c->getDwelling(),2);
    exper += qPow(0 - c->getLocation(),2);
    exper += qPow(6 - c->getWorkSchedule(),2);
    exper += qPow(0 - c->getActivity(),2);
    exper += qPow(0 - c->getHasChildren(),2);
    exper += qPow(0 - c->getHasAnimals(),2);
    expDist = qSqrt(exper);

    return distance;

}

/*

{size,age,children,goodWAnimals,crowds,noises,protector,energy,fearful,affection,messy,hypo,lifestyle}

*/

double Algorithm::categorize(Animal* a){
  double distance = 0, rural = 0, family = 0, urban = 0, cuddle = 0, fierce = 0, exper = 0;
  double rurDist = 0, famDist = 0, urbDist = 0, cudDist = 0, fierDist = 0, expDist = 0;

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
    family += qPow(3 - a->getSize(), 2);
    family += qPow(1 - a->getAge(), 2);
    family += qPow(4 - a->getChildren(), 2);
    family += qPow(3 - a->getGoodWAnimals(), 2);
    family += qPow(3 - a->getCrowds(), 2);
    family += qPow(4 - a->getNoises(), 2);
    family += qPow(2 - a->getProtector(), 2);
    family += qPow(3 - a->getEnergy(), 2);
    family += qPow(1 - a->getFearful(), 2);
    family += qPow(3 - a->getAffection(), 2);
    family += qPow(2 - a->getMessy(), 2);
    family += qPow(0 - a->isHypo(), 2); //false
    family += qPow(2 - a->getLifestyle(), 2);
    famDist = qSqrt(family);

   // Cuddly Companion optimal array: {1,2,2,1,1,1,1,1,1,4,2,True,0}
    cuddle += qPow(1 - a->getSize(), 2);
    cuddle += qPow(2 - a->getAge(), 2);
    cuddle += qPow(2 - a->getChildren(), 2);
    cuddle += qPow(1 - a->getGoodWAnimals(), 2);
    cuddle += qPow(1 - a->getCrowds(), 2);
    cuddle += qPow(1 - a->getNoises(), 2);
    cuddle += qPow(1 - a->getProtector(), 2);
    cuddle += qPow(1 - a->getEnergy(), 2);
    cuddle += qPow(1 - a->getFearful(), 2);
    cuddle += qPow(4 - a->getAffection(), 2);
    cuddle += qPow(2 - a->getMessy(), 2);
    cuddle += qPow(1 - a->isHypo(), 2); //false
    cuddle += qPow(0 - a->getLifestyle(), 2);
    cudDist = qSqrt(cuddle);

    // Urban Dweller {0,2,2,1,4,4,0,2,2,2,1,True,0}
    urban += qPow(0 - a->getSize(), 2);
    urban += qPow(2 - a->getAge(), 2);
    urban += qPow(2 - a->getChildren(), 2);
    urban += qPow(1 - a->getGoodWAnimals(), 2);
    urban += qPow(4 - a->getCrowds(), 2);
    urban += qPow(4 - a->getNoises(), 2);
    urban += qPow(0 - a->getProtector(), 2);
    urban += qPow(2 - a->getEnergy(), 2);
    urban += qPow(2 - a->getFearful(), 2);
    urban += qPow(2 - a->getAffection(), 2);
    urban += qPow(1 - a->getMessy(), 2);
    urban += qPow(1 - a->isHypo(), 2); //false
    urban += qPow(0 - a->getLifestyle(), 2);
    urbDist = qSqrt(urban);

   // Fierce Convoy optimal array: {4,2,0,0,1,3,4,4,0,1,2,False,2}
    fierce += qPow(4 - a->getSize(), 2);
    fierce += qPow(2 - a->getAge(), 2);
    fierce += qPow(0 - a->getChildren(), 2);
    fierce += qPow(0 - a->getGoodWAnimals(), 2);
    fierce += qPow(1 - a->getCrowds(), 2);
    fierce += qPow(3 - a->getNoises(), 2);
    fierce += qPow(4 - a->getProtector(), 2);
    fierce += qPow(4 - a->getEnergy(), 2);
    fierce += qPow(0 - a->getFearful(), 2);
    fierce += qPow(1 - a->getAffection(), 2);
    fierce += qPow(2 - a->getMessy(), 2);
    fierce += qPow(0 - a->isHypo(), 2); //false
    fierce += qPow(2 - a->getLifestyle(), 2);
    fierDist = qSqrt(fierce);

   // Experienced Sidekick optimal array: {2,4,2,2,3,4,1,1,2,3,0,True,0}
    exper += qPow(2 - a->getSize(), 2);
    exper += qPow(4 - a->getAge(), 2);
    exper += qPow(2 - a->getChildren(), 2);
    exper += qPow(2 - a->getGoodWAnimals(), 2);
    exper += qPow(3 - a->getCrowds(), 2);
    exper += qPow(4 - a->getNoises(), 2);
    exper += qPow(1 - a->getProtector(), 2);
    exper += qPow(1 - a->getEnergy(), 2);
    exper += qPow(2 - a->getFearful(), 2);
    exper += qPow(3 - a->getAffection(), 2);
    exper += qPow(0 - a->getMessy(), 2);
    exper += qPow(1 - a->isHypo(), 2); //false
    exper += qPow(0 - a->getLifestyle(), 2);
    expDist = qSqrt(exper);

   // rurDist, famDist, urbDist, cudDist, fierDist, expDist;

    return distance;
}

std::map<int, std::vector<Match*>>* Algorithm::countMatches (std::map<int, std::vector<Match*>> *matches,
        double matchThreshold) {
    std::map<int, std::vector<Match*>>* matchCounts = new std::map<int, std::vector<Match*>>;
    std::map<int, std::vector<Match*>>::iterator mIter;

    for (mIter = matches->begin(); mIter != matches->end(); mIter++) {
        int clientId = mIter->first;
        std::vector<Match*>::iterator vIter;

        for (vIter = mIter->second.begin(); vIter < mIter->second.end(); vIter++) {
            if ((*vIter)->getScore() <= matchThreshold && (*vIter)->getScore() >= 0.00) {
                if(matchCounts->count(clientId) == 0) {
                    matchCounts->insert(std::pair<int, std::vector<Match*>>(clientId, std::vector<Match*>()));
                    matchCounts->at(clientId).push_back(*vIter);
                }
                else {
                    matchCounts->at(clientId).push_back(*vIter);
                }
            }
        }
    }
    return matchCounts;
}

void Algorithm::makeMatch(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches, int clientId, Match *match,
        std::map<int, std::vector<Match*>> *matchCounts) {
        // Add match to optimal matches
        optimalMatches->push_back(match);

        // Remove client from matches map
        matches->erase(clientId);
        matchCounts->erase(clientId);

        // Loop through remaining clients in matches map and remove the
        // match from their vector where the animal in `match` is the same
        // as the animal in the match that client's vector
        std::map<int, std::vector<Match*>>::iterator it;
        std::vector<Match*>::iterator itVect;
        for(it = matches->begin(); it != matches->end(); it++)
        {
            int vectorIndex = 0;
            Client* cl = (it->second).front()->getClient();
            std::vector<Match*> *matchVect = &(it->second);
            for(itVect = it->second.begin(); itVect != it->second.end(); itVect++)
            {
                if((*itVect)->getAnimal()->getId() == match->getAnimal()->getId())
                {
                    matchVect->erase(matchVect->begin() + vectorIndex);
                    matchCounts->at(cl->getId()).erase(matchCounts->at(cl->getId()).begin() + vectorIndex);
                    break;
                }
                ++vectorIndex;
            }
        }
}

void Algorithm::computeOptimalMatches(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches) {
    // Make a copy of these matches for use internally because matches also needed in final display
    std::map<int, std::vector<Match*>> matchesCopy = *matches;
    double matchThreshold = 4.00;
    while (matchThreshold < 11.00) {
        // Count number of matches for remaining clients
        std::map<int, std::vector<Match*>> *matchCounts = countMatches(&matchesCopy, matchThreshold);
        // Keep matching those with only one match until none left or there
        // exists only clients with 2+ matches. In that case match one client
        // based on their lowest score and keep matching those with only one match.
        // Repeat until no clients remain in match count
        while (matchCounts->size() > 0) {
            std::map<int, std::vector<Match*>>::iterator iter;
            // Loop through all clients, add those with a single match to a vector
            std::vector<int> clientsWithOneMatch;
            for (iter = matchCounts->begin(); iter != matchCounts->end(); iter++) {
                if (iter->second.size() == 1) {
                    clientsWithOneMatch.push_back(iter->first);
                }
            }
            // For each client with one match, loop through all clients with one match and
            // see if that client has the same animal matched. If so, add those matches to a vector
            std::vector<int>::iterator vIter;
            std::vector<int>::iterator vInnerIter;
            for (vIter = clientsWithOneMatch.begin(); vIter < clientsWithOneMatch.end(); vIter++) {
                std::vector<Match*> sameMatches;
                for (vInnerIter = clientsWithOneMatch.begin(); vInnerIter < clientsWithOneMatch.end(); vInnerIter++) {
                    // There will always be at least one match because the original client gets counted
                    if ((matchCounts->at(*vIter)).front()->getAnimal()->getId() == (matchCounts->at(*vInnerIter)).front()->getAnimal()->getId()) {
                        sameMatches.push_back((matchCounts->at(*vInnerIter)).front());
                    }
                }
                // Find the match in the sameMatches vector with the smallest score
                std::vector<Match*>::iterator vMatchItr;
                Match* matchWithSmallestScore = NULL;
                for (vMatchItr = sameMatches.begin(); vMatchItr != sameMatches.end(); vMatchItr++) {
                    if (matchWithSmallestScore == NULL || (*vMatchItr)->getScore() <= matchWithSmallestScore->getScore()) {
                        matchWithSmallestScore = (*vMatchItr);
                    }
                }
                // Make the match with the smallest score
                makeMatch(&matchesCopy, optimalMatches, matchWithSmallestScore->getClient()->getId(), matchWithSmallestScore, matchCounts);
                // Remove that client from the clientsWithOneMatch vector also
                clientsWithOneMatch.erase(clientsWithOneMatch.begin() + matchWithSmallestScore->getClient()->getId());
                // Remove clients from clientsWithOneMatch who also had matches in sameMatches
            }
        }
        // Increment matchThreshold by 1.00 and do it all again.
        matchThreshold += 1.00;
    }
}
