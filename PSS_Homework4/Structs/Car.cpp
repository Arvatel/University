#include "Car.h"

void Car::parkRightInFrontOfTheEntrance() {
    if (type == carType(BUSINESS))
        return;
    else
        cout << "You can not do this";
}

string Car::getCurrentCoordinates() {
    return "Universitetskaya 1";
}
