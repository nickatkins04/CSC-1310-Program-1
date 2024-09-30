// #include "driver.cpp"
#include "userData.h"
#include "users.cpp"

using namespace std;

// class UserData
// {
//     private:
//         short day, month, year, sign;
//         string name;
//     public:
//         short determineSign(short month, short day);
// };

short determineSign(short month, short day)
{
    short monthMin[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    // Define the zodiac sign ranges
    short zodiacRanges[12][12] = {
        {80, 109},   // Aries
        {110, 140},  // Taurus
        {141, 171},  // Gemini
        {172, 203},  // Cancer
        {204, 234},  // Leo
        {235, 265},  // Virgo
        {266, 295},  // Libra
        {296, 325},  // Scorpio
        {326, 355},  // Sagittarius
        {356, 19},   // Capricorn (wraps around)
        {20, 49},    // Aquarius
        {50, 79}     // Pisces
    };
    short sign;
    short daySum;

    daySum = monthMin[month - 1] + day;

    // Determine zodiac sign based on daySum
    for (int i = 0; i < 12; i++) 
    {
        if (daySum >= zodiacRanges[i][0] && daySum <= zodiacRanges[i][1]) 
        {
            sign = i;
            break;
        }
    }
    return sign;
}