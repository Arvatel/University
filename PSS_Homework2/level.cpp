#include <string>

/** enum with access levels
 * shows us which room would be possible to open
 *
 * level GOD only for admins only if you admin you can
 * increase level of other people**/
enum accessLevel {
    WHITE, // = no_level
    GREEN,
    YELLOW,
    RED,
    BLACK,
    GOD
};

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

/** enum with types of people which we have in university **/
enum personType {
    GUEST,
    STUDENT,
    LAB_EMPLOYEE,
    PROFESSOR,
    DIRECTOR,
    ADMIN
};

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

/** enum with types of rooms which we have in university **/
enum roomType {
    CLASSROOM,
    LECTURE_ROOM,
    CONFERENCE_ROOM,
    CABINET,
    DIRECTOR_CABINET
};