#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

/*
There are two technique to improve Linear Search
1. Transposition
2. Move to Front/Head implementing this)
*/

void swap(int* x, int* y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
}

int linearSearch(struct Array* arr, int num)
{
    for(int i = 0; i < arr->length; i++)
    {
        if(num == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]); //swap(&arr->A[i], &arr->A[i-1]) for Transposiion
            return 0; //return i; for Transposiion
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{7, 5, 8, 0, 12, 4}, 6, 10};

    cout<<"The element is found on index: "<<linearSearch(&arr, 8);

    return 0;
}