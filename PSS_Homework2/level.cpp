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

/** function for printing string from enum */
std::string stringMaritalStatus(maritalStatus t){
    switch (t) {
        case FREE:
            return "Free";
        case ACTIVELY_LOOKING:
            return "Actively looking";
        case HAS_BOYFRIEND:
            return "Has a boyfriend";
        case HAS_GIRLFRIEND:
            return "Has a girlfriend";
        case ITS_COMPLICATED:
            return "It's complicated situation";
        case MARRIED:
            return "Married";
        case IN_DEPRESSION:
            return "Don't ask about it please";
        default:
            return "";
    }
}

bool compareAccess(accessLevel access, std::string lvl){
    return stringAccessLevel(access) == lvl;
}
