#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class student : public user
{
public:
    explicit student(QObject *parent = nullptr);
};

#endif // STUDENT_H
