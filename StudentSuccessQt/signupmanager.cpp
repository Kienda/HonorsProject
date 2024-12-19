#include "signupmanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

SignUpManager::SignUpManager(QObject *parent) : QObject(parent) {}

void SignUpManager::signUpStudent(const QString &name, const QString &email, int emplID,
                                  const QString &major, double GPA, int semester) {
    // Create a Student object
    Student newStudent(name, email, emplID, major, GPA, semester);

    // Optionally add milestones and recommendations
    Milestone milestone1 = {"First Milestone", "Complete the first assignment", "Not Started"};
    newStudent.addMilestone(milestone1);
    newStudent.addRecommendation("Strong performance in initial tasks");

    // Save student data to JSON file
    newStudent.saveToJsonFile("data.json");
}
