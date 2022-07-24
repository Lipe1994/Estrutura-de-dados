#include <iostream>
#include "hash.h"

using namespace std;

int main()
{
    int sizeHash, maxItems;

    cout << "Programa gerador de hash\n";

    cout << "Digite o tamanho da Hash\n";
    cin >> sizeHash;

    cout << "Digite o numero maximo de elementos!\n";
    cin >> maxItems;

    cout << "O fator de carga e: " << (float)maxItems / (float)sizeHash << endl;

    Hash alunoHash(sizeHash, maxItems);

    int opcao;
    int id;
    string name;
    bool busca;
    Aluno aluno(id, name);

    do{
        cout << "Digite 0 para parar o algoritmo!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para buscar um elemento!\n";
        cout << "Digite 4 para imprimir a Hash!\n";

        cin >> opcao;

        switch (opcao)
        {
            case 0:
                exit(0);
            case 1:
                cout << "Qual é o id do aluno?" << endl;
                cin >> id;
                cout << "Qual é o nome do aluno?" << endl;
                cin >> name;

                aluno = Aluno(id, name);

                alunoHash.push(aluno);


                break;
            case 2:
                cout << "Qual é o id do aluno a ser removido?" << endl;
                cin >> id;
                aluno = Aluno(id, name);
                alunoHash.remove(aluno);
                break;
            case 3:
                cout << "Qual é o id do aluno a ser procurado" << endl;
                cin >> id;
                aluno = Aluno(id, name);
                bool find;

                alunoHash.find(aluno, find);

                if(find)
                {
                    cout << "Aluno encontrado" << endl;
                    cout << aluno.getId() << " | " << aluno.getName() << endl;
                }else{
                    cout << "Aluno não encontrado" << endl;
                }
                break;
            case 4:
                alunoHash.print();
                break;
            default:
                cout << "Opcao inválida!" << endl;
        }
    }while(opcao != 0 );


    return 0;
}