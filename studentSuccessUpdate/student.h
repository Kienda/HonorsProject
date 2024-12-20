#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <QString>

class Student : public User {
public:
    Student(const QString &name, const QString &email, int id, const QString &major, double gpa, int semester);

    void saveToJson(const QString &filename) const;
    static QString validateLogin(const QString &email, const QString &id, const QString &filename);

private:
    QString m_major;
    double m_gpa;
    int m_semester;
};

#endif // STUDENT_H
