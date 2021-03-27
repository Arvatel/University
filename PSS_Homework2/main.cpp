#include <iostream>
#include <vector>
#include "Person.h"
#include "Room.h"
#include "interaction.h"

int main() {
    vector<Person> people;
    vector<Room> rooms;

    people.emplace_back("Name", "Surname", 20, STUDENT);
    people.emplace_back("Admin", "", 20, ADMIN);


    rooms.emplace_back(Room(208, LECTURE_ROOM));

    openRoom(people[0], rooms[0]);
    people[0].changeAccess(people[1], RED);
    openRoom(people[0], rooms[0]);

    return 0;
}
