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

void display(struct Node* p)
{
    p = head;
   do
   {
       cout << p->data;
       p = p->next;
   } while (p != head);
   
}


int isLoop(struct Node* first)
{
    Node* p;
    Node* q;

    p = q = first;

    do
    {
        p = p->next;
        q = q->next;
        q = q!=NULL?q->next:NULL;
    }while(p && q && p!=q);

    if(p==q)
    {
        cout<<"It is a loop.\n";
        return 1;
    }
    else
    {
        cout<<"It is not a loop.\n";
        return 2;
    }   

}

int main()
{
    //form a loop in linked list
    //take two pointers
    struct Node *t1, *t2;
    int A[] = {10,20,30,40,50};

    create(A, 5);

    t1 = head->next->next;
    t2 = head->next->next->next->next;
    t2->next = t1;
    cout<<endl;
    isLoop(head);

     display(head);

    return 0;
}