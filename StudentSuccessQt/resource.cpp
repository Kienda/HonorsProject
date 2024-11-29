#include "resource.h"
#include <iostream>

// Constructor
Resource::Resource(const std::string &title, const std::string &description, const std::string &type)
    : title(title), description(description), type(type) {}

// Getters
std::string Resource::getTitle() const { return title; }
std::string Resource::getDescription() const { return description; }
std::string Resource::getType() const { return type; }

// Display
void Resource::display() const
{
    std::cout << "Title: " << title << "\nDescription: " << description << "\nType: " << type << std::endl;
}
