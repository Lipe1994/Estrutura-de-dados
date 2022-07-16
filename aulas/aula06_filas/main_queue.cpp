#include <iostream>
#include "queue.h"

/*
    FIFO

    First in First out
*/

using namespace std;

int main()
{
    Queue queue;
    CustomInt item;
    int opcao;
    
    cout << "Programa gerador de fila: \n";

    do
    {
        cout << "Digite 0 para parar o programa! \n";
        cout << "Digite 1 para inserir um elemento! \n";
        cout << "Digite 2 para remover um elemento! \n";
        cout << "Digite 3 para imprimir a fila! \n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            queue.push(item);
            break;
        case 2:
            item = queue.pop();
            cout << "Elemento removido: " << item << endl;
            break;
        case 3:
            queue.print();
            break;
        default:
            break;
        }
    }while(opcao != 0);

    return 0;
}