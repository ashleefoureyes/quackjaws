#include "match.h"

Match::Match(Client *client, Animal *animal, int score)
{
    this->client = client;
    this->animal = animal;
    this->score = score;
}

Match::Match()
{
    this->client = nullptr;
    this->animal = nullptr;
    this->score = -1;
}

std::string Match::getMatchStr() { return client->getFullName() + " and " + animal->getName(); }

QString Match::speciesTraitsQStr()
{
    QString returnStr = "";

    if (animal->getSpecies() == "Dog")
    {
        Dog *dog = static_cast<Dog*>(animal);
        std::vector<std::string> breeds = client->getDogBreeds();
        if(std::find(breeds.begin(), breeds.end(), dog->getBreed()) != breeds.end()) { returnStr += "- Wants a " + QString::fromStdString(dog->getBreed() + "\n"); }

        if(dog->getGender() == 'M' && client->getDogGender() == 0) { returnStr += "- Want a male dog\n"; }
        else if (dog->getGender() == 'F' && client->getDogGender() == 1) { returnStr += "- Wants a female dog\n"; }

        if(dog->getSize() == client->getDogSize()) { returnStr += "- Want a " + QString::fromStdString(dog->getSizeStr()) + " dog\n"; }
        if(dog->getFur() == client->getDogFur()) { if (dog->getFur() == 0) { returnStr += "- Wants a hairless dog"; } else { returnStr += "- Wants a " + QString::fromStdString(dog->getFurStr() + "-haired dog\n"); }}
        if(dog->getChildren() >= 3 && client->getHasChildren()) { returnStr += "- Dog would be good with " + QString::fromStdString(client->getFirstName()) + "'s children\n"; }
        if(dog->getGoodWAnimals() >= 3 && client->getHasAnimals()) { returnStr += "- Dog would be good with " + QString::fromStdString(client->getFirstName()) + "'s other animals\n"; }

        if(dog->getEnergy() >= 3 && client->getActivity() >= 3) { returnStr += "- Dog and client are both very active\n"; }
        else if(dog->getEnergy() <= 2 && client->getActivity() <= 2) { returnStr += "- Dog and client both live relaxed lifestyles\n"; }

        if(dog->getIsBathroomTrained() && client->getHouseTrained() >= 3) { returnStr += "- Dog is housetrained which was important to client\n"; }
        if(dog->getTraining() >= 3 && client->getFollowsCommandsDog() >= 3) { returnStr += "- Dog follows commands as requested by client\n"; }
        if(dog->getBarks() <= 3 && client->getQuietness() >= 3) { returnStr += "- Dog is quiet as requested by client\n"; }

        if(returnStr == "") { returnStr = "This dog does not meet any species-specific client preferences"; }
        else { returnStr = "Dog-specific match info\n\n" + returnStr; }
    }

    return returnStr;
}

Client *Match::getClient() const { return client; }
void Match::setClient(Client *value) { client = value; }
Animal *Match::getAnimal() const { return animal; }
void Match::setAnimal(Animal *value) { animal = value; }
int Match::getScore() const { return score; }
void Match::setScore(int value){ score = value; }
