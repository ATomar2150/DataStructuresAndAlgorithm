#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

struct Node* head = NULL;
struct Node* last = NULL;

void create(int A[], int size)
{
    
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    Node* temp = 0;
    for(int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }

}

void display(struct Node* head)
{
    while(head != NULL)
    {
        cout << head->data <<" ";
        head = head->next;
    }
}

void insertLast(int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if(head == 0)
    {
        head =last = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
    

}


int main()
{
    int A[] = {3, 5, 9, 11};

    create(A, 4);

    display(head);



    cout << endl;

    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);

    display(head);

    return 0;
}