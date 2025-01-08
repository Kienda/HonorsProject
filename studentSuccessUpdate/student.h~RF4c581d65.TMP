#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <QString>

// Struct for holding student details
struct StudentInfo {
    QString name;
    QString gpa;
    QString semester;

    StudentInfo() : name(""), gpa("0.0"), semester("0") {}
};

class Student : public User {
public:
    Student(const QString &name, const QString &email, int id, const QString &major, double gpa, int semester);

    void saveToJson(const QString &filename) const;
    static StudentInfo validateLogin(const QString &email, const QString &id, const QString &filename);

private:
    QString m_major;
    double m_gpa;
    int m_semester;
};

#endif // STUDENT_H
