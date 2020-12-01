#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    int A[] = {2, 4, 6, 8, 9};

    Node* head = new Node; //create a node in heap and head is pointing to it.
    Node* temp;
    Node* last;

    head->data = A[0];
    head->next = NULL;

    last = head; //point the last pointer created to new node formed that is head.

    for(int i = 1; i < sizeof(A)/sizeof(A[0]); i++) // sizeof(A)/sizeof(A[0]) size of whole array divided by single element size.
    {
        temp = new Node; //create a node in heap and temp is pointing to it.
        temp->data = A[i];
        temp->next = NULL;

        last->next = temp;
        last =  temp; 

    }

    //Display linked list
    Node* p = head;
    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }

    return 0;
}