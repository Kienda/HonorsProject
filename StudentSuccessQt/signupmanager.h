#ifndef SIGNUPMANAGER_H
#define SIGNUPMANAGER_H

#include <QObject>
#include "student.h"

class SignUpManager : public QObject
{
    Q_OBJECT
public:
    explicit SignUpManager(QObject *parent = nullptr);

    Q_INVOKABLE void signUpStudent(const QString &name, const QString &email, int emplID,
                                   const QString &major, double GPA, int semester);
};

#endif // SIGNUPMANAGER_H
