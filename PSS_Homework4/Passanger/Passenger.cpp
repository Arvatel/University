#include "Passenger.h"

Passenger::Passenger(string n, double r) {
    name = n;
    rating = r;
    downloadOrderHistory();

}

void Passenger::downloadOrderHistory() {

}

Passenger::Passenger(Passenger pass) {
    name = pass.name;
    rating = pass.rating;
    orderHistory = pass.orderHistory;
    paymentMethod = pass.paymentMethod;
    pinnedAddresses = pass.pinnedAddresses;
}
