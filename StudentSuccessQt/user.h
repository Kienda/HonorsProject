#ifndef USER_H
#define USER_H

#include <string>

class User
{
protected:
    std::string name;
    std::string email;
    int emplID;

public:
    // Constructor
    User(const std::string &name, const std::string &email, int emplID);

    // Getters
    std::string getName() const;
    std::string getEmail() const;
    int getEmplID() const;

    // Virtual function for polymorphism
    virtual void display() const;
};

#endif // USER_H
