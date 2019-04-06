#ifndef MATCH_H
#define MATCH_H

#include <QString>

#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "rabbit.h"
#include "lizard.h"
#include "client.h"


class Match
{
public:
    Match(Client *client, Animal *animal, int score);
    Match();
    std::string getMatchStr();

    Client *getClient() const;
    void setClient(Client *value);

    Animal *getAnimal() const;
    void setAnimal(Animal *value);

    QString speciesTraitsQStr();

    int getScore() const;
    void setScore(int value);

private:
    Client *client;
    Animal *animal;
    int score;
};

#endif // MATCH_H
