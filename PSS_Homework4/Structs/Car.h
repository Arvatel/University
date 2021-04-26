#ifndef PSS_HOMEWORK4_CAR_H
#define PSS_HOMEWORK4_CAR_H


#include "structures.h"
#include <iostream>

using namespace std;

class Car {
    carModel model;
    carType type;
    carColor color;
    string number;
    string currentCoordinates;
    int freeBottleOfWater = 0;

    void parkRightInFrontOfTheEntrance();
    string getCurrentCoordinates();
};


#endif //PSS_HOMEWORK4_CAR_H
