#ifndef ANIMALSTORAGE_H
#define ANIMALSTORAGE_H

#include "clientstorage.h"
#include <vector>
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "lizard.h"
#include "rabbit.h"

#define ANIMAL_STARTING_ID 100

//Dog 2, Cat 3, Bird 4, Lizard 5, Rabbit 6

class AnimalStorage
{
public:
    AnimalStorage();
    ~AnimalStorage();

    void add(Dog* newDog);
    void add(Cat* newDog);
    void add(Bird* newDog);
    void add(Rabbit* newDog);
    void add(Lizard* newDog);

    int generateUniqueId();

    void get(Animal** animal, int);
    int getSize();

    std::string listInfo(int index);

    std::string getSaveInfo();


private:
    std::vector <Dog*> dogStorage;
    std::vector <Cat*> catStorage;
    std::vector <Bird*> birdStorage;
    std::vector <Rabbit*> rabbitStorage;
    std::vector <Lizard*> lizardStorage;
    void checkForLargestId(int animalId);
    int largestId = 100;
};

#endif // ANIMALSTORAGE_H
