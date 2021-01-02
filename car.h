#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);
   Car(int);
   void setSpeed(double speed);
signals:

public:
    int a;
  double speed;
    QString s;



};

#endif // CAR_H
