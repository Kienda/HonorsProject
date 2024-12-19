#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

class Student : public User
{
public:
    Student(const QString &name, const QString &email, int id, const QString &major, double gpa, int semester);

    void saveToJson(const QString &filename) const;
    static bool validateLogin(const QString &email, const QString &id, const QString &filename);

    QString major() const;
    double gpa() const;
    int semester() const;

private:
    QString m_major;
    double m_gpa;
    int m_semester;
};

#endif // STUDENT_H
