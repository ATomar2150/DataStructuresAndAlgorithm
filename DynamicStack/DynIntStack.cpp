#include <iostream>
using namespace std;
#include "DynIntStack.h"

//Destuctor
DynIntStack::~DynIntStack()
{
    StackNode *nodePtr, *nextNode;

    nodePtr = top;
    while (nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;

    }
}

void DynIntStack::push(int num)
{
    StackNode *newNode = new StackNode; //Pointer to the new node
    newNode->value = num;

    if(isEmpty())
    {
        top = newNode;
    }
    else
    {
        newNode->next = top;
       top = newNode;

    }
}

void DynIntStack::pop(int &num)
{
    StackNode *temp;
    if(isEmpty())
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
            num = top->value;
            temp = top->next;
            delete top;
            top = temp;
    }
}

bool DynIntStack::isEmpty()
{
    bool status;

    if(top == 0)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return status;
}