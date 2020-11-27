#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void display(struct Array arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] <<" ";
    }
}

void reverse(struct Array* arr)
{
    int i, j;
    int* B;
    B = new int[arr->length];

    //Reversing the order into new array B
    for(i = arr->length-1, j = 0; i >= 0 ;j++, i-- )
    {
        B[j] = arr->A[i];
    }

    //Copying the value of array B in array A
    for( i = 0; i < arr->length; i++ )
    {
        arr->A[i] = B[i];
    }

}

int main()
{
    struct Array arr = {{2, 3, 4 ,5, 9}, 5, 10};

    cout <<"The original array is: ";
    display(arr);
    cout <<"\nThe reverse array is: ";
    reverse(&arr);
    display(arr);
    return 0;
}