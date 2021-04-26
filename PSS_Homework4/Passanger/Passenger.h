#ifndef PSS_HOMEWORK4_PASSENGER_H
#define PSS_HOMEWORK4_PASSENGER_H

#include <string>
#include <vector>
#include "../Structs/OrderData.h"
#include "../Structs/structures.h"

using namespace std;

class Passenger {
public:
    string name;
    double rating;
    vector<OrderData> orderHistory;
    paymentType paymentMethod;
    vector<string> pinnedAddresses;

    Passenger(string n, double r);
    void downloadOrderHistory();
    Passenger(Passenger pass);
};


#endif //PSS_HOMEWORK4_PASSENGER_H
