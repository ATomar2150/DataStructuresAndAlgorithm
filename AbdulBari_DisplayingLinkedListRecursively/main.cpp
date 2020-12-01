#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

struct Node* head = NULL;

void create(int A[], int n)
{
    Node* last;
    Node* temp;

    head = new Node;
    head->data = A[0];
    head->next = NULL;

    last = new Node;
    last = head;

    for(int i = 1; i < n; i++)
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

void Rdisplay(struct Node* head)
{
    if(head != NULL)
    {
        cout << head->data << " ";
        Rdisplay(head->next);
        
    }
}

int main()
{
    int A[] = {3, 4, 5, 6, 7};

    create(A,5);

    display(head);
    cout << endl;

    Rdisplay(head);

    return 0;
}