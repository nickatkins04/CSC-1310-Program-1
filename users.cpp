#include "users.h"

#include <iostream>
#include <fstream>

UserStorage::UserStorage(short MAXSIZE)
{
    users = new UserData*[MAXSIZE];
    for (short i = 0; i < MAXSIZE; i++)
        users[i] = nullptr;
}

UserStorage::~UserStorage()
{
    for (short i = 0; i < numProfiles; i++)
        delete users[i];

    delete[] users;
}

void UserStorage::readData(const std::string &filename)
{
    std::ifstream infile(filename);
    if (!infile)
    {
        std::cout << "Unable to open file " << filename << std::endl;
        return;
    }

    infile.close();
}

void UserStorage::printAllUsers()
{
    std::string name;
    std::string sign;

    for (short i = 0; i < numProfiles; i++)
    {
        users[i]->displayInfo(name, sign);

    }
    
}

void UserStorage::addUser(UserData* user)
{
    if (numProfiles < MAXSIZE)
        users[numProfiles++] = user;
    else
        std::cout << "Storage is full. Cannot add more users." << std::endl;
}

short UserStorage::getNumUsers() const
{
    return numProfiles;
}

UserData* UserStorage::getUser(short index) const
{
    if (index >= 0 && index < numProfiles)
        return users[index];
    else
    {
        cout << "Invalid index: " << index << ". Returning nullptr." << endl;
        return nullptr;
    }
}