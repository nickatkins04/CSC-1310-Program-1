#ifndef USERS_H
#define USERS_H

#include "driver.cpp"
#include "userData.cpp"


using namespace std;

class UserStorage
{
    private:
        short** ptrToDataArr;
        short MAXSIZE;
        short numProfiles;
    public:
        UserStorage(short MAXSIZE);

        ~UserStorage();

        void readData(const std::string& userData);
        
};

#endif