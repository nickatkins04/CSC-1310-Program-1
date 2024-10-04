#ifndef USERS_H
#define USERS_H

#include "userData.h"
#include <string>

using namespace std;

class UserStorage
{
    private:
        UserData** users;
        short MAXSIZE;
        short numProfiles;

    public:
        UserStorage(short MAXSIZE);

        ~UserStorage();

        void readData(std::string& userData);
        void printAllUsers();
        void addUser(UserData* user);
        
};

#endif