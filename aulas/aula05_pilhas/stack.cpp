#include <iostream>
#include "stack.h"

using namespace std;

    //int size;
    //CustomInt* scafold;

    Stack::Stack()
    {
        size = 0;
        scafold = new CustomInt[max_itens];
    }
    Stack::~Stack()
    {
        delete [] scafold;
    }

    bool Stack::isFull()
    {
        return size == max_itens;
    }

    bool Stack::isEmpty()
    {
        return size == 0;
    }

    void Stack::push(CustomInt newItem)
    {
        if(isFull())
        {
            cout << "the stack is full!";
            return;
        }
        scafold[size] = newItem;
        size++;
    }
    
    CustomInt Stack::pop()
    {
        if(isEmpty())
        {
            cout << "the stack is empty";
            return -1;
        }

        CustomInt lastItem = scafold[size-1];

        //scafold[size-1] = null;
        size--;
        return lastItem;
    }


    void Stack::print()
    {
        cout << "Stack [ ";
        for(int i = 0; i<size; i++)
        {
            cout << scafold[i] << " ";
        }

        cout << "]\n";
    }
    
    int Stack::lenght()
    {
        return size;
    }