#ifndef PSS_HOMEWORK4_PASSENGERGATEWAY_H
#define PSS_HOMEWORK4_PASSENGERGATEWAY_H


#include "Passenger.h"
#include "../System/DataBase.h"
#include "../System/Backend.h"

class PassengerGateway {
    DataBase dataBase;
    Backend backend;

    Passenger loadPassengerData(string login);
    string getCurrentCoordinates();
};


#endif //PSS_HOMEWORK4_PASSENGERGATEWAY_H
