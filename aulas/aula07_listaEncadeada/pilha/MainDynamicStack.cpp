#include <iostream>
#include "DynamicStack.h"

/*
    LIFO

    Last in First out

    with linked list


*/

using namespace std;

int main()
{
    DynamicStack stack;
    CustomInt item;
    int opcao;

    cout << "Programa gerador de pilha com lista encadeada: \n";

    do
    {
        cout << "Digite 0 para parar o programa! \n";
        cout << "Digite 1 para inserir um elemento! \n";
        cout << "Digite 2 para remover um elemento! \n";
        cout << "Digite 3 para imprimir a pilha! \n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            stack.push(item);
            break;
        case 2:
            item = stack.pop();
            cout << "Elemento removido: " << item << endl;
            break;
        case 3:
            stack.print();
            break;
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}