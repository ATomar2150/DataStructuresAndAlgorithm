#include <iostream>
#include "DynamicQueue.h"

using namespace std;

DynamicQueue::DynamicQueue()
{
    front = NULL;
    rear = NULL;
    numItems = 0;
}

DynamicQueue::~DynamicQueue()
{
    clear();
}

void DynamicQueue::clear()
{
    int value;
    while(!isEmpty())
    {
        dequeue(value);
    }
}

void DynamicQueue::enqueue(int num)
{
    QueueNode *newNode = new QueueNode;
    newNode->value = num;
    newNode->next = NULL;

    if(isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    numItems++;
    
}

void DynamicQueue::dequeue(int &num)
{
    QueueNode* temp;
    if(isEmpty())
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        //save the front node value in num
        num = front->value;

        //Remove the first node and delete it
        temp = front;
        front = front->next;
        delete temp;

        numItems--;
    }
    
}

bool DynamicQueue::isEmpty() const
{
    bool status;

    if(numItems > 0)
    {
        status = false;
    }
    else
    {
        status = true;
    }

    return status;
    
}