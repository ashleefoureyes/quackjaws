#include "client.h"

Client::Client() { this->idNumber = -1; }

std::string Client::getFormattedInfo()
{
    std::string returnStr = "";
    returnStr += "Name: " + firstName + " " + lastName + "\n";
    returnStr += "Address: " + address + ", \n \t" + city + ", " + province + "\n";
    returnStr += "Phone: (" + phone.substr(0,3) + ")" + phone.substr(3,3) + "-" + phone.substr(6,phone.length()) + "\n";
    returnStr += "Email: " + email;

    return returnStr;
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

//(Id)(FirstName)(LastName)(Address)(City)(Province)(Phone)(Email)
std::string Client::getSaveInfo()
{
    std::string returnStr = "";
    returnStr = "(" + std::to_string(idNumber) + ")(" + firstName + ")(" + lastName + ")(" +
            address + ")(" + city + ")(" + province + ")(" + phone + ")(" + email + ")";
    return returnStr;
}

std::string Client::getFirstName() { return firstName; }
std::string Client::getLastName() { return lastName; }
std::string Client::getAddress() { return address; }
std::string Client::getPhoneNum() { return phone; }
std::string Client::getCity() { return city; }
std::string Client::getProvince() { return province; }
