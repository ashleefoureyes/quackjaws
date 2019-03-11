#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>

class Client
{
public:
    Client();
    std::string getFormattedInfo();
    void setIdNumber(int);
    std::string getListInfoStr();
    void setContactInformation(std::string firstName, std::string lastName, std::string address, std::string phone,
                               std::string email, std::string city, std::string province);
    std::string getEmail();
    int getId();
    std::string getSaveInfo();

    std::string getFirstName();
    std::string getLastName();
    std::string getAddress();
    std::string getPhoneNum();
    std::string getCity();
    std::string getProvince();

    void setClientAttributes(std::string firstName, std::string lastName, std::string address, std::string phone,
                        std::string email, std::string city, std::string province, int dwelling, int location, int workSchedule,
                        int activity, bool hasChildren, bool hasAnimals, int travels, int children, int goodWAnimals, int strangers,
                        int crowds, int noises, int protector, int energy, int fearful, int affection, int messy,
                        bool wantsDog, bool hasDogAllergies, std::vector<std::string> dogBreeds, int dogAge, int dogSize, int dogGender,
                                int followsCommandsDog, int houseTrained,
                        bool wantsCat, bool hasCatAllergies, std::vector<std::string> catBreeds, int catAge, int catSize, int catGender,
                                int isCurious, int followCommandsCat, int doesntShed,
                        bool wantsBird, bool hasBirdAllergies, std::vector<std::string> birdBreeds, int birdAge, int birdSize, int birdGender,
                                int isQuietBird, int isSocialBird, std::string birdColour,
                        bool wantsLizard, bool hasLizardAllergies, std::vector<std::string> lizardBreeds, int lizardAge, int lizardSize, int lizardGender,
                                int easyToFeed, int simpleLiving, std::string lizardColour,
                        bool wantsRabbit, bool hasRabbitAllergies, std::vector<std::string> rabbitBreeds, int rabbitAge, int rabbitSize, int rabbitGender,
                                int isSocialRabbit, int needsGrooming, std::string rabbitColour);

private:
    std::string firstName, lastName, address,
        phone, email, city, province;
    int idNumber;
    int CLIENT_STORAGE_CODE = 1;

    // Client attributes
    int dwelling, location, workSchedule, activity;
    bool hasChildren, hasAnimals;

    // General Animal Attributes
    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy;

    // Dog
    bool wantsDog, hasDogAllergies;
    std::vector<std::string> dogBreeds;
    int dogAge, dogSize, dogGender, dogFur; // Physical
    int quietness, followsCommandsDog, houseTrained; // Importance of

    // Cat
    bool wantsCat, hasCatAllergies;
    std::vector<std::string> catBreeds;
    int catAge, catGender, catSize, catFur; // Physical
    int isCurious, followCommandsCat, doesntShed; // Importance of

    // Bird
    bool wantsBird, hasBirdAllergies;
    std::vector<std::string> birdBreeds;
    int birdAge, birdGender, birdSize, birdFur; // Physical
    std::string birdColour;
    int isQuietBird, isSocialBird; // Importance of

    // Lizard
    bool wantsLizard, hasLizardAllergies;
    std::vector<std::string> lizardBreeds;
    int lizardAge, lizardGender, lizardSize, lizardFur; // Physical
    std::string lizardColour;
    int easyToFeed, simpleLiving; // Importance of

    // Rabbit
    bool wantsRabbit, hasRabbitAllergies;
    std::vector<std::string> rabbitBreeds;
    int rabbitAge, rabbitGender, rabbitSize, rabbitFur; // Physical
    std::string rabbitColour;
    int isSocialRabbit, needsGrooming; // Importance of

};

#endif // CLIENT_H
