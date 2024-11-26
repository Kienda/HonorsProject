#include <iostream>
#include "user.h"

int main()
{
    User user;

    // Prompt the user for input
    std::string name, email;
    int emplID;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    user.setName(name);

    std::cout << "Enter your email: ";
    std::getline(std::cin, email);
    user.setEmail(email);

    std::cout << "Enter your employee ID: ";
    std::cin >> emplID;
    user.setEmplID(emplID);

    // Print the details
    std::cout << "\n--- User Information ---\n";
    std::cout << "Name: " << user.getName() << std::endl;
    std::cout << "Email: " << user.getEmail() << std::endl;
    std::cout << "Employee ID: " << user.getEmplID() << std::endl;

    return 0;
}
