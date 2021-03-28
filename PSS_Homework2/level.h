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

/** enum with marital status of person*/
enum maritalStatus{
    FREE,
    ACTIVELY_LOOKING,
    HAS_BOYFRIEND,
    HAS_GIRLFRIEND,
    ITS_COMPLICATED,
    MARRIED,
    IN_DEPRESSION
};

/** function for printing string from enum */
std::string stringMaritalStatus(maritalStatus t);

/** function for comparing enum and string */
bool compareAccess(accessLevel access, std::string lvl);

#endif //PSS_HOMEWORK2_LEVEL_H
