#include "aluno.h"


    Aluno::Aluno()
    {
        id = -1;
        name = " ";
    }
    Aluno::~Aluno(){}
    
    Aluno::Aluno(int i, string n)
    {

        id = i;
        name = n;
    }

    int Aluno::getId()
    {
        return id;
    }

    string Aluno::getName()
    {
        return name;
    }