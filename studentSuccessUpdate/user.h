#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(const QString &name, const QString &email, int id);

    QString name() const;
    QString email() const;
    int id() const;

protected:
    QString m_name;
    QString m_email;
    int m_id;
};

#endif // USER_H
