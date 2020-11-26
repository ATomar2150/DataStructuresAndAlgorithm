//APPEND FUNCTION AND INSERT FUNCTION

#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    cout <<"The elements are: "<<endl;
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] <<" ";
    }
}

void append(struct Array* arr, int num)
{
    if(arr->length < arr->size)
    {
    arr->A[arr->length++] = num;
    }
}

void insert(struct Array* arr, int index, int num)
{
    if(index >= 0 && index <= arr->length)
    {
        for( int i = arr->length ; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
            arr->A[index] = num;
            arr->length++;
    }
};

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    display(arr);
    
    cout << "\n\nAppending one element at the End." <<endl;

    append(&arr, 13);

    display(arr);

    cout << "\n\nInserting one element at the given Index." <<endl;

    insert(&arr, 2, 1); //(struct Array* arr, int index, int num)

    display(arr);

    return 0;
}