#ifndef USERDATA_H
#define USERDATA_H  

#include "driver.cpp"
#include "users.cpp"
#include "userData.cpp"

using namespace std;

class UserData
{
    private:
        string name;
        short day, month, year, sign;
        
    public:
        UserData(){}

        UserData(string n, short d, short m, short y, short s)
        {
            name = n;
            month = m;
            day = d;
            year = y;
            sign = s;
        }
        short determineSign(short month, short day);
};

#endif