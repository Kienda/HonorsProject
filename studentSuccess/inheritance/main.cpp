#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> // For exception handling
#include "student.h" // Include the header file for the Student class

using namespace std;

int main()
{
    string name, email, major;
    int emplID, semester;
    double gpa;

    try
    {
        // Get student information
        cout << "Enter student's name: ";
        getline(cin, name);

        cout << "Enter student's email: ";
        getline(cin, email);

        cout << "Enter student's employee ID: ";
        if (!(cin >> emplID))
        {
            throw runtime_error("Invalid input for employee ID. Please enter an integer.");
        }

        cin.ignore(); // Clear input buffer
        cout << "Enter student's major: ";
        getline(cin, major);

        cout << "Enter student's GPA: ";
        if (!(cin >> gpa))
        {
            throw runtime_error("Invalid input for GPA. Please enter a valid number.");
        }

        cout << "Enter student's current semester: ";
        if (!(cin >> semester))
        {
            throw runtime_error("Invalid input for semester. Please enter an integer.");
        }

        // Create a dynamic Student object
        Student *student = new Student(name, email, emplID, major, gpa, semester);

        // Add milestones
        cout << "\nEnter milestones (type 'done' to stop):\n";
        while (true)
        {
            string title, description, status;
            cin.ignore(); // Clear input buffer
            cout << "Milestone Title: ";
            getline(cin, title);
            if (title == "done")
            {
                break;
            }

            cout << "Milestone Description: ";
            getline(cin, description);

            cout << "Milestone Status: ";
            getline(cin, status);

            student->addMilestone({title, description, status});
        }

        // Add recommendations
        cout << "\nEnter recommendations (type 'done' to stop):\n";
        while (true)
        {
            string recommendationType, recommendationInfo;
            cin.ignore(); // Clear input buffer
            cout << "Recommendation Type (Scholarships, Clubs, Internships): ";
            getline(cin, recommendationType);
            if (recommendationType == "done")
            {
                break;
            }

            cout << "Recommendation Information: ";
            getline(cin, recommendationInfo);

            student->addRecommendation(recommendationType + ": " + recommendationInfo);
        }

        // Display student information
        student->display();

        // Save to file
        student->saveToFile("student_data.txt");

        cout << "\nStudent information saved to 'student_data.txt'.\n";

        // Clean up allocated memory
        delete student;
    }
    catch (const exception &e)
    {
        cerr << "\nError: " << e.what() << endl;
        return 1;
    }

    return 0;
}
