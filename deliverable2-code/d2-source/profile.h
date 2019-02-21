#ifndef PROFILE_H
#define PROFILE_H

#include <string>
#include <vector>

class Profile
{
    public:
        Profile();
        virtual ~Profile() {}
        virtual std::string getFormattedInfo() = 0;
        virtual void setIdNumber(int) = 0;
        int getId();

    protected:
        int profileId;

};

#endif // PROFILE_H
