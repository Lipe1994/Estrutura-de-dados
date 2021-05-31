/*
Conceito de Fun��es

Uma fun��o � um conjunto de comandos limitado por um par de chaves e precedido por um cabe�alho.  

Na constru��o de uma fun��o, todas as estruturas que voc� estudou na disciplina de Algoritmos poder�o
ser usadas no corpo da fun��o, mas uma fun��o � independente da outra e, por essa raz�o, jamais poder� 
ser criada dentro de outra fun��o. 
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


