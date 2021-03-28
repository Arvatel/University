#include "University.h"
#include <iostream>

void University::simulation() {

    createPeople();
    createAuditoriums();

    /** Printing data of every person in the University */
    for (auto i : people) {
        i.printPersonData();
        cout << endl;
    }

    /** All people tried to open all the auditoriums */
    for (auto i : people) {
        for (auto j : auditoriums){
            openRoom(i, j);
            cout << endl;
        }
    }

    /** Example of emergency case */
    startEmergency();
    for (int i = 0; i < people.size(); i += 4) {
        for (int j = 0; j < auditoriums.size(); j += 4){
            openRoom(people[i], auditoriums[j]);
            cout << endl;
        }
    }
    endEmergency();

    /** Print personal data */
    people[0].printPersonData();
    cout << endl;

    /** Example of changing access level */
    openRoom(people[0], auditoriums[0]);
    cout << endl;
    people[0].changeAccess(people[0], RED);
    people[0].changeAccess(people[1], RED);
    cout << endl;
    openRoom(people[0], auditoriums[0]);

}


void University::printNoAccess(Person person, Room room){
    cout << person.stringPerson() << " tried to open " << stringRoomType(room.getRoomType())
         << " #" << room.getNumber() << " and got no access" << endl;
}

void University::openRoom (Person person, Room room) {
    if (emergencySituation || room.getAccess() <= person.getAccess()) {
        cout << stringRoomType(room.getRoomType()) << " #" << room.getNumber() << " successfully opened by " <<
             person.stringPerson() << endl;

    } else printNoAccess(person, room);
}

void University::startEmergency() {
    emergencySituation = true;
    cout << "\n------------------------------" << endl;
    cout << "-----Emergency Situation!-----" << endl;
    cout << "------------------------------\n" << endl;
}

void University::endEmergency() {
    emergencySituation = false;
    cout << "\n-----------------------------------" << endl;
    cout << "-----Emergency Situation ended-----" << endl;
    cout << "-----------------------------------\n" << endl;
}




void University::createPeople(){
    people.emplace_back(Person("Kiril", "Seminihin", 43, DIRECTOR, MARRIED));

    people.emplace_back(Person("Vyacheslav", "Sergeev", 19, ADMIN, HAS_GIRLFRIEND));
    people.emplace_back(Person("Nikita", "Strygin", 20, ADMIN, IN_DEPRESSION));

    people.emplace_back(Person("Sergey", "Gorogetskiy", 40, PROFESSOR, MARRIED));
    people.emplace_back(Person("Ivan", "Konuykhov", 44, PROFESSOR, MARRIED));
    people.emplace_back(Person("Sergey", "Shilov", 9999, PROFESSOR, MARRIED));
    people.emplace_back(Person("Eugeniy", "Zouev", 53, PROFESSOR, MARRIED));

    people.emplace_back(Person("Ekaterina", "Shevtcova", 26, LAB_EMPLOYEE, HAS_BOYFRIEND));
    people.emplace_back(Person("Igor", "Lakovlev", 29, LAB_EMPLOYEE, MARRIED));
    people.emplace_back(Person("Oleg", "Bulichev", 25, LAB_EMPLOYEE, HAS_BOYFRIEND));
    people.emplace_back(Person("Pavel", "Mamaev", 30, LAB_EMPLOYEE, ITS_COMPLICATED));
    people.emplace_back(Person("Robert", "De Nir", 31, LAB_EMPLOYEE, FREE));
    people.emplace_back(Person("Alexander", "Rafikov", 35, LAB_EMPLOYEE, FREE));
    people.emplace_back(Person("Aidar", "Garikhanov", 28, LAB_EMPLOYEE, HAS_GIRLFRIEND));
    people.emplace_back(Person("Vladimir", "Markov", 22, LAB_EMPLOYEE, FREE));
    people.emplace_back(Person("Name", "Surname", 20, LAB_EMPLOYEE, FREE));

    people.emplace_back(Person("Anastasiia", "Kuklina", 19, STUDENT, FREE));
    people.emplace_back(Person("Albert", "Akmukhametov", 19, STUDENT, FREE));
    people.emplace_back(Person("Egor", "Gorozhankin", 21, STUDENT, HAS_GIRLFRIEND));
    people.emplace_back(Person("Anna", "Kopeikina", 18, STUDENT, HAS_BOYFRIEND));
    people.emplace_back(Person("Artem", "Voronov", 18, STUDENT, FREE));
    people.emplace_back(Person("Roman", "Voronov", 18, STUDENT, FREE));
    people.emplace_back(Person("One more", "Voronov", 18, STUDENT, FREE));
    people.emplace_back(Person("Ruslan", "Gilvanov", 18, STUDENT, HAS_GIRLFRIEND));
    people.emplace_back(Person("Vladimir", "Makharev", 18, STUDENT, FREE));
    people.emplace_back(Person("Elizaveta", "Semenova", 17, STUDENT, FREE));
    people.emplace_back(Person("George", "Dmitriev", 18, STUDENT, FREE));
    people.emplace_back(Person("Pavel", "Baharuev", 19, STUDENT, FREE));
    people.emplace_back(Person("Katya", "Skvortsova", 18, STUDENT, HAS_BOYFRIEND));
    people.emplace_back(Person("Artem", "Batalov", 18, STUDENT, FREE));
    people.emplace_back(Person("Rostislav", "Zhukov", 17, STUDENT, HAS_GIRLFRIEND));
    people.emplace_back(Person("Daniyar", "Kubashev", 19, STUDENT, FREE));

    people.emplace_back(Person("Aleksey", "", 40, GUEST, FREE));
    people.emplace_back(Person("Anton", "", 50, GUEST, FREE));
    people.emplace_back(Person("Andrey", "", 90, GUEST, MARRIED));
    people.emplace_back(Person("Alena", "", 15, GUEST, FREE));
}

void University::createAuditoriums(){
    auditoriums.emplace_back(Room(666, DIRECTOR_CABINET));

    auditoriums.emplace_back(Room(108, LECTURE_ROOM));
    auditoriums.emplace_back(Room(105, LECTURE_ROOM));
    auditoriums.emplace_back(Room(106, LECTURE_ROOM));
    auditoriums.emplace_back(Room(107, LECTURE_ROOM));
    auditoriums.emplace_back(Room(207, LECTURE_ROOM));

    auditoriums.emplace_back(Room(116, CABINET));
    auditoriums.emplace_back(Room(218, CABINET));
    auditoriums.emplace_back(Room(313, CABINET));
    auditoriums.emplace_back(Room(315, CABINET));
    auditoriums.emplace_back(Room(316, CABINET));

    auditoriums.emplace_back(Room(303, CONFERENCE_ROOM));
    auditoriums.emplace_back(Room(101, CONFERENCE_ROOM));
    auditoriums.emplace_back(Room(203, CONFERENCE_ROOM));
    auditoriums.emplace_back(Room(103, CONFERENCE_ROOM));
    auditoriums.emplace_back(Room(202, CONFERENCE_ROOM));
}



