#ifndef CLIENT_H
#define CLIENT_H

#include <string>

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

    std::string getFirstName();
    std::string getLastName();
    std::string getAddress();
    std::string getPhoneNum();
    std::string getCity();
    std::string getProvince();

    int getId();
    std::string getSaveInfo();

private:
    std::string firstName, lastName, address,
        phone, email, city, province;
    int idNumber;
    int CLIENT_STORAGE_CODE = 1;

};

#endif // CLIENT_H
