#include <iostream>
#include "IntQueue.h"
using namespace std;

//This queue creates an empty queue of specialised size.
IntQueue::IntQueue(int s)
{
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}

IntQueue::IntQueue(const IntQueue &obj)
{
    queueArray = new int[obj.queueSize];
    queueSize = obj.queueSize;

    front = obj.front;
    rear = obj.rear;

    numItems = obj.numItems;

    for( int i = 0; i < obj.queueSize; i++)
    {
        queueArray[i] = obj.queueArray[i];
    }
}

IntQueue::~IntQueue()
{
    delete [] queueArray;
}

void IntQueue::enqueue(int num)
{
    if(isFull())
    {
        cout<<"The queue is full.\n";
    }
    else
    {
        //Calculating the new rear position
        rear = (rear + 1) % queueSize;
      
        //Insert new item
        queueArray[rear] = num;
        //Update item count
        numItems++;
    }
    
}

bool IntQueue::isFull() const
{
    bool status;

    if(numItems < queueSize)
    {
        status = false;
    }
    else
    {
        status = true;
    }
    
    return status;
}

void IntQueue::dequeue(int &num)
{
    if(isEmpty())
    {
        cout<<"The queue is empty.\n";
    }
    else
    {
        //Calculating the front position
        front = (front + 1) % queueSize;

        //Retrieve the front item.
        num = queueArray[front];

        //Update its counts
        numItems--;
    }
    
}

bool IntQueue::isEmpty() const
{
    bool status;

    if(numItems != 0)
    {
        status = false;
    }
    else
    {
        status = true;
    }
    
    return status;
}

void IntQueue::clear()
{
    front = queueSize - 1;
    rear = queueSize - 1;
    numItems = 0;
}