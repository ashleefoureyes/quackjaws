#include "client.h"

Client::Client() { this->idNumber = -1; }

/** Function: getFormattedInfo()
 *  Out: Formatted string of client contract info  */
std::string Client::getFormattedInfo()
{
    std::string returnStr = "";
    returnStr += "Name: " + firstName + " " + lastName + "\n";
    returnStr += "Address: " + address + ", \n \t" + city + ", " + province + "\n";
    returnStr += "Phone: (" + phone.substr(0,3) + ")" + phone.substr(3,3) + "-" + phone.substr(6,phone.length()) + "\n";
    returnStr += "Email: " + email;

    return returnStr;

}

/** Function: getFormattedInfoQ()
 *  Out: Formatted QString of client contact info
 *  Purpose: Returns same info as getFormatted info but as a QString
 *           with bolding in section names  */
QString Client::getFormattedInfoQ()
{
    std::string returnStr = "";
    returnStr += "<b>Name:</b> " + firstName + " " + lastName + "<br>";
    returnStr += "<b>Address</b>: " + address + ", \n \t" + city + ", " + province + "<br>";
    returnStr += "<b>Phone:</b> (" + phone.substr(0,3) + ")" + phone.substr(3,3) + "-" + phone.substr(6,phone.length()) + "<br>";
    returnStr += "<b>Email:</b> " + email;

    return QString::fromStdString(returnStr);

}

/** Function: getClientAttributesQ()
 *  Out: QString of client attributes
 *  Purpose: Returns client attributes in formatted QString
 *           with bolding and newlines */
QString Client::getClientAttributesQ()
{
    std::string returnStr = "";
    returnStr += "<b>Dwelling type: </b>" + getDwellingStr() + "<br>";
    returnStr += "<b>Dwelling location: </b>" + getDwellingLocation() + "<br>";
    returnStr += "<b>Has young children: </b>" + yesOrNo(hasChildren) + "<br>";
    returnStr += "<b>Has other animals: </b>" + yesOrNo(hasAnimals) + "<br>";
    returnStr += "<b>Work schedule: </b>" + getWorkScheduleStr() + "<br>";

    return QString::fromStdString(returnStr);
}

void Client::setIdNumber(int newId)
{
    std::string idStr = std::to_string(CLIENT_STORAGE_CODE) + std::to_string(newId);
    idNumber = std::stoi(idStr);
}

std::string Client::getListInfoStr()
{
    std::string returnStr = "";
    returnStr += std::to_string(idNumber) + ": " + firstName + " " + lastName;
    return returnStr;
}

void Client::setContactInformation(std::string firstName, std::string lastName, std::string address, std::string phone,
                           std::string email, std::string city, std::string province)
{
    this->firstName = firstName; this->lastName = lastName; this->address = address; this->phone = phone;
    this->email = email; this->city = city; this->province = province;
}

std::string Client::getEmail() { return email; }

int Client::getId() { return idNumber; }

/** Function: animalPrefsQ
 *  In: breeds, age, gender, fur, allergies
 *  Out: Formatted QString
 *  Purpose: Returns formatted info for breed information passed to input */
std::string Client::generalAnimalPrefs(std::vector<std::string> breeds, int age, int size, int gender, int fur, int allergies)
{
    std::string returnStr = "";
    returnStr += "<b>Desired breeds: </b>" + getBreedPreferencesStr(breeds) + "<br>";
    returnStr += "<b>Desired age: </b>" + getAgePrefsStr(age) + "<br>";
    returnStr += "<b>Desired size: </b>" + getSizePrefsStr(size) + "<br>";
    returnStr += "<b>Desired sex: </b>" + getSexPrefsStr(gender) + "<br>";
    returnStr += "<b>Desired fur: </b>" + getAnimalFurStr(fur) + "<br>";
    returnStr += "<b>Has allergies: </b>" + yesOrNo(allergies);

    returnStr += "<br><br><b>Preference for animals that: </b><br>";

    return returnStr;
}

/** Function: animalPrefsQ
 *  In: breeds, age, gender, fur, allergies, colour, species
 *  Out: Formatted QString
 *  Purpose: Overloaded version of animalPrefsQ including the colour input parameter
 *           If this extra value is passed then it also sets the colour and fur category
 *           Based on the string passed  */
std::string Client::generalAnimalPrefs(std::vector<std::string> breeds, int age, int size, int gender, int fur, int allergies, std::string colour, std::string species)
{
    std::string returnStr = "";
    returnStr += "<b>Desired breeds: </b>" + getBreedPreferencesStr(breeds) + "<br>";
    returnStr += "<b>Desired age: </b>" + getAgePrefsStr(age) + "<br>";
    returnStr += "<b>Desired size: </b>" + getSizePrefsStr(size) + "<br>";
    returnStr += "<b>Desired sex: </b>" + getSexPrefsStr(gender) + "<br>";

    if(species == "bird")
    {
        returnStr += "<b>Wants bird with feathers: </b>";
        if(birdFur == 0) { returnStr += "Yes<br>"; }
        else {  returnStr += "No<br>";}
    }

    else if(species == "lizard")
    {
        returnStr += "<b>Desired scales: </b>" + getAnimalScaleStr(fur) + "<br>";
    }
    else { returnStr += "<b>Desired fur: </b>" + getAnimalFurStr(fur) + "<br>"; } // If not bird or lizard use fur


    returnStr += "<b>Has allergies: </b>" + yesOrNo(allergies) + "<br>";
    returnStr += "<b>Desired colour: </b>" + colour;

    returnStr += "<br><br><b>Preference for animals that: </b><br>";

    return returnStr;
}

QString Client::dogPrefsStrQ()
{
    std::string returnStr = "";

    returnStr = generalAnimalPrefs(getDogBreeds(), getDogAge(), getDogSize(), getDogGender(), getDogFur(), getHasDogAllergies());

    returnStr += "<b>Is quiet: </b>" + getBreedSpecificPrefsStr(getQuietness()) + "<br>";
    returnStr += "<b>Follows commands: </b>" + getBreedSpecificPrefsStr(getFollowsCommandsDog()) + "<br>";
    returnStr += "<b>Is house trained: </b>" + getBreedSpecificPrefsStr(getHouseTrained()) + "<br>";


    return QString::fromStdString(returnStr);
}

QString Client::catPrefsStrQ()
{
    std::string returnStr = "";

    returnStr = generalAnimalPrefs(getCatBreeds(), getCatAge(), getCatSize(), getCatGender(), getCatFur(), getHasCatAllergies());

    returnStr += "<b>Is curious: </b>" + getBreedSpecificPrefsStr(getIsCurious()) + "<br>";
    returnStr += "<b>Follows commands: </b>" + getBreedSpecificPrefsStr(getFollowCommandsCat()) + "<br>";
    returnStr += "<b>Doesn't shed: </b>" + getBreedSpecificPrefsStr(getDoesntShed()) + "<br>";

    return QString::fromStdString(returnStr);
}

QString Client::birdPrefsStrQ()
{
    std::string returnStr = "";

    returnStr = generalAnimalPrefs(getBirdBreeds(), getBirdAge(), getBirdSize(), getBirdGender(), getBirdFur(), getHasBirdAllergies(), getBirdColour(), "bird");

    returnStr += "<b>Is quiet: </b>" + getBreedSpecificPrefsStr(getIsQuietBird()) + "<br>";
    returnStr += "<b>Is social: </b>" + getBreedSpecificPrefsStr(getIsSocialBird()) + "<br>";

    return QString::fromStdString(returnStr);
}

QString Client::lizardPrefsStrQ()
{
    std::string returnStr = "";

    returnStr = generalAnimalPrefs(getLizardBreeds(), getLizardAge(), getLizardSize(), getLizardGender(), getLizardFur(), getHasLizardAllergies(), getLizardColour(), "lizard");

    returnStr += "<b>Is easy to feed: </b>" + getBreedSpecificPrefsStr(getEasyToFeed()) + "<br>";
    returnStr += "<b>Simple living space: </b>" + getBreedSpecificPrefsStr(getSimpleLiving()) + "<br>";

    return QString::fromStdString(returnStr);
}

QString Client::rabbitPrefsStrQ()
{
    std::string returnStr = "";

    returnStr = generalAnimalPrefs(getRabbitBreeds(), getRabbitAge(), getRabbitSize(), getRabbitGender(), getRabbitFur(), getHasRabbitAllergies(), getRabbitColour(), "rabbit");

    returnStr += "<b>Is social: </b>" + getBreedSpecificPrefsStr(getIsSocialRabbit()) + "<br>";
    returnStr += "<b>Needs grooming: </b>" + getBreedSpecificPrefsStr(getNeedsGrooming()) + "<br>";

    return QString::fromStdString(returnStr);
}

std::string Client::getDogBreedStr() { return getDBBreeds(dogBreeds); }
std::string Client::getCatBreedStr() { return getDBBreeds(catBreeds); }
std::string Client::getBirdBreedStr() { return getDBBreeds(birdBreeds); }
std::string Client::getLizardBreedStr() { return getDBBreeds(lizardBreeds); }
std::string Client::getRabbitBreedStr() { return getDBBreeds(rabbitBreeds); }

/** Function: getDBBreeds(desiredBreeds)
 *  In: vector desriedBreeds
 *  Out: Formatted str of breeds
 *  Purpose: Takes the breed vector and formats it in a way that it can be stored in the DB */
std::string Client::getDBBreeds(std::vector<std::string> desiredBreeds)
{
    if(desiredBreeds.size() == 0) { return ""; }

    std::string returnStr = "(";

    for(int i = 0; i < static_cast<int>(desiredBreeds.size()); ++i)
    {
        returnStr += desiredBreeds.at(static_cast<unsigned int>(i));

        if((i+1) >= static_cast<int>(desiredBreeds.size())) { returnStr += ")"; break;}
        else { returnStr += ")("; }
    }

    return returnStr;
}

/** Function: static parseBreedsStr(string)
 *  In: Formatted breeds string
 *  Out: Vector of breeds
 *  Purpose: Takes a string in the format returned by getDBBreeds() and turns it into a vector
 *           that is returned */
std::vector<std::string> Client::parseBreedsStr(std::string breedsStr)
{
    std::vector<std::string> vect;

    while(breedsStr.length() > 0)
    {
        vect.push_back(breedsStr.substr(breedsStr.find("(") + 1, breedsStr.find(")") - 1));
        breedsStr = breedsStr.substr(breedsStr.find(")") + 1);
    }

    return vect;
}

bool Client::areAllAttributesSet()
{
    return !(travels < 0 || children < 0 || goodWAnimals < 0 || strangers < 0 ||
             crowds < 0 || noises < 0 || protector < 0 || energy < 0 || fearful < 0 ||
             affection < 0 || messy < 0);
}

std::string Client::getFirstName() { return firstName; }
std::string Client::getLastName() { return lastName; }
std::string Client::getAddress() { return address; }
std::string Client::getPhoneNum() { return phone; }
std::string Client::getCity() { return city; }
std::string Client::getProvince() { return province; }

void Client::setClientAttributes(std::string firstName, std::string lastName, std::string address, std::string phone,
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
                            int isSocialRabbit, int needsGrooming, std::string rabbitColour,
                    int dogFur, int catFur, int birdFur, int lizardFur, int rabbitFur, int quietness, int age)
{
    setContactInformation(firstName, lastName, address, phone, email, city, province);
    this->dwelling = dwelling; this->location = location; this->workSchedule = workSchedule; this->activity = activity;
    this->hasChildren = hasChildren; this->hasAnimals = hasAnimals; this->travels = travels; this->children = children;
    this->goodWAnimals = goodWAnimals; this->strangers = strangers; this->crowds = crowds; this->noises = noises; this->protector = protector;
    this->energy = energy; this->fearful = fearful; this->affection = affection; this->messy = messy; this->age = age;

    this->wantsDog = wantsDog; this->hasDogAllergies = hasDogAllergies; this->dogBreeds = dogBreeds; this->dogAge = dogAge; this->dogSize = dogSize;
    this->dogGender = dogGender; this->followsCommandsDog = followsCommandsDog; this->houseTrained = houseTrained; this->dogFur = dogFur; this->quietness = quietness;

    this->wantsCat = wantsCat; this->hasCatAllergies = hasCatAllergies; this->catBreeds = catBreeds; this->catAge = catAge;
    this->catSize = catSize; this->catGender = catGender; this->isCurious = isCurious; this->followCommandsCat = followCommandsCat;
    this->doesntShed = doesntShed; this->catFur = catFur;

    this->wantsBird = wantsBird; this->hasBirdAllergies = hasBirdAllergies; this->birdBreeds = birdBreeds; this->birdAge = birdAge; this->birdSize = birdSize;
    this->birdGender = birdGender; this->isQuietBird = isQuietBird; this->isSocialBird = isSocialBird; this->birdColour = birdColour; this->birdFur = birdFur;

    this->wantsLizard = wantsLizard; this->hasLizardAllergies = hasLizardAllergies; this->lizardBreeds = lizardBreeds; this->lizardAge = lizardAge;
    this->lizardSize = lizardSize; this->lizardGender = lizardGender; this->easyToFeed = easyToFeed; this->simpleLiving = simpleLiving; this->lizardColour = lizardColour;
    this->lizardFur = lizardFur;

    this->wantsRabbit = wantsRabbit; this->hasRabbitAllergies = hasRabbitAllergies; this->rabbitBreeds = rabbitBreeds; this->rabbitAge = rabbitAge; this->rabbitSize = rabbitSize;
    this->rabbitGender = rabbitGender; this->isSocialRabbit = isSocialRabbit; this->needsGrooming = needsGrooming; this->rabbitColour = rabbitColour; this->rabbitFur = rabbitFur;

}

std::string Client::getDwellingStr()
{
    switch(dwelling)
    {
    case 0: return "Small apartment/condominium";
    case 1: return "Large apartment/condominium";
    case 2: return "Townhouse";
    case 3: return "Detached house";
    case 4: return "Farm";
    default: return "No preference";
    }
}

/** Function: getBreedPreferencesStr()
 *  In: vector desiredBreeds string
 *  Out: Formatted string of desired breeds
 *  Purpose: Takes all breeds in the vector and returns a formatted string
 *           If the string gets too long it starts on a new line */
std::string Client::getBreedPreferencesStr(std::vector<std::string> desiredBreeds)
{
    if(desiredBreeds.empty()) { return "No preference"; }

    // Using two variables here. newline is a buffer where breeds are added
    // and once it passes a certain length it is flused into returnStr with a <br>
    // at the end
    std::string returnStr = "";
    std::string newline = "";
    for(int i = 0; i < static_cast<int>(desiredBreeds.size()); ++i)
    {
        newline += desiredBreeds.at(static_cast<unsigned int>(i));

        if(i >= static_cast<int>(desiredBreeds.size())) { returnStr += newline; break; }
        else if (newline.length() > 30) { returnStr += (newline + ",<br>"); newline = ""; }
        else { newline += ", "; }
    }

    returnStr += newline + "<br>";
    return returnStr;
}

int Client::getAge() const
{
    return age;
}

std::string Client::getDwellingLocation()
{
    switch(location)
    {
    case 0: return "Urban";
    case 1: return "Suburban";
    case 2: return "Rural";
    default: return "No preference";
    }
}

std::string Client::getActivityLevelStr()
{
    switch(activity)
    {
    case 0: return "Very Inactive";
    case 1: return "Inactive";
    case 2: return "Somewhat active";
    case 3: return "Active";
    case 4: return "Very active";
    default: return "No preference";
    }
}


std::string Client::getWorkScheduleStr()
{
    switch(workSchedule)
    {
    case 0: return "9 to 5";
    case 1: return "Afternoon to late evening";
    case 2: return "Varying shifts";
    case 3: return "Overnight shifts";
    case 4: return "Early morning to early afternoon";
    case 5: return "Inconsistent";
    case 6: return "Unemployed";
    default: return "No preference";
    }
}

std::string Client::getAnimalFurStr(int speciesFurPrefs)
{
    switch(speciesFurPrefs)
    {
    case 0: return "Hairless";
    case 1: return "Short";
    case 2: return "Long";
    default: return "No preference";
    }
}

std::string Client::getAnimalScaleStr(int speciesScalePrefs)
{
    switch(speciesScalePrefs)
    {
    case 0: return "Smooth";
    case 1: return "Rough";
    case 2: return "Spikes";
    default: return "No preference";
    }
}

std::string Client::getAgePrefsStr(int speciesAgePrefs)
{
    switch(speciesAgePrefs)
    {
    case 0: return "0-3";
    case 1: return "4-7";
    case 2: return "8-11";
    case 3: return "12-15";
    case 4: return "15-25";
    case 5: return "25-35";
    case 6: return "35+";
    default: return "No preference";
    }
}

std::string Client::getSizePrefsStr(int speciesSizePrefs)
{
    switch(speciesSizePrefs)
    {
    case 0: return "Teacup";
    case 1: return "Small";
    case 2: return "Medium";
    case 3: return "Large";
    default: return "No preference";
    }
}

std::string Client::getSexPrefsStr(int speciesSexPrefs)
{
    switch(speciesSexPrefs)
    {
    case 0: return "Male";
    case 1: return "Female";
    default: return "No preference";
    }
}

std::string Client::getBreedSpecificPrefsStr(int prefNum)
{
    switch(prefNum)
    {
    case 0: return "Not at all";
    case 1: return "Not much";
    case 2: return "Unimportant";
    case 3: return "Somewhat";
    case 4: return "A lot";
    default: return "N/A";
    }
}

std::string Client::yesOrNo(bool boolean)
{
    if(boolean == true) { return "Yes"; }
    return "No";
}

int Client::getDwelling() const
{
    return dwelling;
}

int Client::getLocation() const
{
    return location;
}

int Client::getWorkSchedule() const
{
    return workSchedule;
}

int Client::getActivity() const
{
    return activity;
}

bool Client::getHasChildren() const
{
    return hasChildren;
}

bool Client::getHasAnimals() const
{
    return hasAnimals;
}

int Client::getTravels() const
{
    return travels;
}

int Client::getChildren() const
{
    return children;
}

int Client::getGoodWAnimals() const
{
    return goodWAnimals;
}

int Client::getStrangers() const
{
    return strangers;
}

int Client::getCrowds() const
{
    return crowds;
}

int Client::getNoises() const
{
    return noises;
}

int Client::getProtector() const
{
    return protector;
}

int Client::getEnergy() const
{
    return energy;
}

int Client::getFearful() const
{
    return fearful;
}

int Client::getAffection() const
{
    return affection;
}

int Client::getMessy() const
{
    return messy;
}

bool Client::getWantsDog() const
{
    return wantsDog;
}

bool Client::getHasDogAllergies() const
{
    return hasDogAllergies;
}

std::vector<std::string> Client::getDogBreeds() const
{
    return dogBreeds;
}

int Client::getDogAge() const
{
    return dogAge;
}

int Client::getDogSize() const
{
    return dogSize;
}

int Client::getDogGender() const
{
    return dogGender;
}

int Client::getDogFur() const
{
    return dogFur;
}

int Client::getQuietness() const
{
    return quietness;
}

int Client::getFollowsCommandsDog() const
{
    return followsCommandsDog;
}

int Client::getHouseTrained() const
{
    return houseTrained;
}

bool Client::getWantsCat() const
{
    return wantsCat;
}

bool Client::getHasCatAllergies() const
{
    return hasCatAllergies;
}

std::vector<std::string> Client::getCatBreeds() const
{
    return catBreeds;
}

int Client::getCatAge() const
{
    return catAge;
}

int Client::getCatGender() const
{
    return catGender;
}

int Client::getCatSize() const
{
    return catSize;
}

int Client::getCatFur() const
{
    return catFur;
}

int Client::getIsCurious() const
{
    return isCurious;
}

int Client::getFollowCommandsCat() const
{
    return followCommandsCat;
}

int Client::getDoesntShed() const
{
    return doesntShed;
}

bool Client::getWantsBird() const
{
    return wantsBird;
}

bool Client::getHasBirdAllergies() const
{
    return hasBirdAllergies;
}

std::vector<std::string> Client::getBirdBreeds() const
{
    return birdBreeds;
}

int Client::getBirdAge() const
{
    return birdAge;
}

int Client::getBirdGender() const
{
    return birdGender;
}

int Client::getBirdSize() const
{
    return birdSize;
}

int Client::getBirdFur() const
{
    return birdFur;
}

std::string Client::getBirdColour() const
{
    return birdColour;
}

int Client::getIsQuietBird() const
{
    return isQuietBird;
}

int Client::getIsSocialBird() const
{
    return isSocialBird;
}

bool Client::getWantsLizard() const
{
    return wantsLizard;
}

bool Client::getHasLizardAllergies() const
{
    return hasLizardAllergies;
}

std::vector<std::string> Client::getLizardBreeds() const
{
    return lizardBreeds;
}

int Client::getLizardAge() const
{
    return lizardAge;
}

int Client::getLizardGender() const
{
    return lizardGender;
}

int Client::getLizardSize() const
{
    return lizardSize;
}

int Client::getLizardFur() const
{
    return lizardFur;
}

std::string Client::getLizardColour() const
{
    return lizardColour;
}

int Client::getEasyToFeed() const
{
    return easyToFeed;
}

int Client::getSimpleLiving() const
{
    return simpleLiving;
}

bool Client::getWantsRabbit() const
{
    return wantsRabbit;
}

bool Client::getHasRabbitAllergies() const
{
    return hasRabbitAllergies;
}

std::vector<std::string> Client::getRabbitBreeds() const
{
    return rabbitBreeds;
}

int Client::getRabbitAge() const
{
    return rabbitAge;
}

int Client::getRabbitGender() const
{
    return rabbitGender;
}

int Client::getRabbitSize() const
{
    return rabbitSize;
}

int Client::getRabbitFur() const
{
    return rabbitFur;
}

std::string Client::getRabbitColour() const
{
    return rabbitColour;
}

int Client::getIsSocialRabbit() const
{
    return isSocialRabbit;
}

int Client::getNeedsGrooming() const
{
    return needsGrooming;
}
