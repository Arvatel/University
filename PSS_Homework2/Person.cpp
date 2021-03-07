//#include "Person.h"
#include "level.cpp"
#include <string>
#include <utility>
#include <iostream>

using namespace std;

class Person {
    string name;
    string surname;
    int age;

    personType type;
    accessLevel access;

    Person () = default;;
    Person (string n, string s, int a = 0, personType t = GUEST) :
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

    /** functions for creating different types of people **/
    void createGuest() {
        type = GUEST;
        access = WHITE;
    }

    void createStudent() {
        type = STUDENT;
        access = YELLOW;
    }

    void createLabEmployee() {
        type = LAB_EMPLOYEE;
        access = YELLOW;
    }

    void createProfessor() {
        type = PROFESSOR;
        access = RED;
    }

    void createDirector() {
        type = DIRECTOR;
        access = BLACK;
    }

    void createAdmin() {
        type = ADMIN;
        access = GOD;
    }


    void printPerson() {

        cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;

    }

};