#include "user.h"

// Default Constructor
User::User() : name(""), email(""), emplID(0) {}

// Setters
void User::setName(const std::string &newName)
{
    name = newName;
}

void User::setEmail(const std::string &newEmail)
{
    email = newEmail;
}

void User::setEmplID(int newEmplID)
{
    emplID = newEmplID;
}

// Getters
std::string User::getName() const
{
    return name;
}

std::string User::getEmail() const
{
    return email;
}

int User::getEmplID() const
{
    return emplID;
}
