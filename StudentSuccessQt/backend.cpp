#include "backend.h"

Backend::Backend(QObject *parent) : QObject(parent) {}

QString Backend::message() const {
    return m_message;
}

void Backend::setMessage(const QString &message) {
    if (m_message == message)
        return;

    m_message = message;
    emit messageChanged();
}
