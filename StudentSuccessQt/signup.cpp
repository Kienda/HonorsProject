#include "signup.h"
#include "iostream"

// Default constructor
Signup::Signup()
    : name(""), email(""), major(""), employeeID(""), semester(""), gpa(0.0) {}

// Parameterized constructor
Signup::Signup(const string& name, const string& email, const string& major,
               const string& employeeID, const string& semester, double gpa)
    : name(name), email(email), major(major), employeeID(employeeID), semester(semester), gpa(gpa) {}

// Getters
string Signup::getName() const { return name; }
string Signup::getEmail() const { return email; }
string Signup::getMajor() const { return major; }
string Signup::getEmployeeID() const { return employeeID; }
string Signup::getSemester() const { return semester; }
double Signup::getGPA() const { return gpa; }

// Setters
void Signup::setName(const string& name) { this->name = name; }
void Signup::setEmail(const string& email) { this->email = email; }
void Signup::setMajor(const string& major) { this->major = major; }
void Signup::setEmployeeID(const string& employeeID) { this->employeeID = employeeID; }
void Signup::setSemester(const string& semester) { this->semester = semester; }
void Signup::setGPA(double gpa) { this->gpa = gpa; }

// Display function
void Signup::displayInfo() const {
    cout << "Name: " << name << "\n"
         << "Email: " << email << "\n"
         << "Major: " << major << "\n"
         << "Employee ID: " << employeeID << "\n"
         << "Semester: " << semester << "\n"
         << "GPA: " << gpa << "\n";
}
