#include "user.h"

User::User(const QString &name, const QString &email, int id)
    : m_name(name), m_email(email), m_id(id)
{
}

QString User::name() const
{
    return m_name;
}

QString User::email() const
{
    return m_email;
}

int User::id() const
{
    return m_id;
}
