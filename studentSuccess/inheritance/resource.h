#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource
{
protected:
    std::string title;
    std::string description;
    std::string type;

public:
    // Constructor
    Resource(const std::string &title, const std::string &description, const std::string &type);

    // Getters
    std::string getTitle() const;
    std::string getDescription() const;
    std::string getType() const;

    // Display
    virtual void display() const;
};

#endif // RESOURCE_H
