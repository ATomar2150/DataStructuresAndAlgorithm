#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
}

struct Node* head;

void create(int A[], int n)
{
    int i;
    Node* t;
    Node* last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i = 0; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next= t;
        last = t;
    }
}

int main()
{
int A[] = {3, 4, 6, 7, 8};
create(A, 5);
return 0;
}