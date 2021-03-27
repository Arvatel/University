#include "Person.h"
#include "Room.h"
#include <string>
#include <utility>
#include <iostream>

void printNoAccess(Person person, Room room){
    cout << person.stringPerson() << " tried to open " << stringRoomType(room.getRoomType())
    << " #" << room.getNumber() << " and got no access" << endl;
}

void openRoom (Person person, Room room) {
    if (room.getAccess() <= person.getAccess()) {
        cout << stringRoomType(room.getRoomType()) << " #" << room.getNumber() << " successfully opened by " <<
        person.stringPerson() << endl;

    } else printNoAccess(person, room);
}
