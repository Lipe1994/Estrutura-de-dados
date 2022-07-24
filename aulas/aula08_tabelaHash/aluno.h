#include <iostream>
using namespace std;

class Aluno{
    private:
    int id;
    string name;

    public:
    Aluno();
    ~Aluno();
    Aluno(int id, string n);
    int getId();
    string getName();

};
