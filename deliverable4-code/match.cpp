#include "match.h"


Match::Match(Client *client, Animal *animal, double score)
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

        if(dog->getIsHypoAllergenic() == true && client->getHasDogAllergies() == true) { returnStr += "- Client has dog allergies but this dog is hypo-allergenic\n"; }

        if(returnStr == "") { returnStr = "This dog does not meet any species-specific client preferences"; }
        else { returnStr = "Dog-specific match info\n\n" + returnStr; }
    }
    else if (animal->getSpecies() == "Cat")
    {
        Cat *cat = static_cast<Cat*>(animal);
        std::vector<std::string> breeds = client->getCatBreeds();
        if(std::find(breeds.begin(), breeds.end(), cat->getBreed()) != breeds.end()) { returnStr += "- Wants a " + QString::fromStdString(cat->getBreed() + "\n"); }

        if(cat->getGender() == 'M' && client->getCatGender() == 0) { returnStr += "- Want a male cat\n"; }
        else if (cat->getGender() == 'F' && client->getCatGender() == 1) { returnStr += "- Wants a female cat\n"; }

        if(cat->getSize() == client->getCatSize()) { returnStr += "- Want a " + QString::fromStdString(cat->getSizeStr()) + " cat\n"; }
        if(cat->getFur() == client->getCatFur()) { if (cat->getFur() == 0) { returnStr += "- Wants a hairless cat"; } else { returnStr += "- Wants a " + QString::fromStdString(cat->getFurStr() + "-haired cat\n"); }}
        if(cat->getChildren() >= 3 && client->getHasChildren()) { returnStr += "- Cat would be good with " + QString::fromStdString(client->getFirstName()) + "'s children\n"; }
        if(cat->getGoodWAnimals() >= 3 && client->getHasAnimals()) { returnStr += "- Cat would be good with " + QString::fromStdString(client->getFirstName()) + "'s other animals\n"; }

        if(cat->getEnergy() >= 3 && client->getActivity() >= 3) { returnStr += "- Cat and client are both very active\n"; }
        else if(cat->getEnergy() <= 2 && client->getActivity() <= 2) { returnStr += "- Cat and client both live relaxed lifestyles\n"; }

        if(cat->getCuriosity() && client->getIsCurious() >= 3) { returnStr += "- Cat is curious which was important to client\n"; }
        if(cat->getTrained() >= 3 && client->getFollowCommandsCat() >= 3) { returnStr += "- Cat follows commands as requested by client\n"; }
        if(cat->getShedding() <= 3 && client->getDoesntShed() >= 3) { returnStr += "- Cat doesn't shed which was important to client\n"; }

        if(cat->getIsHypoAllergenic() == true && client->getHasCatAllergies() == true) { returnStr += "- Client has cat allergies but this cat is hypo-allergenic\n"; }

        if(returnStr == "") { returnStr = "This cat does not meet any species-specific client preferences"; }
        else { returnStr = "Cat-specific match info\n\n" + returnStr; }
    }
    else if (animal->getSpecies() == "Bird")
    {
        Bird *bird = static_cast<Bird*>(animal);
        std::vector<std::string> breeds = client->getBirdBreeds();
        if(std::find(breeds.begin(), breeds.end(), bird->getBreed()) != breeds.end()) { returnStr += "- Wants a " + QString::fromStdString(bird->getBreed() + "\n"); }

        if(bird->getGender() == 'M' && client->getBirdGender() == 0) { returnStr += "- Want a male bird\n"; }
        else if (bird->getGender() == 'F' && client->getBirdGender() == 1) { returnStr += "- Wants a female bird\n"; }

        if(bird->getColour() == client->getBirdColour()) { returnStr += "- Wants a " + QString::fromStdString(bird->getColour()) + " bird\n"; }
        if(bird->getSize() == client->getBirdSize()) { returnStr += "- Want a " + QString::fromStdString(bird->getSizeStr()) + " bird\n"; }
        if(bird->getFur() - 3 == client->getBirdFur()) { if (bird->getFur() == 4) { returnStr += "- Wants a featherless bird\n"; } else { returnStr += "- Wants a Feathered bird\n"; }}
        if(bird->getChildren() >= 3 && client->getHasChildren()) { returnStr += "- Bird would be good with " + QString::fromStdString(client->getFirstName()) + "'s children\n"; }
        if(bird->getGoodWAnimals() >= 3 && client->getHasAnimals()) { returnStr += "- Bird would be good with " + QString::fromStdString(client->getFirstName()) + "'s other animals\n"; }

        if(bird->getEnergy() >= 3 && client->getActivity() >= 3) { returnStr += "- Bird and client are both very active\n"; }
        else if(bird->getEnergy() <= 2 && client->getActivity() <= 2) { returnStr += "- Bird and client both live relaxed lifestyles\n"; }

        if(bird->getLoud() <= 2 && client->getIsQuietBird() >= 3) { returnStr += "- Bird is quiet as requested by client\n"; }
        if(bird->getSocial() >= 3 && client->getIsSocialBird() >= 3) { returnStr += "- Bird is social which was important to client\n"; }

        if(bird->getIsHypoAllergenic() == true && client->getHasBirdAllergies() == true) { returnStr += "- Client has bird allergies but this bird is hypo-allergenic\n"; }

        if(returnStr == "") { returnStr = "This bird does not meet any species-specific client preferences"; }
        else { returnStr = "Bird-specific match info\n\n" + returnStr; }
    }
    else if (animal->getSpecies() == "Lizard")
    {
        Lizard *lizard = static_cast<Lizard*>(animal);
        std::vector<std::string> breeds = client->getLizardBreeds();
        if(std::find(breeds.begin(), breeds.end(), lizard->getBreed()) != breeds.end()) { returnStr += "- Wants a " + QString::fromStdString(lizard->getBreed() + "\n"); }

        if(lizard->getGender() == 'M' && client->getLizardGender() == 0) { returnStr += "- Want a male lizard\n"; }
        else if (lizard->getGender() == 'F' && client->getLizardGender() == 1) { returnStr += "- Wants a female lizard\n"; }

        if(lizard->getColour() == client->getLizardColour()) { returnStr += "- Wants a " + QString::fromStdString(lizard->getColour()) + " lizard\n"; }
        if(lizard->getSize() == client->getLizardSize()) { returnStr += "- Want a " + QString::fromStdString(lizard->getSizeStr()) + " lizard\n"; }
        if(lizard->getFur() - 5 == client->getLizardFur()) { if (lizard->getFur() == 5) { returnStr += "- Wants a smooth-scaled lizard\n"; } else if (lizard->getFur() == 6) { returnStr += "- Wants a rough-scaled lizard\n"; } else {returnStr += "wants a spiked lizard\n"; } }
        if(lizard->getChildren() >= 3 && client->getHasChildren()) { returnStr += "- Lizard would be good with " + QString::fromStdString(client->getFirstName()) + "'s children\n"; }
        if(lizard->getGoodWAnimals() >= 3 && client->getHasAnimals()) { returnStr += "- Lizard would be good with " + QString::fromStdString(client->getFirstName()) + "'s other animals\n"; }

        if(lizard->getEnergy() >= 3 && client->getActivity() >= 3) { returnStr += "- Lizard and client are both very active\n"; }
        else if(lizard->getEnergy() <= 2 && client->getActivity() <= 2) { returnStr += "- Lizard and client both live relaxed lifestyles\n"; }

        if((lizard->getLightingReqs() || lizard->getSpaceReqs()) && client->getSimpleLiving() >= 3) { returnStr += "- Lizard has simple living conditions as requested by client\n"; }
        if((lizard->getDiet() != "Mice" || lizard->getFeedingInterval() != "Daily") && client->getEasyToFeed() >= 3) { returnStr += "Lizard is easy to feed as requested by client"; }

        if(lizard->getIsHypoAllergenic() == true && client->getHasLizardAllergies() == true) { returnStr += "- Client has lizard allergies but this lizard is hypo-allergenic\n"; }

        if(returnStr == "") { returnStr = "This lizard does not meet any species-specific client preferences"; }
        else { returnStr = "Lizard-specific match info\n\n" + returnStr; }
    }
    else if (animal->getSpecies() == "Rabbit")
    {
        Rabbit *rabbit = static_cast<Rabbit*>(animal);
        std::vector<std::string> breeds = client->getRabbitBreeds();
        if(std::find(breeds.begin(), breeds.end(), rabbit->getBreed()) != breeds.end()) { returnStr += "- Wants a " + QString::fromStdString(rabbit->getBreed() + "\n"); }

        if(rabbit->getGender() == 'M' && client->getRabbitGender() == 0) { returnStr += "- Want a male rabbit\n"; }
        else if (rabbit->getGender() == 'F' && client->getRabbitGender() == 1) { returnStr += "- Wants a female rabbit\n"; }

        if(rabbit->getColour() == client->getRabbitColour()) { returnStr += "- Wants a " + QString::fromStdString(rabbit->getColour()) + " rabbit\n"; }
        if(rabbit->getSize() == client->getRabbitSize()) { returnStr += "- Want a " + QString::fromStdString(rabbit->getSizeStr()) + " rabbit\n"; }
        if(rabbit->getFur() == client->getRabbitFur()) { if (rabbit->getFur() == 0) { returnStr += "- Wants a hairless rabbit"; } else { returnStr += "- Wants a " + QString::fromStdString(rabbit->getFurStr() + "-haired rabbit\n"); }}
        if(rabbit->getChildren() >= 3 && client->getHasChildren()) { returnStr += "- Rabbit would be good with " + QString::fromStdString(client->getFirstName()) + "'s children\n"; }
        if(rabbit->getGoodWAnimals() >= 3 && client->getHasAnimals()) { returnStr += "- Rabbit would be good with " + QString::fromStdString(client->getFirstName()) + "'s other animals\n"; }

        if(rabbit->getEnergy() >= 3 && client->getActivity() >= 3) { returnStr += "- Rabbit and client are both very active\n"; }
        else if(rabbit->getEnergy() <= 2 && client->getActivity() <= 2) { returnStr += "- Rabbit and client both live relaxed lifestyles\n"; }

        if(rabbit->getGrooming() >= 3 && client->getNeedsGrooming() >= 3) { returnStr += "- Rabbit needs grooming as requested by client\n"; }
        if(rabbit->getAttention() >= 3 && client->getIsSocialRabbit() >= 3) { returnStr += "- Rabbit is social which was important to client"; }

        if(rabbit->getIsHypoAllergenic() == true && client->getHasRabbitAllergies() == true) { returnStr += "- Client has rabbit allergies but this rabbit is hypo-allergenic\n"; }

        if(returnStr == "") { returnStr = "This rabbit does not meet any species-specific client preferences"; }
        else { returnStr = "Rabbit-specific match info\n\n" + returnStr; }
    }

    return returnStr;
}

Client *Match::getClient() const { return client; }
void Match::setClient(Client *value) { client = value; }
Animal *Match::getAnimal() const { return animal; }
void Match::setAnimal(Animal *value) { animal = value; }
double Match::getScore() const { return score; }
void Match::setScore(double value){ score = value; }



