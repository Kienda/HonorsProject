#include "user.h"
#include <iostream>

// Constructor
User::User(const std::string &name, const std::string &email, int emplID)
    : name(name), email(email), emplID(emplID) {}

// Getters
std::string User::getName() const { return name; }
std::string User::getEmail() const { return email; }
int User::getEmplID() const { return emplID; }

// Display
void User::display() const
{
    std::cout << "Name: " << name << "\nEmail: " << email << "\nEmployee ID: " << emplID << std::endl;
}
