#include "Person.h"
#include "level.h"
#include <iostream>

using namespace std;

/** functions for creating different types of people **/
void Person::createGuest() {
    type = GUEST;
    access = WHITE;
}

void Person::createStudent() {
    type = STUDENT;
    access = YELLOW;
}

void Person::createLabEmployee() {
    type = LAB_EMPLOYEE;
    access = YELLOW;
}

void Person::createProfessor() {
    type = PROFESSOR;
    access = RED;
}

void Person::createDirector() {
    type = DIRECTOR;
    access = BLACK;
}

void Person::createAdmin() {
    type = ADMIN;
    access = GOD;
}

void Person:: printPersonData() {
    cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
    cout << "Position: " << stringPersonType(type) << endl;
    cout << "Marital status: " << stringMaritalStatus(status) << endl;
    cout << "Access level: " << stringAccessLevel(access) << endl;
}

string Person:: stringPerson() {
    return stringPersonType(type) + " " + name + " " + surname;
}

accessLevel Person::getAccess() {
    return access;
}

Person::Person (string n, string s, int a = 0, personType t = GUEST, maritalStatus stat = FREE) :
        name(std::move(n)), surname(std::move(s)), age(a), status(stat) {

    switch(t){
        case GUEST:
            createGuest();
            break;
        case STUDENT:
            createStudent();
            break;
        case LAB_EMPLOYEE:
            createLabEmployee();
            break;
        case PROFESSOR:
            createProfessor();
            break;
        case DIRECTOR:
            createDirector();
            break;
        case ADMIN:
            createAdmin();
            break;
        default:
            createGuest();
    }
}

/** Function for changing access - only admin can change it
 * you need to send admin to the person for it */
void Person::changeAccess(Person admin, accessLevel lvl){
    if (compareAccess(admin.getAccess(), "Admin")) {
        access = lvl;
        cout << "Access level successfully changed to level: " << stringAccessLevel(access) << " \nBy: " <<
        admin.stringPerson() << endl;
        return;
    }
    cout << admin.stringPerson() << " does not have a permission to change access level. Current access level: "
    << stringAccessLevel(access) << endl;
}
