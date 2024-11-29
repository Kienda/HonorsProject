#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <string>
#include <vector>

struct Milestone
{
    std::string title;
    std::string description;
    std::string status;
};

class Student : public User
{
private:
    std::string major;
    double GPA;
    int semester;
    std::vector<Milestone> milestones;
    std::vector<std::string> recommendations;

public:
    // Constructor
    Student(const std::string &name, const std::string &email, int emplID,
            const std::string &major, double GPA, int semester);

    // Setters
    void addMilestone(const Milestone &milestone);
    void addRecommendation(const std::string &recommendation);

    // Getters
    std::string getMajor() const;
    double getGPA() const;
    int getSemester() const;

    // Display
    void display() const override;

    // Save student details to a file
    void saveToFile(const std::string &filename) const;
};

#endif // STUDENT_H
