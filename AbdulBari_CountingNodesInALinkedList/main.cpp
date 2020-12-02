#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

//declare the head globally
struct Node* head = NULL;

void create(int A[], int num)
{
    Node* last;
    Node* temp;

    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < num; i++)
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
        cout << head->data << " ";
        head = head->next;
    }
}

int counting(struct Node* head)
{
    int count = 0;
     while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    int A[] = {3, 4, 5, 6, 7 ,8 ,9};

    create(A,7);

    display(head);

    int times = counting(head);

    cout<< "\nThe number of nodes are: "<<times;
    return 0;
}