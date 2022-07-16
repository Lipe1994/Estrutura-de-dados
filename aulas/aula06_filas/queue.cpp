#include <iostream>
#include "queue.h"

using namespace std;

    Queue::Queue()
    {
        first = 0;
        last = 0;
        scaffold = new CustomInt[max_itens];
    }

    Queue::~Queue()
    {
        delete [] scaffold;
    }

    bool Queue::isEmpty()
    {
        return last == first;
    }
    
    bool Queue::isFull()
    {
        return (last - first) == max_itens;
    }

    void Queue::push(CustomInt item)
    {
        if(isFull())
        {
            cout << "the queue is full";
            return;
        }

        scaffold[last % max_itens] = item;
        last++;
    }

    CustomInt Queue::pop()
    {
        if(isEmpty())
        {
            cout << "the queue is empty";
            return -1;
        }

        CustomInt item = scaffold[first % max_itens];

        first++;

        return item;
    }

    void Queue::print()
    {
        cout << "queue [ ";
        for(int i = first; i < last; i++)
        {
            cout << scaffold[i % max_itens] << " ";
        }

        cout << "]\n";
    }