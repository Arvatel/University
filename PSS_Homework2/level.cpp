#include "level.h"
#include <string>

/** function for printing string from enum */
std::string stringAccessLevel(accessLevel t){
    switch (t) {
        case WHITE:
            return "No level";
        case GREEN:
            return "Green";
        case YELLOW:
            return "Yellow";
        case RED:
            return "Red";
        case BLACK:
            return "Black";
        case GOD:
            return "Admin";
        default:
            return "";
    }
}

/** function for printing string from enum */
std::string stringPersonType(personType t){
    switch (t) {
        case GUEST:
            return "Guest";
        case STUDENT:
            return "Student";
        case LAB_EMPLOYEE:
            return "Lab employee";
        case PROFESSOR:
            return "Professor";
        case DIRECTOR:
            return "Director";
        case ADMIN:
            return "Admin";
        default:
            return "";
    }
}

/** function for printing string from enum */
std::string stringRoomType(roomType t){
    switch (t) {
        case CLASSROOM:
            return "Class room";
        case LECTURE_ROOM:
            return "Lecture room";
        case CONFERENCE_ROOM:
            return "Conference room";
        case CABINET:
            return "Cabinet";
        case DIRECTOR_CABINET:
            return "Director cabinet";
        default:
            return "";
    }
}
