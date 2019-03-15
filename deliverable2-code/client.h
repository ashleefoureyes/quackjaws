#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>
#include <QString>

class Client
{
public:
    Client();
    std::string getFormattedInfo();
    QString getFormattedInfoQ();
    void setIdNumber(int);
    std::string getListInfoStr();
    void setContactInformation(std::string firstName, std::string lastName, std::string address, std::string phone,
                               std::string email, std::string city, std::string province);
    std::string getEmail();
    int getId();

    std::string getFirstName();
    std::string getLastName();
    std::string getAddress();
    std::string getPhoneNum();
    std::string getCity();
    std::string getProvince();

    QString getClientAttributesQ();

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
                                int isSocialRabbit, int needsGrooming, std::string rabbitColour, int dogFur, int catFur, int birdFur, int lizardFur, int rabbitFur,
                        int quietness, int age);

    std::string getDwellingStr(); std::string getDwellingLocation();


    // Client info
    int getDwelling() const; int getLocation() const; int getWorkSchedule() const;
    int getActivity() const; bool getHasChildren() const; bool getHasAnimals() const;
    int getAge() const;

    // General animal prefs
    int getTravels() const; int getChildren() const; int getGoodWAnimals() const;
    int getStrangers() const; int getCrowds() const; int getNoises() const;
    int getProtector() const; int getEnergy() const; int getFearful() const;
    int getAffection() const; int getMessy() const;
    std::string getBreedSpecificPrefsStr(int);

    // Dog-specific
    bool getWantsDog() const; bool getHasDogAllergies() const; std::vector<std::string> getDogBreeds() const;
    int getDogAge() const; int getDogSize() const; int getDogGender() const;
    int getDogFur() const; int getQuietness() const; int getFollowsCommandsDog() const;
    int getHouseTrained() const;

    // Cat-specific
    bool getWantsCat() const; bool getHasCatAllergies() const; std::vector<std::string> getCatBreeds() const;
    int getCatAge() const; int getCatGender() const; int getCatSize() const;
    int getCatFur() const; int getIsCurious() const; int getFollowCommandsCat() const;
    int getDoesntShed() const;

    // Bird-specific
    bool getWantsBird() const; bool getHasBirdAllergies() const; std::vector<std::string> getBirdBreeds() const;
    int getBirdAge() const; int getBirdGender() const; int getBirdSize() const;
    int getBirdFur() const; std::string getBirdColour() const; int getIsQuietBird() const;
    int getIsSocialBird() const;

    // Lizard-specific
    bool getWantsLizard() const; bool getHasLizardAllergies() const; std::vector<std::string> getLizardBreeds() const;
    int getLizardAge() const; int getLizardGender() const; int getLizardSize() const;
    int getLizardFur() const; std::string getLizardColour() const; int getEasyToFeed() const;
    int getSimpleLiving() const;

    // Rabbit-specific
    bool getWantsRabbit() const; bool getHasRabbitAllergies() const; std::vector<std::string> getRabbitBreeds() const;
    int getRabbitAge() const; int getRabbitGender() const; int getRabbitSize() const;
    int getRabbitFur() const; std::string getRabbitColour() const; int getIsSocialRabbit() const;
    int getNeedsGrooming() const;

    // Database-specific
    static std::vector<std::string> parseBreedsStr(std::string formattedBreedsStr);
    std::string getDogBreedStr(); std::string getCatBreedStr(); std::string getBirdBreedStr(); std::string getLizardBreedStr(); std::string getRabbitBreedStr();

    // Formatted getters
    QString dogPrefsStrQ();
    QString catPrefsStrQ();
    QString birdPrefsStrQ();
    QString lizardPrefsStrQ();
    QString rabbitPrefsStrQ();

    std::string getBreedPreferencesStr(std::vector<std::string> breedPrefs);

private:
    std::string firstName, lastName, address,
        phone, email, city, province;
    int age;
    int idNumber;
    int CLIENT_STORAGE_CODE = 1;

    // Client attributes
    int dwelling, location, workSchedule, activity;
    bool hasChildren, hasAnimals;

    // General Animal Preferences
    int travels, children, goodWAnimals, strangers, crowds,
        noises, protector, energy, fearful, affection, messy;

    // Dog-specific
    bool wantsDog, hasDogAllergies;
    std::vector<std::string> dogBreeds;
    int dogAge, dogSize, dogGender, dogFur; // Physical
    int quietness, followsCommandsDog, houseTrained;// Importance of

    // Cat-specific
    bool wantsCat, hasCatAllergies;
    std::vector<std::string> catBreeds;
    int catAge, catGender, catSize, catFur; // Physical
    int isCurious, followCommandsCat, doesntShed; // Importance of

    // Bird-specific
    bool wantsBird, hasBirdAllergies;
    std::vector<std::string> birdBreeds;
    int birdAge, birdGender, birdSize, birdFur; // Physical
    std::string birdColour;
    int isQuietBird, isSocialBird; // Importance of

    // Lizard-specific
    bool wantsLizard, hasLizardAllergies;
    std::vector<std::string> lizardBreeds;
    int lizardAge, lizardGender, lizardSize, lizardFur; // Physical
    std::string lizardColour;
    int easyToFeed, simpleLiving; // Importance of

    // Rabbit-specific
    bool wantsRabbit, hasRabbitAllergies;
    std::vector<std::string> rabbitBreeds;
    int rabbitAge, rabbitGender, rabbitSize, rabbitFur; // Physical
    std::string rabbitColour;
    int isSocialRabbit, needsGrooming; // Importance of

    std::string getActivityLevelStr(); std::string getWorkScheduleStr();
    std::string getAgePrefsStr(int speciesAgePrefs); std::string getSexPrefsStr(int speciesSexPrefs); std::string getSizePrefsStr(int speciesSizePrefs);
    std::string getAnimalScaleStr(int speciesScalePrefs); std::string getAnimalFurStr(int speciesFurPrefs);
    std::string yesOrNo(bool boolean);

    std::string generalAnimalPrefs(std::vector<std::string> breeds, int age, int size, int gender, int fur, int allergies, std::string colour, std::string species);
    std::string generalAnimalPrefs(std::vector<std::string> breeds, int age, int size, int gender, int fur, int allergies);

    std::string getDBBreeds(std::vector<std::string> breeds);
};

#endif // CLIENT_H
