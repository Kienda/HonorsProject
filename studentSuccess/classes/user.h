#ifndef USER_H
#define USER_H

#include <string>

class User
{
private:
    std::string name;
    std::string email;
    int emplID;

public:
    // Constructor
    User();

    // Setters
    void setName(const std::string &newName);
    void setEmail(const std::string &newEmail);
    void setEmplID(int newEmplID);

    // Getters
    std::string getName() const;
    std::string getEmail() const;
    int getEmplID() const;
};

#endif // USER_H
