#include "algorithm.h"
#include <QtMath>
#include <QTextStream>
#include <QMessageBox>


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
    QTextStream cerr(stdout);

    Client* currentClient;

    for (int i = 0; i < clientStorage->getNumOfElements(); ++i) {
        for (int j = 0; j < animalStorage->getSize(); ++j) {

            // calculate the match score value for the animal-client pair
            double score = computeMatchScore(animalStorage->get(j), clientStorage->get(i));

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

    computeOptimalMatches(matches, optimalMatches);
}


/** Function: computeMatchScore
 *  Input:    Client and Animal objects
 *  Purpose:  computes the match score between a client and an animal
 *              Using client/animal attributes, the euclidean distance is calculated
 *              From here, the auxiliary scoring is applied to the match scores
 *                  Both general aux scoring and animal-specific scoring is computed
 *              the match score is then returned to be added into the map of matches
 *
 */
double Algorithm::computeMatchScore(Animal *a, Client *c){
    double score = 0;
    double sum = 0;
    double auxScore = 0;
    bool badMatch = false;
    QTextStream cerr(stderr);

     cerr << "The animal is: " << QString::fromStdString(a->getSpecies()) << "\n";

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

    sum += qPow((a->getChildren() - c->getChildren()),2);
    sum += qPow((a->getGoodWAnimals() - c->getGoodWAnimals()),2);
    sum += qPow((a->getEnergy() - c->getEnergy()),2);
    sum += qPow((a->getEnergy() - c->getActivity()),2);

    std::string clientCategory = categorizeClient(c);
    std::string animalCategory = categorizeAnimal(a);

    a->setClassification(animalCategory);
    c->setClassification(clientCategory);

    cerr << "Client category: " << QString::fromStdString(clientCategory) << "\n";
    cerr << "Animal category: " << QString::fromStdString(animalCategory) << "\n";

    if(clientCategory == animalCategory){ auxScore += 2;}

    //Dog Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "Dog", Qt::CaseInsensitive) == 0){
        Dog *d = static_cast<Dog*>(a);
        if (c->getWantsDog()){
            if(c->getHasDogAllergies() && !d->getIsHypoAllergenic()){ auxScore -= 5; }

            int dogGender = 0;
            if(d->getGender() == 'M') {dogGender = 1;}
            else { dogGender = 5; }

            sum += qPow((dogGender - c->getDogGender()), 2);

            std::vector<std::string> breeds = c->getDogBreeds();
            if(std::find(breeds.begin(), breeds.end(), d->getBreed()) != breeds.end()){ auxScore +=2; }

            int bathTrained = 0;
            if(d->getIsBathroomTrained()) {bathTrained = 5;}
            else { bathTrained = 0; }

            sum += qPow((d->getSize() - c->getDogSize()), 2);
            sum += qPow((d->getFur() - c->getDogFur()), 2);
            sum += qPow((bathTrained - c->getHouseTrained()),2);
            sum+= qPow((d->getTraining() - c->getFollowsCommandsDog()), 2);
            sum += qPow((d->getBarks() - c->getQuietness()), 2);

            if(d->getBarks() >= 4 && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}

        } else { badMatch = true; }
    }

    //Cat Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "cat", Qt::CaseInsensitive) == 0){
        Cat *cat = static_cast<Cat*>(a);
        if (c->getWantsCat()){
            if(c->getHasCatAllergies() && !cat->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getCatBreeds();
            if(std::find(breeds.begin(), breeds.end(), cat->getBreed()) != breeds.end()){ auxScore +=2; }

            int catGender = 0;
            if(cat->getGender() == 'M') {catGender = 1;}
            else { catGender = 5; }

            sum += qPow((catGender - c->getCatGender()), 2);
            sum += qPow((cat->getSize() - c->getCatSize()), 2);
            sum += qPow((cat->getFur() - c->getCatFur()), 2);
            sum += qPow((cat->getCuriosity() - c->getIsCurious()), 2);
            sum += qPow((cat->getTrained() - c->getFollowCommandsCat()), 2);
            sum += qPow((cat->getShedding() - c->getDoesntShed()), 2);

        } else { badMatch = true; }
    }

    //Bird Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "bird", Qt::CaseInsensitive) == 0){
        Bird *b = static_cast<Bird*>(a);
        if (c->getWantsBird()){
            if(c->getHasBirdAllergies() && !b->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getBirdBreeds();
            if(std::find(breeds.begin(), breeds.end(), b->getBreed()) != breeds.end()){ auxScore +=2; }

            int birdGender = 0;
            if(b->getGender() == 'M') {birdGender = 1;}
            else { birdGender = 5; }

            sum += qPow((birdGender - c->getBirdGender()), 2);
            sum += qPow((b->getSize() - c->getBirdSize()), 2);
            sum += qPow((b->getFur() - c->getBirdFur()), 2);


            if (QString::compare(QString::fromStdString(c->getBirdColour()), QString::fromStdString(b->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            sum += qPow((b->getLoud() - c->getIsQuietBird()), 2);
            sum += qPow((b->getSocial() - c->getIsSocialBird()), 2);

            if(b->getLoud() && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}

        } else { badMatch = true; }
    }

    //Lizard Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "lizard", Qt::CaseInsensitive) == 0){
        Lizard *l = static_cast<Lizard*>(a);
        if (c->getWantsLizard()){
            if(c->getHasLizardAllergies() && !l->getIsHypoAllergenic()){ auxScore -= 5; }

            std::vector<std::string> breeds = c->getLizardBreeds();
            if(std::find(breeds.begin(), breeds.end(), l->getBreed()) != breeds.end()){ auxScore +=2; }

            int lizGender = 0;
            if(l->getGender() == 'M') {lizGender = 1;}
            else { lizGender = 5; }

            sum += qPow((lizGender - c->getLizardGender()),2);
            sum += qPow((l->getSize() - c->getLizardSize()),2);
            sum += qPow((l->getFur() - c->getLizardFur()),2);

            if (QString::compare(QString::fromStdString(c->getLizardColour()), QString::fromStdString(l->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            if((l->getLightingReqs() || l->getSpaceReqs()) && c->getSimpleLiving() >= 3) { auxScore +=1; }
            else if ((l->getLightingReqs() || l->getSpaceReqs()) && c->getSimpleLiving() == 0) { auxScore -=1; }

            int simple = 0;
            if (l->getLightingReqs() || l->getSpaceReqs()) { simple = 5; }
            else if (!l->getLightingReqs() || l->getSpaceReqs()) { simple = 5; }
            else if (l->getLightingReqs() || !l->getSpaceReqs()) { simple = 5; }
            else { simple = 0; }

            sum += qPow((simple -c->getSimpleLiving()),2);;

            int feed = 0;
            if((l->getDiet() == "Mice" || l->getFeedingInterval() == "Daily")) { feed = 5; }
            else if((l->getDiet() == "Mice" || l->getFeedingInterval() != "Daily")) { feed = 3; }
            else if((l->getDiet() != "Mice" || l->getFeedingInterval() == "Daily")) { feed = 3; }
            else { feed = 0; }

            sum += qPow((feed - c->getEasyToFeed()),2);

            if(l->getSpaceReqs() && (c->getDwelling() == 0 || c->getDwelling() == 1)) { auxScore -=2;}


        } else { badMatch = true; }
    }

    //Rabbit Specific Preferences
    if (QString::compare(QString::fromStdString(a->getSpecies()), "rabbit", Qt::CaseInsensitive) == 0){
        Rabbit *r = static_cast<Rabbit*>(a);
        if (c->getWantsRabbit()){
            if(c->getHasRabbitAllergies() && !r->getIsHypoAllergenic()){ auxScore -= 5; }

            int rabGender = 0;
            if(r->getGender() == 'M') {rabGender = 1;}
            else { rabGender = 5; }

            sum += qPow((rabGender - c->getRabbitGender()),2);
            sum += qPow((r->getSize() - c->getRabbitSize()),2);
            sum += qPow((r->getFur() - c->getRabbitFur()),2);

            if (QString::compare(QString::fromStdString(c->getRabbitColour()), QString::fromStdString(r->getColour()), Qt::CaseInsensitive)){ auxScore+=2; }

            sum += qPow((r->getGrooming() - c->getNeedsGrooming()),2);
            sum += qPow((r->getAttention() - c->getIsSocialRabbit()),2);

        } else { badMatch = true; }
    }
    score = qSqrt(sum);
    cerr << QString::fromStdString(a->getName()) << " and " << QString::fromStdString(c->getFullName()) << "= "<< score << " - " << auxScore <<"\n";

    score -= auxScore;
    cerr << "------" << QString::fromStdString(a->getName()) << " and " << QString::fromStdString(c->getFullName()) << "= "<< score << "\n";

    score = qSqrt(sum);

    if (score < 0) { score = 0;}

    if (badMatch) { score = -1;}
    return score;
}



/** Function: categorizeClient
 *  Input:    Client  objects
 *  Purpose:  using the client's attributes, a classification is computed
 *               the Euclidean distance is calculated between the client, and the
 *               classification vector (noted below) for all classifications, and stored in a map
 *            The smallest distance-classification pairing is the classification a client is given
 *
 */
std::string Algorithm:: categorizeClient(Client* c){
    double rural = 0, family = 0, urban = 0, cuddle = 0, fierce = 0, exper = 0;
    double rurDist = 0, famDist = 0, urbDist = 0, cudDist = 0, fierDist = 0, expDist = 0;
    std::map<std::string, double> category;

    // Rural Rovers client optimal array: {4,2,5,4,True,True}
    rural += qPow(4 - c->getDwelling(),2);
    rural += qPow(2 - c->getLocation(),2);
    rural += qPow(5 - c->getWorkSchedule(),2);
    rural += qPow(4 - c->getActivity(),2);
    rural += qPow(1 - c->getHasChildren(),2);
    rural += qPow(1 - c->getHasAnimals(),2);
    rurDist = qSqrt(rural);
    category.insert(std::pair<std::string, double> ("Rural Rovers", rurDist));

    // Family Pal client optimal array: {3,1,0,2,True,True}
    family += qPow(3 - c->getDwelling(),2);
    family += qPow(1 - c->getLocation(),2);
    family += qPow(0 - c->getWorkSchedule(),2);
    family += qPow(2 - c->getActivity(),2);
    family += qPow(1 - c->getHasChildren(),2);
    family += qPow(1 - c->getHasAnimals(),2);
    famDist = qSqrt(family);
    category.insert(std::pair<std::string, double> ("Family Pal", famDist));

    // Urban Dweller client optimal array {0,0,0,1,False,False}
    urban += qPow(0 - c->getDwelling(),2);
    urban += qPow(0 - c->getLocation(),2);
    urban += qPow(0 - c->getWorkSchedule(),2);
    urban += qPow(1 - c->getActivity(),2);
    urban += qPow(0 - c->getHasChildren(),2);
    urban += qPow(0 - c->getHasAnimals(),2);
    urbDist = qSqrt(urban);
    category.insert(std::pair<std::string, double> ("Urban Dweller", urbDist));


    // Cuddly Companion client optimal array: {2,1,5,1,True,False}
    cuddle += qPow(2 - c->getDwelling(),2);
    cuddle += qPow(1 - c->getLocation(),2);
    cuddle += qPow(5 - c->getWorkSchedule(),2);
    cuddle += qPow(1 - c->getActivity(),2);
    cuddle += qPow(1 - c->getHasChildren(),2);
    cuddle += qPow(0 - c->getHasAnimals(),2);
    cudDist = qSqrt(cuddle);
    category.insert(std::pair<std::string, double> ("Cuddly Companion", cudDist));


    // Fierce Convoy optimal array: {3,1,3,3,False,False}
    fierce += qPow(3 - c->getDwelling(),2);
    fierce += qPow(1 - c->getLocation(),2);
    fierce += qPow(3 - c->getWorkSchedule(),2);
    fierce += qPow(3 - c->getActivity(),2);
    fierce += qPow(0 - c->getHasChildren(),2);
    fierce += qPow(0 - c->getHasAnimals(),2);
    fierDist = qSqrt(fierce);
    category.insert(std::pair<std::string, double> ("Fierce Convoy", fierDist));


    // Experienced Sidekick client optimal array: {1,0,6,0,False,False}
    exper += qPow(1 - c->getDwelling(),2);
    exper += qPow(0 - c->getLocation(),2);
    exper += qPow(6 - c->getWorkSchedule(),2);
    exper += qPow(0 - c->getActivity(),2);
    exper += qPow(0 - c->getHasChildren(),2);
    exper += qPow(0 - c->getHasAnimals(),2);
    expDist = qSqrt(exper);
    category.insert(std::pair<std::string, double> ("Experienced Sidekick", expDist));

    std::string classification = "";
    double catWithSmallestScore = 0;
        for (std::map<std::string,double>::iterator it=category.begin(); it!=category.end(); ++it){
            if(catWithSmallestScore == 0 || it->second <= catWithSmallestScore){
                catWithSmallestScore = it->second;
                classification = it->first;
            }
        }

    return classification;
}

/** Function: categorizeAnimal
 *  Input:    Animal  objects
 *  Purpose:  using the animals's attributes, a classification is computed
 *               the Euclidean distance is calculated between the animal, and the
 *               classification vector (noted below) for all 6 classifications, and stored in a map
 *            The smallest distance-classification pairing is the classification an animal is given
 *
 */
std::string Algorithm::categorizeAnimal(Animal* a){
  double rural = 0, family = 0, urban = 0, cuddle = 0, fierce = 0, exper = 0;
  double rurDist = 0, famDist = 0, urbDist = 0, cudDist = 0, fierDist = 0, expDist = 0;
  std::map<std::string, double> category;

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
    rural += qPow(0 - a->isHypo(), 2);
    rural += qPow(1 - a->getLifestyle(), 2);

    rurDist = qSqrt(rural);
    category.insert(std::pair<std::string, double> ("Rural Rovers", rurDist));

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
    family += qPow(0 - a->isHypo(), 2);
    family += qPow(2 - a->getLifestyle(), 2);

    famDist = qSqrt(family);
    category.insert(std::pair<std::string, double> ("Family Pal", famDist));

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
    cuddle += qPow(1 - a->isHypo(), 2);
    cuddle += qPow(0 - a->getLifestyle(), 2);

    cudDist = qSqrt(cuddle);
    category.insert(std::pair<std::string, double> ("Cuddly Companion", cudDist));

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
    urban += qPow(1 - a->isHypo(), 2);
    urban += qPow(0 - a->getLifestyle(), 2);

    urbDist = qSqrt(urban);
    category.insert(std::pair<std::string, double> ("Urban Dweller", urbDist));

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
    category.insert(std::pair<std::string, double> ("Fierce Convoy", fierDist));

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
    exper += qPow(1 - a->isHypo(), 2);
    exper += qPow(0 - a->getLifestyle(), 2);

    expDist = qSqrt(exper);
    category.insert(std::pair<std::string, double> ("Experienced Sidekick", expDist));

    std::string classification = "";
    double catWithSmallestScore = 0;
        for (std::map<std::string,double>::iterator it=category.begin(); it!=category.end(); ++it){
            if(catWithSmallestScore == 0 || it->second <= catWithSmallestScore){
                catWithSmallestScore = it->second;
                classification = it->first;
            }
        }

    return classification;
}


/** Function: countMatches(map<int, vector<Matches*>> matches, double)
 *  in: matches, matchThreshold
 *  out: matchCounts
 *  Purpose: Checks all matches and if the match is under the threshold it adds it to a new map
 *           Then returns the map of matches under the threshold */
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

/** Function: makeMatch(...)
 *  In: int client-id, Match *match
 *  In-Out: map<int, vector<Match*>> matches, vector<Match*> *optimalMatches, map<int, vector<Match*>> matchCounts
 *  Purpose: Uses input parameter to add that match from the matches map to the optimal matches vctor. It then removes
 *           that match as an option from matchCounts and matches. */
void Algorithm::makeMatch(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches, int clientId, Match *match,
        std::map<int, std::vector<Match*>> *matchCounts) {
        // Add match to optimal matches
        std::vector<Match*>::iterator opIt;


        bool inOpt = false;
        for(opIt = optimalMatches->begin(); opIt != optimalMatches->end(); opIt++)
        {
            if(match->getAnimal()->getId() == (*opIt)->getAnimal()->getId()) { inOpt = true; }
        }

        if(inOpt == false) { optimalMatches->push_back(match); }

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
                    matchCounts->find(cl->getId());
                     if(matchCounts->find(cl->getId()) != matchCounts->end()) {

                         std::vector<Match*> *animsErase = &(*matchCounts->find(cl->getId())).second;
                         std::vector<Match*>::iterator eraseIt;
                         for(eraseIt=animsErase->begin(); eraseIt != animsErase->end(); eraseIt++)
                         {
                             if((*eraseIt)->getAnimal()->getId() == match->getAnimal()->getId()) { animsErase->erase(eraseIt); break;}
                         }

                     }
                         //matchCounts->at(cl->getId()).erase(matchCounts->at(cl->getId()).begin() + vectorIndex); }
                    //matchCounts->find(cl->getId())->second.erase(matchCounts->find(cl->getId())->second.begin() + vectorIndex);


                    break;
                }
                ++vectorIndex;
            }
        }

}

/** Function: computeOptimalMatches(...)
 *  In: map<int, vector<Match*>> matches
 *  In-Out: vector<Match*> *optimalMatches
 *  Purpose: Takes the map of all matches and uses the value saved to compute the set of optimal
 *           matches from this map */
void Algorithm::computeOptimalMatches(std::map<int, std::vector<Match*>> *matches,
        std::vector<Match*> *optimalMatches) {

    QTextStream cerr(stdout);

    // Make a copy of these matches for use internally because matches also needed in final display
    std::map<int, std::vector<Match*>> matchesCopy = *matches;
    double matchThreshold = 4.00;
    while (matchThreshold <= 11.00) {

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

            // If there are no clients with one match then the clients remaining
            // in matchCounts have more than one match in their vector
            if (clientsWithOneMatch.size() == 0) {
                // Loop through every client in matchCounts
                Match* matchWithSmallestScore = NULL;
                std::map<int, std::vector<Match*>>::iterator mClientsIter;
                for (mClientsIter = matchCounts->begin(); mClientsIter != matchCounts->end(); mClientsIter++) {
                    std::vector<Match*>::iterator vMatchIter;
                    //Match* matchWithSmallestScore = NULL;
                    // Find match with lowest score for that client
                    for (vMatchIter = mClientsIter->second.begin(); vMatchIter < mClientsIter->second.end(); vMatchIter++) {
                        if (matchWithSmallestScore == NULL || (*vMatchIter)->getScore() <= matchWithSmallestScore->getScore()) {
                            matchWithSmallestScore = (*vMatchIter);
                        }
                    }
                    // See if any other client also matches for that animal and make
                    //      match with the lowest score similar to below
                    std::vector<Match*> sameMatches;
                    std::map<int, std::vector<Match*>>::iterator mClientsIter2;
                    for (mClientsIter2 = matchCounts->begin(); mClientsIter2 != matchCounts->end(); mClientsIter2++) {
                        std::vector<Match*>::iterator vInnerIter2;
                        for (vInnerIter2 = mClientsIter->second.begin(); vInnerIter2 < mClientsIter->second.end(); vInnerIter2++) {
                            if (matchWithSmallestScore->getAnimal()->getId() == (matchCounts->at((*vInnerIter2)->getClient()->getId())).front()->getAnimal()->getId()) {
                                sameMatches.push_back((matchCounts->at((*vInnerIter2)->getClient()->getId()).front()));
                            }
                        }
                    }
                    // Compute which match out of these clients which match with
                    // the same animal has the lowest score
                    std::vector<Match*>::iterator vMatchItr;
                    for (vMatchItr = sameMatches.begin(); vMatchItr != sameMatches.end(); vMatchItr++) {
                        if (matchWithSmallestScore == NULL || (*vMatchItr)->getScore() <= matchWithSmallestScore->getScore()) {
                            matchWithSmallestScore = (*vMatchItr);
                        }
                    }
                }
                // Make the match with the smallest score
                makeMatch(&matchesCopy, optimalMatches, matchWithSmallestScore->getClient()->getId(), matchWithSmallestScore, matchCounts);
                // Re-run the whole while loop to now re-check for clients with only one match
                continue;
            }
            // For each client with one match, loop through all clients with one match and
            // see if that client has the same animal matched. If so, add those matches to a vector
            while (clientsWithOneMatch.size() > 0) {
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
                    //clientsWithOneMatch.erase(clientsWithOneMatch.begin() + matchWithSmallestScore->getClient()->getId());
                    // Remove clients from clientsWithOneMatch who also had matches in sameMatches
                    // Remove that client from the clientsWithOneMatch vector also

                    std::vector<int>::iterator eraseIt = std::find(clientsWithOneMatch.begin(), clientsWithOneMatch.end(), matchWithSmallestScore->getClient()->getId());
                    clientsWithOneMatch.erase(eraseIt);

                }
            }
        }
        // Increment matchThreshold by 1.00 and do it all again.
        matchThreshold += 1.00;
    }

    addRemaining(optimalMatches, matches);
}


/** Function: addRemaining
    In: std::map<int, std::vector<Match*>> *matches
    In-out: std::vector<Match*> optimalMatches
    Purpose: Allows you to fine tune the threshold using remThresh for remaining clients and
             animals to get some additional matches.
             To be used in cases where shelter is overcrowded but you don't want
             to jeopardise your more optimal matches at the expense of matching more animals.
*/
void Algorithm::addRemaining(std::vector<Match*> *optimalMatches, std::map<int, std::vector<Match*>> *matches)
{
    double remThresh = 11.0;

    if(*(optimalMatches->front()) == (*optimalMatches->back())) { }

    std::vector<Match*>::iterator itV;
    std::map<int, std::vector<Match*>>::iterator itM;

    for(itM = matches->begin(); itM != matches->end(); itM++)
    {
        bool inOpt = false;

        for(itV = optimalMatches->begin(); itV != optimalMatches->end(); itV++)
        {
            if((*itV)->getClient()->getId() == (*itM).first) { inOpt = true; break; }
        }
        if(inOpt == false)
        {
            std::vector<Match*> allMatches = matches->at((*itM).first);
            //QMessageBox msg; msg.setText("No match for: " + QString::fromStdString(allMatches.front()->getClient()->getFullName())); msg.exec();
            std::vector<Match*>::iterator itV;
            std::vector<Match*> availableMatches;
            for(itV = allMatches.begin(); itV != allMatches.end(); itV++)
            {
                if((*itV)->getScore() < 0 || (*itV)->getScore() > remThresh) { continue; }

                std::vector<Match*>::iterator itO;
                bool animInOpt = false;
                for(itO = optimalMatches->begin(); itO != optimalMatches->end(); itO++)
                {
                    if((*itO)->getAnimal()->getId() == (*itV)->getAnimal()->getId()) { animInOpt = true;}
                }
                if(animInOpt == false) { availableMatches.push_back(*itV);}
            }

            if(availableMatches.size() != 0)
            {
                Match* minMatch = availableMatches.front();
                for(itV = availableMatches.begin(); itV != availableMatches.end(); itV++)
                {
                    if((*itV)->getScore() < minMatch->getScore()) {minMatch = (*itV); }
                }
                optimalMatches->push_back(minMatch);
            }
        }
    }
}

// Testing function. Used to test functionality before fully implemented
void Algorithm::test(std::map<int, std::vector<Match*>> *matches,
                     std::vector<Match*> *optimalMatches)
{
    computeOptimalMatches(matches, optimalMatches);
    countMatches(matches, 6.00);
}
