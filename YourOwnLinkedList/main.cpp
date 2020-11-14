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
            void displayNode() const;
            void reverseNode();
            void deleteNode(double);
};

void LinkedList::appendNode(double num)
{
    Node* newNode = new Node;
    newNode->value = num;
    newNode->next = NULL;
    Node* nodePtr; //To move through the list

    cout<<"Nodes are appended.\n";
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

    cout<<"Node 14.4 is inserted.\n";
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

    cout<<"Nodes are deleted.\n";

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

void LinkedList::reverseNode()
{
   Node* current;
   Node* prev;
   Node* next;

   current = head;
   prev = NULL;

   cout<<"Nodes are reversed.\n";
   while (current != NULL)
   {
       next = current->next;
       current->next = prev;
       prev = current;
       current = next;
   }
    head = prev;
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
    list.reverseNode();
    list.displayNode();
    cout<<"================================\n";
    list.deleteNode(11.1);
    list.displayNode();
    cout<<"================================\n";


    return 0;
}