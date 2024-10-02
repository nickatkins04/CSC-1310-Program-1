#include "userData.h"
//#include "userData.cpp"

using namespace std;

int main()
{
    system("CLS");


    UserData** dataArr;

    dataArr = new UserData*[MAXUSERS];

    // main menu function variables
    short selection, profileNum = 0;
    bool mainMenu = true, enteringProfileData = false, selectingProfile = false, viewingProfile = false,mainLoop = true, canShowProfiles;
    // Profile function variables
    short day, month, year, signNum;
    string name, sign, dailyHoroscopePrint;
    char profileDataCheck;
    dataArr[profileNum]->loadProfiles(dataArr, canShowProfiles);
    while (mainLoop)
    {
        while(mainMenu)
        {
            // This is going to be the code with as few functions as possible (I'll make them later)
            // Perhaps this whole main menu can be a function?
            cout << "Welcome to Horoscope!" << endl;
            cout << "1. Enter your information to find your horoscope!" << endl; 
            cout << "2. Select from profiles." << endl;    
            cout << "3. Quit. " << endl;
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
            case 3:
                return 0;
            }
            system("CLS");
        }
        
        while (enteringProfileData)
        {
            /*
            for(int i = 0; i < MAXUSERS; i++)
            {
                name = dataArr[i]->getName();
                if (name == "")
                {
                    profileNum = i;
                }
            }
            */
            cout << "Enter your full name: ", getline(cin, name), cout << endl;
            cout << "Enter your birthday in a mt/dy/year format:" << endl;
            cout << "Month: ", cin >> month, cout << endl;
            cout << "Day: ", cin >> day, cout << endl;
            cout << "Year: ", cin >> year, cout << endl;

            cout << "HELP1" << endl;
            sign = dataArr[profileNum]->determineSign(month, day);
            cout << "HELP2" << endl;
            //signNum = dataArr[profileNum]->determineSignNum(month, day);
            cout << "HELP3" << endl;

            

            system("CLS");
            
            //Function for printing out profile info
            dataArr[profileNum]->displayInfo(name, sign);
            cout << "Is this data correct? (y/n): ", cin >> profileDataCheck, cout << endl;
            cin.ignore();
            if (profileDataCheck == 'y' or profileDataCheck == 'Y')
            {
                //sign = dataArr[profileNum]->getSign();
                cout << "Zodiac Sign: " << sign << endl;
                dataArr[profileNum] = new UserData(name, month, day, year, sign);
                enteringProfileData = false;
                viewingProfile = true;
            }
            system("CLS");
        }   
        while (selectingProfile) // Function call to horoscope profile information getter thing (later)
        {
            profileNum = dataArr[profileNum]->showProfiles(dataArr, selection, canShowProfiles);
            if (profileNum == 0)
            {
                selectingProfile = false;
                mainMenu = true;
            }
            else
            {
                selectingProfile = false;
                viewingProfile = true;
            }

            // V V V Old V V V 
            /*
            cout << "No profiles available at this time" << endl;
            cout << "Hit enter to continue. " << endl;
            cin.get();
            selectingProfile = false;
            system("CLS");
            */
        }
        while (viewingProfile)
        {
            system("CLS");
            cout << "==============================" << endl;
            cout << dataArr[profileNum]->getName() << "\'s profile" << endl;
            cout << "==============================" << endl;
            cout << "Sign: " << dataArr[profileNum]->getSign() << endl;
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
                dataArr[profileNum]->printOut(dataArr, profileNum);
                cout << "Daily Horoscope: " << endl;
                signNum = dataArr[profileNum]->determineSignNum(month, day);
                dailyHoroscopePrint = dataArr[profileNum]->dailyHoroscope(signNum);
                cout << endl << dailyHoroscopePrint << endl;
                cout << "=========================" << endl;
                cout << "Press enter to continue! " << endl;
                cin.ignore();
                cin.get();
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
                system("CLS");
                cin.ignore();
                enteringProfileData = true;
                viewingProfile = false;
                break;
            case 4: 
                system("CLS");
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