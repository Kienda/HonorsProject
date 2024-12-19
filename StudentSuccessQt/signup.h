#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>

using namespace std;

class Signup {
private:
    string name;
    string email;
    string major;
    string employeeID;
    string semester;
    double gpa;

public:
    // Default constructor
    Signup();

    // Parameterized constructor
    Signup(const string& name, const string& email, const string& major,
           const string& employeeID, const string& semester, double gpa);

    // Getters
    string getName() const;
    string getEmail() const;
    string getMajor() const;
    string getEmployeeID() const;
    string getSemester() const;
    double getGPA() const;

    // Setters
    void setName(const string& name);
    void setEmail(const string& email);
    void setMajor(const string& major);
    void setEmployeeID(const string& employeeID);
    void setSemester(const string& semester);
    void setGPA(double gpa);

    // Display function
    void displayInfo() const;
};

#endif // SIGNUP_H
