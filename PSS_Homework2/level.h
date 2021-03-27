#ifndef PSS_HOMEWORK2_LEVEL_H
#define PSS_HOMEWORK2_LEVEL_H

#include <string>

/** enum with access levels
 * shows us which room would be possible to open
 *
 * level GOD only for admins only if you admin you can
 * increase level of other people */
enum accessLevel {
    WHITE, // = no_level
    GREEN,
    YELLOW,
    RED,
    BLACK,
    GOD
};

/** function for printing string from enum */
std::string stringAccessLevel(accessLevel t);

/** enum with types of people which we have in university */
enum personType {
    GUEST,
    STUDENT,
    LAB_EMPLOYEE,
    PROFESSOR,
    DIRECTOR,
    ADMIN
};

/** function for printing string from enum */
std::string stringPersonType(personType t);

/** enum with types of rooms which we have in university */
enum roomType {
    CLASSROOM,
    LECTURE_ROOM,
    CONFERENCE_ROOM,
    CABINET,
    DIRECTOR_CABINET
};

/** function for printing string from enum */
std::string stringRoomType(roomType t);

#endif //PSS_HOMEWORK2_LEVEL_H
