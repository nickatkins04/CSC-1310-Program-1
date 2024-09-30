#include <iostream>
#include "users.cpp"
#include "userData.h"
#include "userData.cpp"
#include "users.h"

using namespace std;

int main()
{
    system("CLS");

    UserData** dataArr;

    dataArr = new UserData*[5];

    // main menu function variables
    short selection;
    bool mainMenu = true, enteringProfileData = false, selectingProfile = false, viewingProfile = false,mainLoop = true;;
    // Profile function variables
    short day, month, year, sign;
    string zodiacMonthSigns[12] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};
    string name;
    char profileDataCheck;
    while (mainLoop)
    {
        while(mainMenu)
        {
            // This is going to be the code with as few functions as possible (I'll make them later)
            // Perhaps this whole main menu can be a function?
            cout << "Welcome to Horoscope!" << endl;
            cout << "1. Enter your information to find your horoscope!" << endl; // User save info prompt is later
            cout << "2. Select from profiles." << endl; //Future feature, useless now                         
            cout << "Choice: ", cin >> selection, cout << endl;
            cin.ignore();
            // return selection + end of function (back in driver)
            switch (selection)
            {
            case 1:
                enteringProfileData = true;
                mainMenu = false;
                break;
            case 2:
                selectingProfile = true;
                mainMenu = false;
                break;
            }
            system("CLS");
        }
        
        while (enteringProfileData)
        {
            cout << "Enter your full name: ", getline(cin, name), cout << endl;
            cout << "Enter your birthday in a mt/dy/year format:" << endl;
            cout << "Month: ", cin >> month, cout << endl;
            cout << "Day: ", cin >> day, cout << endl;
            cout << "Year: ", cin >> year, cout << endl;

            sign = determineSign(month, day);

            dataArr[5] = new UserData(name, month, day, year, sign);

            system("CLS");
            
            //Function for printing out profile info
            cout << "Here is your profile:" << endl;
            cout << "Name: " << name << endl;
            cout << "Birthday: " << month << "/" << day << "/" << year << endl;
            cout << "Is this data correct? (y/n): ", cin >> profileDataCheck, cout << endl;
            cin.ignore();
            if (profileDataCheck == 'y' or profileDataCheck == 'Y')
            {
                cout << "Zodiac Sign: " << zodiacMonthSigns[sign] << endl;
                enteringProfileData = false;
                viewingProfile = true;
            }
            system("CLS");
        }   
        while (selectingProfile) // Function call to horoscope profile information getter thing (later)
        {
            cout << "No profiles available at this time" << endl;
            cout << "Hit enter to continue. " << endl;
            cin.get();
            selectingProfile = false;
            system("CLS");
        }
        while (viewingProfile)
        {
            cout << "==============================" << endl;
            cout << name << "\'s profile" << endl;
            cout << "==============================" << endl;
            cout << "Sign: " << zodiacMonthSigns[sign] << endl;
            cout << "------------------------------" << endl;
            cout << "1. View Horoscope" << endl;
            cout << "2. Compare with other profiles" << endl;
            cout << "3. Edit profile" << endl; 
            cout << "4. Go back to main menu" << endl;
            cout << "------------------------------" << endl;
            cout << "Selection: ", cin >> selection, cout << endl;
            switch (selection)
            {
            case 1:
                cout << "Daily Horoscope: " << endl;
                /*
                    Pull from a list of premade horoscopes and have it cycle through each day of the week
                */
                break;
            case 2:
                cout << "===================================" << endl;
                cout << "No profiles available at this time." << endl;
                cout << "Hit enter to continue. \n===================================" << endl;
                cin.ignore();
                cin.get();
                system("CLS");
                break;
            case 3:
                enteringProfileData = true;
                viewingProfile = false;
                break;
            case 4: 
                mainMenu = true;
                viewingProfile = false;
                break;
            }
        }
    }
    return 0;
}

// short determineSign(short month, short day)
// {
//     short monthMin[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
//     // Define the zodiac sign ranges
//     short zodiacRanges[12][12] = {
//         {80, 109},   // Aries
//         {110, 140},  // Taurus
//         {141, 171},  // Gemini
//         {172, 203},  // Cancer
//         {204, 234},  // Leo
//         {235, 265},  // Virgo
//         {266, 295},  // Libra
//         {296, 325},  // Scorpio
//         {326, 355},  // Sagittarius
//         {356, 19},   // Capricorn (wraps around)
//         {20, 49},    // Aquarius
//         {50, 79}     // Pisces
//     };
//     short sign;
//     short daySum;

//     daySum = monthMin[month - 1] + day;

//     // Determine zodiac sign based on daySum
//     for (int i = 0; i < 12; i++) 
//     {
//         if (daySum >= zodiacRanges[i][0] && daySum <= zodiacRanges[i][1]) 
//         {
//             sign = i;
//             break;
//         }
//     }
//     return sign;
// }