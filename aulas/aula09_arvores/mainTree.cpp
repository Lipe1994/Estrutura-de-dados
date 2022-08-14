#include <iostream>
#include "binaryTree.h"

using namespace std;

int main(){

    BinarySearchTree treeOfStudents;
    int option, registration, optionToPrint;
    string nome;
    bool search = false;

    do{
        cout << "Digite 0 para parar o algoritmo!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para buscar um elemento!\n";
        cout << "Digite 4 para imprimir a arvore!\n";
        cin >> option;

        if (option == 1){
            cout << "Digite o nome do aluno:\n";
            cin >> nome;
            cout << "Digite o registration do aluno:\n";
            cin >> registration;
            Student student(registration, nome);
        if (treeOfStudents.isFull()){
            cout << "A Árvore esta cheia!\n";
            cout << "Nao foi possivel inserir o elemento!\n";
        } else{            
            treeOfStudents.insert(student);
        }
        } else if (option == 2){
            cout << "Digite o registration do aluno a ser removido!\n";
            cin >> registration;
            Student student(registration, " ");
            treeOfStudents.remove(student);
        } else if (option == 3){
            cout << "Digite o registration do aluno a ser buscado!\n";
            cin >> registration;
            Student student(registration, " ");
            treeOfStudents.search(student, search);
            if (search){
                cout << "Elemento encontrado!\n";
                cout << "Nome: " << student.getName() << endl;
                cout << "RA: " << student.getRegistration() << endl;
            } else{
                cout << "Elemento nao encontrado!\n";
            }           
        } else if (option == 4){
            cout << "Digite 1 para fazer a impressao em pre ordem!\n";
            cout << "Digite 2 para fazer a impressao em ordem!\n";
            cout << "Digite 3 para fazer a impressao em pos ordem!\n";
            cin >> optionToPrint;
            if (optionToPrint == 1){
                treeOfStudents.printPreOrder(treeOfStudents.getRoot());
            } else if (optionToPrint == 2){
                treeOfStudents.printOrder(treeOfStudents.getRoot());
            } else{
                treeOfStudents.printPostOrder(treeOfStudents.getRoot());
            }                   
        }
    } while (option != 0);

    return 0;
}