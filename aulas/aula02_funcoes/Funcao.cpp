/*
Conceito de Funções

Uma função é um conjunto de comandos limitado por um par de chaves e precedido por um cabeçalho.  

Na construção de uma função, todas as estruturas que você estudou na disciplina de Algoritmos poderão
ser usadas no corpo da função, mas uma função é independente da outra e, por essa razão, jamais poderá 
ser criada dentro de outra função. 
*/

#include <iostream>

using namespace std;

void asteriscos();

int main()
{

    asteriscos();
      
    return (0);
}

void asteriscos()
{	 
    for(int i =0; i < 20; i++)
        cout<<"*";
}


