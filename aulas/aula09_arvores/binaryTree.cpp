#include <iostream>
#include <cstddef>
#include "binaryTree.h"

        BinarySearchTree::BinarySearchTree()
        {
            root = NULL;
        }
        BinarySearchTree::~BinarySearchTree()
        {
            removeTree(root);
        }
        void BinarySearchTree::removeTree(Node* currentNode)
        {
            if(currentNode != NULL)
            {
                removeTree(currentNode->childLeft);
                removeTree(currentNode->childRight);

                delete currentNode;

            }
        }

        Node* BinarySearchTree::getRoot(){
            return root;
        }

        bool BinarySearchTree::isEmpty()
        {
            return (root == NULL);
        }

        bool BinarySearchTree::isFull(){
            try{
                Node* temp = new Node();
                delete temp;
                return false;

            }catch(bad_alloc ex)
            {
                return true;
            }
        }

        void BinarySearchTree::insert(Student s)
        {
            if(isFull()){
                cout << "the tree is full!";
                return;
            }

            Node* newNode = new Node();
            newNode->student = s;
            newNode->childLeft = NULL;
            newNode->childRight = NULL;

            if(isEmpty()){
                root = newNode;
            }else{
                Node* temp = root;
                while(temp != NULL)
                {
                    if(s.getRegistration() < temp->student.getRegistration()){
                        if(temp->childLeft == NULL)
                        {
                            temp->childLeft = newNode;
                            
                            break;
                        }

                        temp = temp->childLeft;


                    }else{
                        if(temp->childRight == NULL)
                        {
                            temp->childRight = newNode;

                            break;
                        }

                        temp = temp->childRight;
                    }
                }
            }


        }

        // Remove Node that contains this Student s
        void BinarySearchTree::remove(Student s)
        {
            removeSearch(s, root);
        }

        void BinarySearchTree::removeSearch(Student s, Node*& currentNode)
        {
            if(s.getRegistration() < currentNode->student.getRegistration())
            {
                 removeSearch(s, currentNode->childLeft);
            }else if(s.getRegistration() > currentNode->student.getRegistration())
            {
                removeSearch(s, currentNode->childRight);
            }else{
                removeNode(currentNode);
            }
        }
        void BinarySearchTree::removeNode(Node*& currentNode)
        {
            Node* temp = currentNode;
            if(currentNode->childLeft == NULL)
            {
                currentNode = currentNode->childRight;
                delete temp;
            }else if(currentNode->childRight == NULL)
            {
                currentNode = currentNode->childLeft;
                delete temp;
            }else
            {
                Student s;
                getSuccessor(s, currentNode);
                
                currentNode->student = s;
                removeSearch(s, currentNode->childRight);
            }
        }

        void BinarySearchTree::getSuccessor(Student& s, Node* temp)
        {
            temp = temp->childRight;

            while(temp->childLeft != NULL)
            {
                temp = temp->childLeft;
            }

            s = temp->student;
            delete temp;//TODO
        }

        void BinarySearchTree::search(Student& s, bool& search)
        {
            Node* currentNo = root;

            while(currentNo != NULL)
            {
                if(s.getRegistration() < currentNo->student.getRegistration())
                {
                    currentNo = currentNo->childLeft;
                }else if(s.getRegistration() > currentNo->student.getRegistration())
                {
                    currentNo = currentNo->childRight;
                }else{
                    s = currentNo->student;
                    search = true;
                    
                    break;
                }
            }
        }

        void BinarySearchTree::printPreOrder(Node* currentNode)
        {
            if(currentNode != NULL)
            {
                cout << currentNode->student.getName() << ": ";
                cout << currentNode->student.getRegistration() << endl;

                printPreOrder(currentNode->childLeft);

                printPreOrder(currentNode->childRight);
            }
        }

        void BinarySearchTree::printOrder(Node* currentNode){
            if(currentNode != NULL)
            {
                printOrder(currentNode->childLeft);

                cout << currentNode->student.getName() << ": ";
                cout << currentNode->student.getRegistration() << endl;

                printOrder(currentNode->childRight);
            }
        }

        void BinarySearchTree::printPostOrder(Node* currentNode)
        {
            if(currentNode != NULL)
            {
                printPostOrder(currentNode->childLeft);

                printPostOrder(currentNode->childRight);

                cout << currentNode->student.getName() << ": ";
                cout << currentNode->student.getRegistration() << endl;
            }
        }