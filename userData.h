#ifndef USERDATA_H
#define USERDATA_H  

//#include "driver.cpp"
//#include "userData.cpp"
#include <fstream> // Used for save files
#include <iostream>
#include <string>


// using namespace std;

class UserData
{
    private:
        
        std::string* name;
        std::string* sign;
        short* day;
        short* month;
        short* year;
        short* signNum;
        std::string horoscopes[12] = 
        {
            "Changes taking place at home could lead to more income, Whatever it is, it may not seem like much,\nbut it should make a difference in your financial situation in the long run.", // Aries
            "A walk through your neighborhood could put you in the middle of an unexpected, interesting event.\nWhatever it is, you could be transfixed by it. Make mental notes and then write down your impressions later.", // Taurus
            "Some books you've been reading lately might excite your desire to study astrology, numerology, alchemy,\nor some other occult science. Your values have been shaken up lately anyway, so make the most of the\nimpulse now. It could transform you in a subtle way.", // Gemini
            "Boredom might stimulate your rebellious streak today, Cancer. You could decide to forego your usual tasks\nand do something unusual or unexpected, such as skydiving or horseback riding. Don't feel guilty if\nyou decide to do this. We all need to throw caution to the wind and go for some excitement occasionally.", // Cancer
            "New information could keep your mind buzzing for hours. Make the effort to take a walk and clear your head\nat some point during the day or else you might be too mentally charged up to sleep.", // Leo
            "A future journey may be in the works right now. Your energy, enthusiasm, and excitement are high. ", // Virgo
            "A change in career could be in the works for you. It might be within the scope of your current job or an\nentirely new one. Don't let insecurity or an attachment to your current circumstances hold you back.\nWhatever opportunities appear at this time may not come around again for a long while. Think about it carefully and then follow your heart.", // Libra
            "An unexpected opportunity to go on a long journey, perhaps business-related, could come to you soon.\nA partner might be involved. Your enthusiasm may be almost boundless but remember that your physical energy\nisn't. If you choose to travel right now, make sure you take necessary precautions. ", // Scorpio
            "Too much hard work and stress could be taking a physical toll on you today. But it isn't likely to stop\nyou from working intently and energetically on a project that fascinates you. This enterprise could be\npersonal or job related, but whatever it is, the turn it takes is apt to surprise you. It might not be anything like what you'd planned!", // Sagittarius
            "If you're single, today you could fall in love at first sight. A friend could send you someone's contact\ninformation who shares your interests and with whom you'll talk for hours. This could make you feel\nhappy. You'll certainly enjoy your day. If you want to stay in touch, don't be afraid to say so. Otherwise, you might lose track of your new friend.", // Capricorn
            "Have you been considering working more at home? If so, today you might decide to do just that.\nAn opportunity could pave the way for new jobs you could do at home, in your own space, among your own belongings.\nThis could add to your sense of security. The only downside could be if you don't make the effort, you might never leave the house. Be sure to get your workout in!" // Aquarius
            "A conversation with a sibling or neighbor could lead to you making a new friend today, probably someone\nwho works in a creative profession. If you're currently romantically involved, this person could become\nyour best friend. If you're unattached, sparks could fly between you and him or her. You could talk for hours and part unwillingly. Exchange contact information. You'll be glad you did!" //Picses
        }; // All horoscopes are from Horoscope.com (9/25/2024)
        
    public:
        UserData(){}
        /*
        std::string getName();
        short getMonth();
        short getDay();
        short getYear();
        std::string getSign();
        */

        UserData(std::string n, short d, short m, short y, std::string s);

        // Getters
        std::string getName();

        short getMonth();

        short getDay();

        short getYear();

        std::string getSign();

        // Setters
        void setName(std::string& name);

        void setDay(short day);

        void setMonth(short month);

        void setYear(short year);

        void setSign(std::string& sign);

        // Optional: A method to display user information
        void displayInfo(std::string name, std::string sign);

        short determineSignNum(short month, short day);

        std::string determineSign(short month, short day);
        
        // Loads user info from profiles.txt 
        bool loadProfiles(UserData **user, bool canShowProfiles);

        short showProfiles(UserData **user, short selection, bool canShowProfiles);

        void saveToFile(UserData **user);

        void printOut(UserData **user, short profileNum);

        std::string dailyHoroscope(short signNum);
};

#endif