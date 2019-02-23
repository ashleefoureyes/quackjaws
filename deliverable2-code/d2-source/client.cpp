#include "client.h"

Client::Client()
{

}

std::string Client::getFormattedInfo()
{
    std::string returnStr = "";
    returnStr += firstName + " " + lastName + "\n";
    returnStr += city + ", " + province + "\n";
    returnStr += phone + "\n" + email;

    return returnStr;
}

void Client::setIdNumber(int newId)
{
    std::string idStr = std::to_string(CLIENT_STORAGE_CODE) + std::to_string(newId);
    this->profileId = std::stoi(idStr);
}

std::string Client::getListInfoStr()
{
    std::string returnStr = "";
    returnStr += std::to_string(profileId) + ": " + firstName + " " + lastName;
    return returnStr;
}

void Client::setContactInformation(std::string firstName, std::string lastName, std::string address, std::string phone,
                           std::string email, std::string city, std::string province)
{
    this->firstName = firstName; this->lastName = lastName; this->address = address; this->phone = phone;
    this->email = email; this->city = city; this->province = province;
}
