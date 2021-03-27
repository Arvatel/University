#ifndef PSS_HOMEWORK2_PERSON_H
#define PSS_HOMEWORK2_PERSON_H

#include "level.h"
#include <string>

using namespace std;

class Person {
    string name;
    string surname;
    int age;

    personType type;
    accessLevel access;

    /** functions for creating different types of people **/
    void createGuest();
    void createStudent();
    void createLabEmployee();
    void createProfessor();
    void createDirector();
    void createAdmin();

public:

    void printPersonData();
    string stringPerson();
    accessLevel getAccess();
    void changeAccess(Person admin, accessLevel lvl);

    Person (string n, string s, int a, personType t);
};

#endif //PSS_HOMEWORK2_PERSON_H
