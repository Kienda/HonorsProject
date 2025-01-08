#include "student.h"
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

Student::Student(const QString &name, const QString &email, int id, const QString &major, double gpa, int semester)
    : User(name, email, id), m_major(major), m_gpa(gpa), m_semester(semester) {}

void Student::saveToJson(const QString &filename) const {
    QFile file(filename);
    QJsonArray studentsArray;

    if (file.open(QIODevice::ReadWrite)) {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);

        if (!doc.isNull() && doc.isArray()) {
            studentsArray = doc.array();
        }
    }

    QJsonObject studentObject;
    studentObject["name"] = m_name;
    studentObject["email"] = m_email;
    studentObject["id"] = QString::number(m_id); // Save ID as string
    studentObject["major"] = m_major;
    studentObject["gpa"] = m_gpa;
    studentObject["semester"] = m_semester;

    studentsArray.append(studentObject);

    QJsonDocument saveDoc(studentsArray);
    file.resize(0);
    file.write(saveDoc.toJson());
    file.close();
}

StudentInfo Student::validateLogin(const QString &email, const QString &id, const QString &filename) {
    QFile file(filename);

    if (file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);

        if (!doc.isNull() && doc.isArray()) {
            QJsonArray studentsArray = doc.array();

            for (const QJsonValue &value : studentsArray) {
                QJsonObject obj = value.toObject();
                if (obj["email"].toString() == email && obj["id"].toString() == id) {
                    StudentInfo info;
                    info.name = obj["name"].toString();
                    info.gpa = QString::number(obj["gpa"].toDouble(), 'f', 2); // Format GPA to 2 decimal places
                    info.semester = QString::number(obj["semester"].toInt());
                    return info;
                }
            }
        }
    }

    return {}; // Return an empty struct if not found
}
