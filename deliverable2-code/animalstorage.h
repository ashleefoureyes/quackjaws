#ifndef ANIMALSTORAGE_H
#define ANIMALSTORAGE_H

#include "storage.h"
#include <vector>
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "lizard.h"
#include "rabbit.h"

class AnimalStorage: public Storage
{
public:
    AnimalStorage();

    void add(Dog* newDog);
    void add(Cat* newDog);
    void add(Bird* newDog);
    void add(Rabbit* newDog);
    void add(Lizard* newDog);

private:
    std::vector <Dog*> dogStorage;
    std::vector <Cat*> catStorage;
    std::vector <Bird*> birdStorage;
    std::vector <Rabbit*> rabbitStorage;
    std::vector <Lizard*> lizardStorage;
};

#endif // ANIMALSTORAGE_H
