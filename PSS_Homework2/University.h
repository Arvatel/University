#ifndef PSS_HOMEWORK2_UNIVERSITY_H
#define PSS_HOMEWORK2_UNIVERSITY_H

#include "Person.h"
#include "Room.h"
#include <vector>

class University {

    bool emergencySituation = false;
    vector<Person> people;
    vector<Room> auditoriums;

    void printNoAccess(Person person, Room room);
    void openRoom (Person person, Room room);

    void startEmergency();
    void endEmergency();

    void createPeople();
    void createAuditoriums();

public:
    void simulation();

};


#endif //PSS_HOMEWORK2_UNIVERSITY_H
