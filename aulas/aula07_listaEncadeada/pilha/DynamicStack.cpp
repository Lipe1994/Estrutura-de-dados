#include <iostream>
#include "DynamicStack.h"
#include <cstddef> //NULL

using namespace std;

DynamicStack::DynamicStack()
{
    topNo = NULL;
}
DynamicStack::~DynamicStack()
{
    No *tempNo;
    while (tempNo != NULL)
    {
        tempNo = topNo;
        topNo = tempNo->next;

        delete tempNo;
    }
}

bool DynamicStack::isFull()
{
    No *newNo;

    try
    {
        newNo = new No;
        delete new No;
        return false;
    }
    catch (bad_alloc e)
    {
        return true;
    }
}

bool DynamicStack::isEmpty()
{
    return (topNo == NULL);
}

void DynamicStack::push(CustomInt item)
{
    if (isFull())
    {
        cout << "The stack is full! \n";
        return;
    }

    No *newNo = new No;
    newNo->value = item;
    newNo->next = topNo;

    topNo = newNo;
}

CustomInt DynamicStack::pop()
{
    if (isEmpty())
    {
        cout << "The stack is empty!\n";
        return -1;
    }

    No *tempNo;
    tempNo = topNo;

    CustomInt item = topNo->value;

    topNo = topNo->next;
    delete tempNo;

    return item;
}

void DynamicStack::print()
{
    No *tempNo = topNo;

    cout << "Pilha: [";
    while (tempNo != NULL)
    {
        cout << tempNo->value << " ";
        tempNo = tempNo->next;
    }

    cout << "]" << endl;
}