#ifndef CLIENT_H
#define CLIENT_H

#include "profile.h"
#include <string>

#define CLIENT_STORAGE_CODE 2

class Client: public Profile
{
public:
    Client();
    std::string getFormattedInfo();
    void setIdNumber(int);
    std::string getListInfoStr();
    void setContactInformation(std::string firstName, std::string lastName, std::string address, std::string phone,
                               std::string email, std::string city, std::string province);
    std::string getEmail();

private:
    std::string firstName, lastName, address,
        phone, email, city, province;
    int idStr;

};

#endif // CLIENT_H
