#include <iostream>
#include "hash.h"

using namespace std;

    int Hash::hash(Aluno aluno){
        return (aluno.getId() % max_size);
    }

    Hash::Hash(int size, int max)
    {
            quantity_items = 0;
            max_items = max;
            max_size = size;

            scaffold = new Aluno[size];
    }

    Hash::~Hash()
    {
        delete scaffold;
    }

    bool Hash::isFull()
    {
        return quantity_items == max_items;// não está usando max_size porque sempre terão posições dísponíveis, para facilitar o tratamento de colisões
    }

    int Hash::getCuttentLength(){
        return quantity_items;
    }

    void Hash::push(Aluno aluno)
    {
        if(isFull())
        {
            cout << "Tabela hash está cheia!";
            return;
        }

        int local = hash(aluno);

        while(scaffold[local].getId() > 0)
        {
            local = (local + 1) % max_size;
            cout << "verificando disponibilidade na posição: " << local << endl;
        }

        scaffold[local] = aluno;
        quantity_items++;
    }

    void Hash::remove(Aluno aluno)
    {
        int local = hash(aluno);
        bool teste = false;

        while(scaffold[local].getId() != -1 )//-1 indica que não existe a possíbilidade de ter um elemento fruto de colisão abaixo, logo, quando existe colisão é usado o primeiro espaço dísponivel... ainda que pudessemos deletar um elemento, este teria id -2 
        {
          
          if(scaffold[local].getId() ==  aluno.getId())
          {
            scaffold[local] = Aluno(-2, " ");
            quantity_items--;

            cout << "Elemento removido";
            teste = true;
            break;
          }else{
            local = (local++) % max_size;
          }
          
          if(!teste){
            cout << "O elemento não foi encontrado";
          }
        }

        if(scaffold[local].getId() == -1)
        {
            return;
        }

        scaffold[local] = Aluno();
        quantity_items--;
    }

    void Hash::find(Aluno& aluno, bool& find)
    {
        int local = hash(aluno);
        bool teste = false;

        while(scaffold[local].getId() != -1 )
        {
            if(scaffold[local].getId() == aluno.getId())
            {
                find = true;
                aluno = scaffold[local];
                break;
            }else{
                local = (local++) % max_size;
            }
        }


        if(!teste)
        {
            find = false;
        }

    }

    void Hash::print()
    {
        cout << "Tabela hash:\n";

        for(int i = 0; i < max_size; i++)
        {
            if( scaffold[i].getId() > 0)
            {
                cout << i << " " << scaffold[i].getId() << " ";
                
                cout << scaffold[i].getName() << endl;
            }
        }
    }