#ifndef MATCH_H
#define MATCH_H

#include "animal.h"
#include "client.h"


class Match
{
public:
    Match(Client *client, Animal *animal, int score);
    Match();
    std::string getMatchStr();

private:
    Client *client;
    Animal *animal;
    int score;
};

#endif // MATCH_H
