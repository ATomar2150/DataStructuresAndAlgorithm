#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void displayElement(struct Array arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
};

void insertElement(struct Array* arr, int num)
{
    int i = arr->length - 1;
    if(arr->length == arr->size)
    {
        return;
    }
    while(i >= 0 && arr->A[i] > num)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = num;
    arr->length++;
};

void swap(int* A, int* B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
};

int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length-1; i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
};

void reArrange(struct Array* arr)
{
    int i,j;
    i = 0;
    j = arr->length-1;
    while(i < j)
    {
        while(arr->A[i] < 0)
        {
            i++;
        }
        while(arr->A[j] > 0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    
    }
    
};


int main()
{
    struct Array arr = {{3, 4, 6, -8, -9}, 5, 11};

    reArrange(&arr);
    
    displayElement(arr);
    cout <<endl;

    insertElement(&arr, 7);

    displayElement(arr);
    cout <<"\nIt checks whether the array is sorted or not, return 1 if sorted & return 0 if not sorted: ";
    cout << isSorted(arr);

    return 0;
}