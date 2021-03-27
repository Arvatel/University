#ifndef PSS_HOMEWORK2_ROOM_H
#define PSS_HOMEWORK2_ROOM_H

#include "level.h"

class Room {
    int number;
    roomType type;
    accessLevel access;
    bool Emergency = false;

    void createClassroom();
    void createLectureRoom();
    void createConferenceRoom();
    void createCabinet();
    void createDirectorRoom();

public:

    Room (int num, roomType t);
    accessLevel getAccess();
    roomType getRoomType();
    int getNumber();
};

#endif //PSS_HOMEWORK2_ROOM_H
