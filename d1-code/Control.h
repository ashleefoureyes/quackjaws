#ifndef CONTROL_H
#define CONTROL_H

#include "Animal.h"
#include "Storage.h"
#include "View.h"
#include "Filesaver.h"

#define SAVE_FILE_NAME "savedAnimals.txt"

class Control
{
    public:
    void launch();
    Control();
    ~Control();

    private:
    View view;
    Storage storage;
    Filesaver fileSaver;

    void createNewAnimal();
    void removeAnimal();
    void viewAnimals();
    void clearStorage();
};

#endif