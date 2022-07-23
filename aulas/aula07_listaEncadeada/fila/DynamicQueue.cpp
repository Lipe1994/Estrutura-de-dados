#include <iostream>
#include <queue>
#include <cstddef>
#include "DynamicQueue.h"

using namespace std;

DynamicQueue::DynamicQueue()
{
    first = NULL;
    last = NULL;
}

DynamicQueue::~DynamicQueue()
{
    No *tempNo;

    while (first != NULL)
    {
        tempNo = first;
        first = tempNo->next;
        delete tempNo;
    }
    last = NULL;
}

bool DynamicQueue::isEmpty()
{
    return first == NULL;
}

bool DynamicQueue::isFull()
{
    No *temp;

    try
    {
        temp = new No;
        delete temp;
        return false;
    }
    catch (bad_alloc e)
    {
        return true;
    }
}

void DynamicQueue::push(CustomType item)
{
    if (isFull())
    {
        cout << "the queue is full";
        return;
    }

    No *newNo = new No;
    newNo->value = item;
    newNo->next = NULL;

    if (isEmpty())
    {
        first = newNo;
    }
    else
    {
        last->next = newNo;
    }

    last = newNo;
}

CustomType DynamicQueue::pop()
{
    if (isEmpty())
    {
        cout << "the queue is empty";
        return -1;
    }

    No *tempNo = first;

    first = first->next;

    CustomType item = tempNo->value;

    if (first == NULL)
    {
        last = NULL;
    }

    delete tempNo;

    return item;
}

void DynamicQueue::print()
{
    No *tempNo = first;
    cout << "queue [ ";
    while (tempNo->next != NULL)
    {
        cout << tempNo->value << " ";
        tempNo = tempNo->next;
    }

    cout << "]\n";
}