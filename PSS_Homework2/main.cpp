#include <iostream>
#include "Person.h"
#include "Room.h"
#include "interaction.h"

int main() {
    Person person = Person("Name", "Surname", 20, STUDENT);

    Room room = Room(108, LECTURE_ROOM);

    openRoom(person, room);

    return 0;
}
