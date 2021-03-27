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
    cout << "Access level: " << stringAccessLevel(access) << endl;
}

string Person:: stringPerson() {
    return stringPersonType(type) + " " + name + " " + surname;
}

accessLevel Person::getAccess() {
    return access;
}

Person::Person (string n, string s, int a = 0, personType t = GUEST) :
        name(std::move(n)), surname(std::move(s)), age(a) {

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