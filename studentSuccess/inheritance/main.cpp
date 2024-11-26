#include <iostream>
#include <string>
#include <vector>
#include "student.h" // Include the header file for the Student class

int main()
{
    std::string name, email, major;
    int emplID, semester;
    double gpa;

    // Get student information
    std::cout << "Enter student's name: ";
    std::getline(std::cin, name);

    std::cout << "Enter student's email: ";
    std::getline(std::cin, email);

    std::cout << "Enter student's employee ID: ";
    std::cin >> emplID;

    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter student's major: ";
    std::getline(std::cin, major);

    std::cout << "Enter student's GPA: ";
    std::cin >> gpa;

    std::cout << "Enter student's current semester: ";
    std::cin >> semester;

    // Create a student object
    Student student(name, email, emplID, major, gpa, semester);

    // Add milestones
    std::cout << "\nEnter milestones (type 'done' to stop):\n";
    while (true)
    {
        std::string title, description, status;
        std::cin.ignore(); // Clear input buffer
        std::cout << "Milestone Title: ";
        std::getline(std::cin, title);
        if (title == "done")
            break;

        std::cout << "Milestone Description: ";
        std::getline(std::cin, description);

        std::cout << "Milestone Status: ";
        std::getline(std::cin, status);

        student.addMilestone({title, description, status});
    }

    // Add recommendations
    std::cout << "\nEnter recommendations (type 'done' to stop):\n";
    while (true)
    {
        std::string recommendationType, recommendationInfo;
        std::cin.ignore(); // Clear input buffer
        std::cout << "Recommendation Type (Scholarships, Clubs, Internships): ";
        std::getline(std::cin, recommendationType);
        if (recommendationType == "done")
            break;

        std::cout << "Recommendation Information: ";
        std::getline(std::cin, recommendationInfo);

        student.addRecommendation(recommendationType + ": " + recommendationInfo);
    }

    // Display student information
    student.display();

    // Save to file
    student.saveToFile("student_data.txt");

    std::cout << "\nStudent information saved to 'student_data.txt'.\n";

    return 0;
}
