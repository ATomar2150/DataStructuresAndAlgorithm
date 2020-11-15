#include <iostream>
#include "IntStack.h"
using namespace std;

//Constructor
IntStack::IntStack(int size)
{
        stackArray = new int[size];
        stackSize = size;
        top = -1;
}

//Copy Constructor
IntStack::IntStack(const IntStack &obj)
{
        if(obj.stackSize > 0)
        {
                stackArray = new int[obj.stackSize];
        }
        else
        {
                stackArray = NULL;
        }

        //copy the stack array attribute
        stackSize = obj.stackSize;

        //copy the stack constents.
        for(int i = 0; i < stackSize; i++)
        {
                stackArray[i] = obj.stackArray[i];
        }

        top = obj.top;
        
}

IntStack::~IntStack()
{
    delete [] stackArray;
}

void IntStack::push(int num)
{
    if(isFull())
    {
        cout<<"Stack is Full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }  
}

bool IntStack::isFull() const
{
    bool status;

    if(top == stackSize - 1)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return status;  
}

void IntStack::pop(int &num)
{
    if(isEmpty())
    {
        cout<<"Stack is empty.\n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
    
}

bool IntStack::isEmpty() const
{
    bool status;
    if(top == -1)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    
    return status;
}

