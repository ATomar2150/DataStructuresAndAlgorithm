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

void sum(struct Node* head)
{
    int sum = 0;
    while(head != NULL)
    {
        sum = sum + head->data;
        head = head->next;
    }
    cout <<"The sum is: "<< sum <<endl;
}

int RSum(struct Node* head)
{
    if(head == 0)
    {
        return 0;
    }
    else
    {
        return RSum(head->next) + head->data;
    }
    
}

int max(struct Node* head)
{
    int maximum = 0;
    while(head)
    {
        if(maximum < head->data)
        {
            maximum = head->data;
            head = head->next;
        }

    }
    return maximum;
}

Node* LSearch(struct Node* head, int key)
{
    while(head != NULL)
    {
        if(key == head->data)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

// int counts(struct Node* head)
// {
//     int count = 0;
//     while(head != NULL)
//     {
//         count++;
//     }
//     cout<< count;
//     return count;
// }

void insert(struct Node* head, int index, int x)
{
    Node* t = new Node;
    t->data = x;
    int i;

    // if(index < 0 || index > counts(head) )
    // {
    //     return;
    // }

    if(index == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {
        for(int i = 0; i < index - 1; i++)
        {
            head = head->next;
            t->next = head->next;
            head->next = t;
        }
    }
}



//FOR INSERTING USE THIS OPERATION
int main()
{
    int A[] = {10, 20, 30};

    create(A,3);

    display(head);
    cout << endl;

    insert(head, 2, 12);

    display(head);

    return 0;
}

// int main()
// {
//     int A[] = {3, 4, 5, 6, 7};

//     create(A,5);

//     display(head);
    
//     cout << endl;

//     Rdisplay(head);

//     cout <<endl;
//     sum(head);

//     cout <<"Recursive sum is: "<< RSum(head) <<endl;

//     cout <<"The maximum value is: "<< max(head)<<endl;;

//     //Linear Search
//     Node* temp;
//     temp = LSearch(head, 5);
//     if(temp != NULL)
//     {
//         cout <<"Key is: "<< temp->data <<endl;
//     }

//     return 0;
// }
