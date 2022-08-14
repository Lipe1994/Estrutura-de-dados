#include "student.h"
using namespace std;


    Student::Student(){
        registration = -1;
        name = "";
    }

    Student::Student(int r, string n){
        registration = r;
        name = n;
    }

    string Student::getName()
    {
        return name;
    }

    int Student::getRegistration(){
        return registration;
    }