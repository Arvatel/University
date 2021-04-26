#ifndef PSS_HOMEWORK4_DRIVER_H
#define PSS_HOMEWORK4_DRIVER_H

#include "../Structs/structures.h"
#include "../Structs/OrderData.h"
#include "../Structs/Car.h"
#include <vector>

class Driver {
    string name;
    double rating;
    vector<OrderData> orderHistory;
    workStatus status;
    Car car;

};


#endif //PSS_HOMEWORK4_DRIVER_H
