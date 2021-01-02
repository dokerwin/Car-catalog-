#ifndef MONEY_H
#define MONEY_H

#include <QObject>

class Money : public QObject
{
    Q_OBJECT
public:
    explicit Money(QObject *parent = nullptr);

signals:

};

#endif // MONEY_H
