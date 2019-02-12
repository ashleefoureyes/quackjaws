#include <iostream>
#include <string>

#include "control.h"
#include "animal.h"

/** Function: Control()
 *  Purpose: On creation of the control object the file with
 *           saved animal information is read and animals are created
 *           and put in the Control's storage variable */
Control::Control() { fileSaver.readFromFile(SAVE_FILE_NAME, &storage); }

/** Function: ~Control()
 *  Purpose: On destruction of Control object all animals in storage are
 *           written to the file */
Control::~Control() { fileSaver.saveToFile(SAVE_FILE_NAME, &storage); }

/**
 * TODO: connect these options to buttons in View.ui.
 */

/** Function launch()
 *  Purpose: Called by main.cc. */
//void Control::launch()
//{

//    int menuSelection = -1;

//    while(menuSelection != 0)
//    {
//        menuSelection = view.displayMenu();

//        switch(menuSelection)
//        {
//            case 1: createNewAnimal(); break;
//            case 2: removeAnimal(); break;
//            case 3: viewAnimals(); break;
//            default: break;
//        }
//    }
//}

/** Function: createNewAnimal()
 *  Purpose: Prepares variables and uses View object's getAnimalInfoFromUser()
 *           function to popualate variables. It then creates an animal instance
 *           and puts it in the storage object. */
//void Control::createNewAnimal()
//{
//    std::string name, breed;
//    int age, size, fur, species;
//    char gender;
//    bool isHypo;

//    Animal* newAnimal;
//    view.getAnimalInfoFromUser(breed, name, size, age, gender, fur, isHypo, species);
//    newAnimal = new Animal(breed, name, size, age, gender, fur, isHypo, species);

//    storage.add(newAnimal);
//}

/** Function: removeAnimal()
 *  Purpose: Uses View object's getIdForAnimal() function to get Id from user
 *           then tries to remove the animal with that Id from storage. */
void Control::removeAnimal()
{
    int idToRemove = view.getIdForAnimal();
    bool removeStatus = storage.remove(idToRemove);
    if(removeStatus == true) { std:: cout << "Successfully removed animal" << std::endl;}
    else {std::cout << "Error: Animal ID not found" << std::endl;}
}

void Control::viewAnimals(){ view.viewAnimals(&storage); }
