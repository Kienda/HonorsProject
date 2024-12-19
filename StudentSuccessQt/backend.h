#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>

class Backend : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)

public:
    explicit Backend(QObject *parent = nullptr);

    QString message() const;
    void setMessage(const QString &message);

signals:
    void messageChanged();

private:
    QString m_message;
};

#endif // BACKEND_H
