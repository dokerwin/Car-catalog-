#include "car.h"

Car::Car(QObject *parent) : QObject(parent)
{





}

 Car::Car(int s){

  a=s;

}

 void Car:: setSpeed(double speed){
     this->speed= speed;

 }
