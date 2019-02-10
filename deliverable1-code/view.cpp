#include "view.h"
#include "ui_view.h"
#include "storage.h"

#include <string>
#include <iostream>


View::View(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
}

View::~View()
{
    delete ui;
}

void View::getAnimalInfoFromUser(std::string &breed, std::string &name, int &size, int &age, char &gender, int &fur, bool &hypo, int &species)
{
    // To get char then convert to bool
    char hypoYesNo;

    // Used to clear cin buffer of "\n" char
    // If not cleared getline() doesn't wait for
    // user input
    std::cin.ignore();

    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "0 = Cat, 1 = Dog\nSpecies: ";
    std::cin >> species;
    std::cout << "Breed: ";
    std::cin.ignore();
    std::getline(std::cin, breed);
    std::cout << "0 = Teacup, 1 = Small, 2 = Medium, 3 = Large\nSize: ";
    std::cin >> size;
    std::cout << "Age in years: ";
    std::cin >> age;
    std::cout << "Gender(f/m): ";
    std::cin >> gender;
    std::cout << "0 = Hairless, 1 = Shorthair, 2 = Longhair\nHair type: ";
    std::cin >> fur;
    std::cout << "Is Hypoallergenic? (y/n): ";
    std::cin >> hypoYesNo;

    if(hypoYesNo == 'y') { hypo = true;}
    else {hypo = false; }
}

/** Function: viewAnimals(Storage* animalStorage)
 *  in: Storage* animalStorage
 *  Purpose: Creates a header and prints the string returned
 *           by the animalStorage's getFormattedInfo() function */
void View::viewAnimals(Storage* animalStorage)
{
    std::cout << "\n___Animals___\n" << animalStorage->getFormattedInfo();
}

/** Function: getIdForAnimal()
 *  out: int returnId
 *  Purpose: Prompts the user for animal Id.
 *           This can then be used to find or remove the
 *           animal with that ID */
int View::getIdForAnimal()
{
    int returnId;
    std::cout << "Enter id of animal: ";
    std::cin >> returnId;
    return returnId;
}
