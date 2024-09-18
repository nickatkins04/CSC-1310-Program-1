#include <iostream>
using namespace std;
int main()
{
    // main menu function variables
    short selection;
    bool mainMenu = true, enteringProfileData;
    // Profile function variables
    short day, month, year, sign, monthMin;
    string name;
    char profileDataCheck;
    string zodiacMonthSigns[12] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};
    int daySum;

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
        if (selection > 0 and selection < 3)
        {
            mainMenu = false;
            // Function call to horoscope profile information getter thing (later)
            // Also supposed to use a class here but we getting big lazy for now
            enteringProfileData = true;
            while (enteringProfileData)
            {
                cout << "Enter your full name: ", getline(cin, name), cout << endl;
                cout << "Enter your birthday in a dy/mt/year format:" << endl;
                cout << "Day: ", cin >> day, cout << endl;
                cout << "Month: ", cin >> month, cout << endl;
                cout << "Year: ", cin >> year, cout << endl;
                //Use month to get minimum day num and add day to find number then use number to determine sign
                /*
                    Jan: 0
                    Feb: 31
                    Mar: 59
                    Apr: 90
                    May: 120
                    Jun: 151
                    Jul: 181
                    Aug: 212
                    Sep: 243
                    Oct: 273
                    Nov: 304
                    Dec: 334
                */
                if (month == 1)
                {
                    monthMin = 0;
                }
                else if (month == 2)
                daySum = monthMin + day;
                cout << "daySum: " << daySum << endl;
                // FUNCTION THIS
                // Aries
                if(daySum >= 80 and daySum <= 109)
                {
                    sign = 0;
                }
                // Taurus
                else if (daySum > 109 and daySum <= 140)
                {
                    sign = 1;
                }
                // Gemini
                else if (daySum > 140 and daySum <= 171)
                {
                    sign = 2;
                }
                // Cancer
                else if (daySum > 171 and daySum <= 203)
                {
                    sign = 3;
                }
                // Leo
                else if (daySum > 203 and daySum <= 234)
                {
                    sign = 4;
                }
                // Virgo
                else if (daySum > 234 and daySum <= 265)
                {
                    sign = 5;
                }
                // Libra
                else if (daySum > 265 and daySum <= 295)
                {
                    sign = 6;
                }
                // Scorpio
                else if (daySum > 295 and daySum <= 325)
                {
                    sign = 7;
                }
                // Sagittarius
                else if (daySum > 325 and daySum <= 355)
                {
                    sign = 8;
                }

                // Capricorn
                else if (daySum > 355 and daySum <= 19)
                {
                    sign = 9;
                }
                // Aquarius
                else if (daySum > 19 and daySum <= 49)
                {
                    sign = 10;
                }
                // Pisces
                else if (daySum > 49 and daySum <= 79)
                {
                    sign = 11;
                }

                //Function for printing out profile info
                cout << "Here is your profile:" << endl;
                cout << "Name: " << name << endl;
                cout << "Birthday: " << day << "/" << month << "/" << year << endl;
                cout << "Is this data correct? (y/n): ", cin >> profileDataCheck, cout << endl;
                if (profileDataCheck == 'y' or profileDataCheck == 'Y')
                {
                    cout << "Zodiac Sign: " << zodiacMonthSigns[sign] << endl;
                    enteringProfileData = false;
                }
            }
            
        }
        
    }
    
    return 0;
}