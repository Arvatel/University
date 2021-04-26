#ifndef PSS_HOMEWORK4_PASSENGERAPP_H
#define PSS_HOMEWORK4_PASSENGERAPP_H


#include "Passenger.h"
#include "PassengerGateway.h"

class PassengerApp {
public:
    Passenger passenger;
    PassengerGateway gateway;

    void login();
    void showOrderHistory();
    void updatePaymentMethod();
    void updatePinnedAddress();
    void createRoute();

    void takeCurrentCoordinates();
    void takeBill();
};


#endif //PSS_HOMEWORK4_PASSENGERAPP_H
