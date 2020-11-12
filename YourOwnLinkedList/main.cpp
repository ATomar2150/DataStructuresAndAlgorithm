#include <iostream>
using namespace std;

class LinkedList
{
    private:
            struct Node
            {
                double value;
                struct Node* next;
            };

            Node* head;
    public:
            LinkedList()
            {
                head = NULL;
            };
            ~LinkedList();

            void appendNode(double);
            void insertNode(double);
            void deleteNode(double);
            void displayNode() const;
            
};

void LinkedList::appendNode(double num)
{
    Node* newNode = new Node;
    newNode->value = num;
    newNode->next = NULL;
    Node* nodePtr; //To move through the list

    if(!head)
    {
       head = newNode;
    }
    else
    {
        nodePtr = head;

        while(nodePtr->next != NULL)
        {
            nodePtr = nodePtr->next;
        }

        nodePtr->next = newNode;
    }
    
}

void LinkedList::displayNode() const
{
    Node* nodePtr;

    nodePtr = head;

    while(nodePtr != NULL)
    { 
        cout<<nodePtr->value<<endl;  
        nodePtr = nodePtr->next;
    }
}

void LinkedList::insertNode(double num)
{
    Node* newNode = new Node;
    newNode->value = num;
    newNode->next = NULL;

    Node* previousNode = NULL;
    Node* nodePtr;

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

void LinkedList::deleteNode(double num)
{
    Node* nodePtr;
    Node* previousNode;

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
        nodePtr = head;
        while (nodePtr != NULL && nodePtr->value != num )
        {
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }

        if(nodePtr != NULL)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
    
}

LinkedList::~LinkedList()
{
    Node* nodePtr;
    Node* nextNode;

    nodePtr = head;

    while (nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
    cout<<"Destructor is called.\n";
}

int main()
{
    LinkedList list;

    list.appendNode(11.1);
    list.appendNode(12.2);
    list.displayNode();
    cout<<"================================\n";
    list.insertNode(14.4);
    list.displayNode();
    cout<<"================================\n";
    list.deleteNode(12.2);
    list.displayNode();

    return 0;
}