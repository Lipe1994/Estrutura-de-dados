#include <iostream>
using namespace std;

class Student{
    private:
        int registration;
        string name;

    public:
        Student();
        Student(int r, string n);
        string getName();
        int getRegistration();
};