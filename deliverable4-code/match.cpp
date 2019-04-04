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

std::string Match::getMatchStr() { return client->getFullName() + " -> " + animal->getName() + " : " + std::to_string(score); }
