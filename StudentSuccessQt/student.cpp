#include "student.h"
#include <iostream>
#include <fstream>

// Constructor
Student::Student(const std::string &name, const std::string &email, int emplID,
                 const std::string &major, double GPA, int semester)
    : User(name, email, emplID), major(major), GPA(GPA), semester(semester) {}

// Add milestone
void Student::addMilestone(const Milestone &milestone)
{
    milestones.push_back(milestone);
}

// Add recommendation
void Student::addRecommendation(const std::string &recommendation)
{
    recommendations.push_back(recommendation);
}

// Getters
std::string Student::getMajor() const { return major; }
double Student::getGPA() const { return GPA; }
int Student::getSemester() const { return semester; }

// Display
void Student::display() const
{
    User::display();
    std::cout << "Major: " << major << "\nGPA: " << GPA << "\nSemester: " << semester << "\nMilestones:\n";
    for (const auto &milestone : milestones)
    {
        std::cout << "- " << milestone.title << " (" << milestone.status << "): " << milestone.description << "\n";
    }
    std::cout << "Recommendations:\n";
    for (const auto &recommendation : recommendations)
    {
        std::cout << "- " << recommendation << "\n";
    }
}

// Save to file
void Student::saveToFile(const std::string &filename) const
{
    std::ofstream file(filename, std::ios::app);
    if (file.is_open())
    {
        file << "Name: " << name << "\nEmail: " << email << "\nEmployee ID: " << emplID
             << "\nMajor: " << major << "\nGPA: " << GPA << "\nSemester: " << semester << "\nMilestones:\n";
        for (const auto &milestone : milestones)
        {
            file << "- " << milestone.title << " (" << milestone.status << "): " << milestone.description << "\n";
        }
        file << "Recommendations:\n";
        for (const auto &recommendation : recommendations)
        {
            file << "- " << recommendation << "\n";
        }
        file << "--------------------------------------\n";
        file.close();
    }
}
