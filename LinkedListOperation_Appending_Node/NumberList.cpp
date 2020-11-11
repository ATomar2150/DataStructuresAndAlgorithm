#include "NumberList.h"
#include <iostream>

void NumberList::appendNode(double num)
{
    ListNode *newNode; //To point to the new node
    ListNode *nodePtr; //To move through the List

    //Allocate new node and store num there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;

    //If there is no nodes in the list
    if(!head)
    {
        head = newNode;
    }
    else
    {
        nodePtr = head;

        while(nodePtr -> next)
        {
            nodePtr = nodePtr->next;
        }

        nodePtr = newNode;
    }
    
}