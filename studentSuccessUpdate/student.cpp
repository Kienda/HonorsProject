#include "student.h"

Student::Student(const QString &name, const QString &email, int id, const QString &major, double gpa, int semester)
    : User(name, email, id), m_major(major), m_gpa(gpa), m_semester(semester)
{
}

void Student::saveToJson(const QString &filename) const
{
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
    studentObject["id"] = m_id;
    studentObject["major"] = m_major;
    studentObject["gpa"] = m_gpa;
    studentObject["semester"] = m_semester;

    studentsArray.append(studentObject);

    QJsonDocument saveDoc(studentsArray);
    file.resize(0);
    file.write(saveDoc.toJson());
    file.close();
}

bool Student::validateLogin(const QString &email, const QString &id, const QString &filename)
{
    QFile file(filename);

    if (file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);

        if (!doc.isNull() && doc.isArray()) {
            QJsonArray studentsArray = doc.array();

            for (const QJsonValue &value : studentsArray) {
                QJsonObject obj = value.toObject();
                if (obj["email"].toString() == email && obj["id"].toString() == id) {
                    return true;
                }
            }
        }
    }

    return false;
}

QString Student::major() const
{
    return m_major;
}

double Student::gpa() const
{
    return m_gpa;
}

int Student::semester() const
{
    return m_semester;
}
