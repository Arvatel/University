cmake_minimum_required(VERSION 3.15)
project(PSS_Homework4)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSS_Homework4 main.cpp Passanger/PassengerGateway.cpp Passanger/PassengerGateway.h Driver/DriverGateway.cpp Driver/DriverGateway.h Passanger/PassengerApp.cpp Passanger/PassengerApp.h Driver/DriverApp.cpp Driver/DriverApp.h Passanger/Passenger.cpp Passanger/Passenger.h Structs/OrderData.cpp Structs/OrderData.h Structs/Date.cpp Structs/Date.h Structs/structures.cpp Structs/structures.h Driver/Driver.cpp Driver/Driver.h Structs/Car.cpp Structs/Car.h System/Backend.cpp System/Backend.h System/DataBase.cpp System/DataBase.h)