#include "View.h"
#include "Storage.h"

#include <string>
#include <iostream>

/** Function: displayMenu()
 *  in: N/A
 *  out: int userChoice
 * 
 *  Purpose: Prompts user for their choice until they enter a valid input
*/
int View::displayMenu()
{
    int userChoice = -1;
    int numOfOptions = 3;

    while(userChoice < 0 || userChoice > numOfOptions)
    {
        std::cout << "\n___Choices___:\n" <<
                "(1) Add New Animal\n" << "(2) Remove Animal\n"
                << "(3) View All Animals\n" << "(0) Quit\n" <<
                "What would you like to do: ";
        std::cin >> userChoice;
    }

    return userChoice;
}

/** Function: getAnimalInfoFromUser()
 *  in: N/A
 *  in-out: Animal attributes
 *  out: N/A
 * 
 *  Purpose: Prompts user for animal information then puts this in arguments
 *           that are passed by reference
*/
void View::getAnimalInfoFromUser(std::string &breed, std::string &name, int &size, int &age, char &gender, int &fur, bool &hypo)
{
    // To get char then convert to bool
    char hypoYesNo;

    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Breed: ";
    std::cin >> breed;
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
 *  out: N/A
 * 
 *  Purpose: Creates a header and prints the string returned
 *           by the animalStorage's getFormattedInfo() function
*/
void View::viewAnimals(Storage* animalStorage)
{
    std::cout << "\n___Animals___\n" << animalStorage->getFormattedInfo();
}

/** Function: getIdForAnimal()
 *  in: N/A
 *  out: int returnId
 * 
 *  Purpose: Prompts the user for animal Id.
 *           This can then be used to find or remove the
 *           animal with that ID
*/
int View::getIdForAnimal()
{
    int returnId;
    std::cout << "Enter id of animal: ";
    std::cin >> returnId;
    return returnId;
}