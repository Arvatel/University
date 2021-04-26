#include "PassengerGateway.h"

Passenger PassengerGateway::loadPassengerData(string login) {
    return dataBase.getPassengerData();
}

string PassengerGateway::getCurrentCoordinates() {
    return backend.askForCoordinates();
}
