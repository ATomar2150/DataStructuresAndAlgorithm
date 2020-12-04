#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

struct Node* head = NULL;
struct Node* head1 = NULL;
struct Node* last = NULL;
struct Node* third = NULL;

void display(struct Node* head)
{
    while(head != NULL)
    {
        cout << head->data <<" ";
        head = head->next;
    }
}

void create(int A[], int size)
{
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    Node* temp;
    for(int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
}

void create1(int B[], int size)
{
    head1 = new Node;
    head1->data = B[0];
    head1->next = NULL;
    last = head1;

    Node* temp;
    for(int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->data = B[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
}

void concat(struct Node* p, struct Node* q)
{
    third = p;
    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = q;
}

void merge(struct Node* p, struct Node* q)
{
    Node* ends = 0;
    if(p && q) {
        if(p->data < q->data)
        {
            ends = third = p;
            p = p->next;
            third->next = NULL;
        }
        else
        {
            ends = third = q;
            q = q->next;
            third->next = NULL;
        }

        while(p && q)
        {
            if(p->data < q->data)
            {
                ends->next = p;
                ends = p;
                p = p->next;
                ends->next = NULL;
            }
            else
            {
                ends->next = q;
                ends = q;
                q = q->next;
                ends->next = NULL;
            }
            
        }

        if(p)
        {
            ends->next = p;
        }
        else
        {
            ends->next = q;
        }
    }
    
}

int main()
{
    int A[] = {2, 5, 8, 11};
    int B[] = {3, 9, 10, 12};

    create(A, 4);
    display(head);

    cout << endl;

    create1(B, 4);
    display(head1);

    cout << endl;
    //Uncomment code of concat in order to run and comment out code of merge. 
    // cout<<"Concatenating two list: ";
    // concat(head, head1);
    // display(third);


    cout << endl;
    cout<<"Merging two list: ";
    merge(head, head1);
    display(third);

    return 0;
}