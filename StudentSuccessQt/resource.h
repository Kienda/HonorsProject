#ifndef RESOURCE_H
#define RESOURCE_H

#include "student.h"

class resource : public student
{
public:
    explicit resource(QObject *parent = nullptr);
};

#endif // RESOURCE_H
