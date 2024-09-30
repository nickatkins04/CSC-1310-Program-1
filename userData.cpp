#include "driver.cpp"
#include "users.cpp"

using namespace std;

class userData
{
    private:
        short day, month, year, sign;
        string name;
        short* userDataPtr[5];
        userDataPtr[0] = &name;
        userDataPtr[1] = 
    public:
        short determineSign(int month, int day);
};