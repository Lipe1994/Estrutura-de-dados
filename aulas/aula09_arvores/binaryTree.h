#include <iostream>
#include "student.h"

struct Node{
    Student student;

    Node* childLeft;
    Node* childRight;


};


class BinarySearchTree{
    private:
        Node* root;

    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void removeTree(Node* currentNode);
        Node* getRoot();
        bool isEmpty();
        bool isFull();
        void insert(Student s);
        
        void remove(Student s);
        void removeSearch(Student s, Node*& currentNode);
        void removeNode(Node*& currentNode);
        void getSuccessor(Student& s, Node* temp);

        void search(Student& s, bool& search);
        void printPreOrder(Node* currentNode);
        void printOrder(Node* currentNode);
        void printPostOrder(Node* currentNode);
};