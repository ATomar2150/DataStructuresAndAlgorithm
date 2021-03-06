#include <iostream>
#include "NumberList.h"

using namespace std;

int NumberList::countNodes(ListNode* nodePtr) const
{
    if(nodePtr != NULL)
    {
        return 1 + countNodes(nodePtr->next);
    }
    else
    {
        return 0;
    }
    
}

void NumberList::showReverse(ListNode* nodePtr) const
{
    if(nodePtr != NULL)
    {
        showReverse(nodePtr->next);
        cout << nodePtr->value<<" ";
    }
}

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

        while(nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }

        //When end is found insert new node into the end
        nodePtr->next = newNode;
    }
    
}

void NumberList::insertNode(double num)
{
    ListNode* newNode; //A new node
    ListNode* nodePtr;  //Traversing the list
    ListNode* previousNode = NULL; //The previous node

    //Allocate new node and store num over there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;

    //if there is no node in the list, make newNode the first node
    if(head == 0)
    {
          head = newNode;
    }
    else
    {
        nodePtr = head;

        previousNode = NULL;

        while(nodePtr != NULL && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(previousNode == NULL)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
        
    }
}

void NumberList::deleteNode(double num)
{
    ListNode* nodePtr;
    ListNode* previousNode;

    if(head == 0)
    {
        return;
    }

    if(head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        //Initialize nodePtr to head of list
        nodePtr = head;

        //Skip all the nodes whose value is not equal to num
        while(nodePtr != NULL && nodePtr->value != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(nodePtr != NULL)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
    
}

//Traversing the linked list
void NumberList::displayList() const
{
    ListNode* nodePtr;

    nodePtr = head;

    while(nodePtr != NULL)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

NumberList::~NumberList()
{
    ListNode* nodePtr;
    ListNode* nextNode;

    //Position nodePtr at the head of the list
    nodePtr = head;

    while(nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
    cout<<"Destructor is called.\n";
}



int main()
{
    const double MAX = 10.0;

    NumberList list;
    for(int x = 0; x < MAX; x = x++)
    {
        list.insertNode(x);
    }

    cout<<"Here are the values in the list:\n";
    cout<<list.numNodes();

    for(double x = 1.5; x < MAX; x = x + 1.1)
    {
        list.appendNode(x);
    } 

    cout<<"Here are the values in the list:\n";
    list.displayList();

    cout<<"Here are the things in reverse order: \n";
    list.displayBackwards();

    return 0;
}
