#include "PassengerApp.h"

void PassengerApp::takeBill() {

}

void PassengerApp::showOrderHistory() {

}

void PassengerApp::updatePaymentMethod() {

}

void PassengerApp::updatePinnedAddress() {

}

void PassengerApp::createRoute() {

}

void PassengerApp::takeCurrentCoordinates() {
    cout << gateway.getCurrentCoordinates() << endl;
}

void PassengerApp::login() {
    cin >> passenger.name;
    gateway.loadPassengerData(passenger.name);

}
