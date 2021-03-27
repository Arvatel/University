#include "Room.h"
#include "level.h"
#include <iostream>

Room::Room (int num, roomType t = CLASSROOM) : number(num) {
    switch (t) {
        case CLASSROOM:
            createClassroom();
            break;
        case LECTURE_ROOM:
            createLectureRoom();
            break;
        case CONFERENCE_ROOM:
            createConferenceRoom();
            break;
        case CABINET:
            createCabinet();
            break;
        case DIRECTOR_CABINET:
            createDirectorRoom();
            break;
        default:
            createClassroom();
            break;
    }
}

accessLevel Room::getAccess() {
    return access;
}

roomType Room::getRoomType() {
    return type;
}

int Room::getNumber() {
    return number;
}

void Room::createClassroom() {
    type = CLASSROOM;
    access = GREEN;
}

void Room::createLectureRoom() {
    if (number > 99 && number < 200)
        access = WHITE;
    else
        access = RED;

    type = LECTURE_ROOM;
}

void Room::createConferenceRoom() {
    type = CONFERENCE_ROOM;
    access = YELLOW;
}

void Room::createCabinet() {
    type = CABINET;
    access = RED;
}

void Room::createDirectorRoom() {
    type = DIRECTOR_CABINET;
    access = BLACK;
}