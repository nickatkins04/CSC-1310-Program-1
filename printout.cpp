/*
#include <iostream>
using namespace std;

    int num;

void printOut()
{

    cin >> num;
    
    if(num == 1)
    {
        cout << "You are an Aries!\n" << endl;

        cout << "Aries is the first sign of the zodiac,"
    "and thats pretty much how those born under this sign see themselves: first. \n"
    "Aries are the leaders of the pack, first in line to get things going.\n"
    "Whether or not everything gets done is another question altogether,\n"
    "for an Aries prefers to initiate rather than to complete.\n" << endl;
    
    cout << "You share the same sign as: Lady Gaga, William Shakespeare, and Thomas Jefferson." << endl;
    }
    
    else if(num == 2){

        cout << "You are a Taurus!\n" << endl;

        cout << "Taurus, the second sign of the zodiac and the ruler of the second house, \n"
    "is all about reward. Unlike the Aries love of the game, \n"
    "the typical Taurus personality loves the rewards of the game. \n"
    "Think physical pleasures and material goods, \n"
    "for those born under this sign revel in delicious excess.\n" << endl;
    
        cout <<"You share the same sign as: John Cena, George Clooney, and Lizzo." << endl;
    }

    else if(num == 3){

        cout << "You are a Gemini!\n" << endl;

        cout <<"Gemini is the third sign of the zodiac, \n"
    "and those born under this sign will be quick to tell you all about it. \n"
    "That's because they love to talk! It's not just idle chatter with these folks, either. \n"
    "The driving force behind a Gemini zodiac sign's conversation is their mind. Ruling the third house, \n"
    "the Gemini-born are intellectually inclined, forever probing people and places in search of information.\n" << endl;

        cout << "You share the same sign as: John F. Kennedy, Kendrick Lamar, and Morgan Freeman." << endl;
    }

    else if(num == 4){

        cout << "You are a Cancer!\n" << endl;

        cout << "Cancer, the fourth sign of the zodiac, is all about home. \n"
    "Those born under this horoscope sign are 'roots' kinds of people, \n"
    "and take great pleasure in the comforts of home and family. \n"
    "Cancers are maternal, domestic, and love to nurture others. \n"
    "More than likely, their family will be large, too—the more, the merrier!\n"
    "Cancers will certainly be merry if their home life is serene and harmonious.\n" << endl;

        cout << "You share the same sign as: Selena Gomez, Lionel Messi, and Elon Musk." << endl;
    }

    else if(num == 5){

        cout << "You are a Leo!\n";

        cout << "Leo is the fifth sign of the zodiac. \n"
    "These folks are impossible to miss since they love being center stage. \n"
    "Making an impression is Job #1 for Leos, and when you consider their personal magnetism, \n"
    "you see the job is quite easy. Leos are an ambitious lot, \n"
    "and their strength of purpose allows them to accomplish a great deal. \n"
    "The fact that this horoscope sign is also creative makes their endeavors fun for them and everyone else.\n" << endl;
    
        cout << "You share the same sign as: Barack Obama, Kylie Jenner, and Chris Hemsworth." << endl;
    }

    else if(num == 6){

        cout << "You are a Virgo!\n" << endl;

        cout << "Virgo is the sixth sign of the zodiac, to be exact, \n"
    "and that's the way Virgos like it: exacting. \n"
    "Those born under this horoscope sign are forever the butt of jokes for being so picky and critical \n"
    "(and they can be), but their 'attention to detail' is for a reason: to help others. \n"
    "Virgos, more than any other zodiac sign, were born to serve, and it gives them great joy.\n" << endl;
    
        cout << "You share the same sign as: Michael Jackson, Adam Sandler, Kobe Bryant." << endl;
    }

    else if(num == 7){

        cout << "You are a Libra!\n" << endl;

        cout << "Libra is the seventh sign of the zodiac. For a Libra, \n"
    "everything is better if it's done as a pair. \n"
    "Libras are good when paired up, too, since they epitomize balance, harmony, and a sense of fair play. \n"
    "While they are true team players at work, their favorite partnership is at home: marriage. \n"
    "Libras feel most complete when they are coupled up with their lover, forever.\n" << endl;

        cout << "You share the same sign as: Vladimir Putin, Snoop Dogg, and Mahatma Gandhi." << endl;
    }

    else if(num == 8){

        cout << "You are a Scorpio!\n" << endl;

        cout << "Scorpio is the eighth sign of the zodiac, \n"
    "and that shouldn't be taken lightly—nor should Scorpios! \n"
    "Those born under this sign are dead serious in their mission to learn about others. \n"
    "There's no fluff or chatter for Scorpios, either; \n"
    "these folks will zero-in on the essential questions, gleaning the secrets that lie within.\n" << endl;

        cout << "You share the same sign as: Leonardo Di'Caprio, Hillary Clinton, and Bill Gates." << endl;
    }

    else if(num == 9){

        cout << "You are a Sagittarius!\n" << endl;

        cout << "Sagittarius, the ninth sign of the zodiac, \n"
    "is the home of the wanderers of the zodiac. \n"
    "It's not a mindless ramble for these folks, either. Sags are truth-seekers, \n"
    "and the best way for them to do this is to hit the road, talk to others and get some answers.\n" << endl;
    
        cout << "You share the same sign as: Taylor Swift, Kai Cenat, and Kylian Mbappe." << endl;
    }

    else if(num == 10){

        cout << "You are a Capricon!\n" << endl;

        cout << "Capricorn, the tenth sign and mountain goat of the zodiac, is all about hard work. \n"
    "Those born under this sign are more than happy to put in a full day at the office, \n"
    "realizing that it will likely take a lot of those days to get to the top. That's no problem, \n"
    "since Capricorns are both ambitious and determined: they will get there. \n"
    "Life is one big project for these folks, \n"
    "and they adapt to this by adopting a businesslike approach to most everything they do.\n" << endl;

        cout << "You share the same sign as: Dezel Washington, Lebron James, and Steve Harvey." << endl;
    }
    
    else if(num == 11){

        cout << "You are an Aquarius!\n" << endl;

        cout << " Aquarius is the eleventh sign of the zodiac, \n"
    "and Aquarians are the perfect representatives for the Age of Aquarius. \n"
    "Those born under this horoscope sign have the social conscience needed to carry us into the new millennium. \n"
    "Those of the Aquarius zodiac sign are humanitarian, \n"
    "philanthropic, and keenly interested in making the world a better place.\n" << endl;

        cout << "You share the same sign as: Jennifer Anisten, Dr. Dre, and Chris Rock." << endl;
    }

    else if(num == 12){

        cout << "You are a Pisces\n" << endl;

        cout << "Pisces is the twelfth sign of the zodiac, \n"
    "and it is also the final sign in the zodiacal cycle. \n"
    "Hence, this sign brings together many of the characteristics of the eleven signs that have come before it. \n"
    "Pisces, however, are happiest keeping many of these qualities under wraps. \n"
    "These folks are selfless, spiritual, and very focused on their inner journey.\n" << endl;
    
        cout << "You share the same sign as: Millie Bobby Brown, Stephen Curry, and George Washington." << endl;
    }
 }
 */
