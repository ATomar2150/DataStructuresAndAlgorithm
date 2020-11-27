#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Display(Array arr4)
{
    for(int i = 0; i < arr4.length; i++)
    {
        cout << arr4.A[i] << " ";
    }
}

Array* mergeArray(struct Array* arr1, struct Array* arr2)
{
    int i =0;
    int j = 0;
    int  k = 0;

    Array* arr3 = new Array;
    
    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j] )
        {
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else
        {
            arr3->A[k] = arr1->A[j];
            j++;
            k++;
        }
    }
    for( ;i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        k++;
    }
    for( ;j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }
    arr3->length=arr1->length + arr2->length;
    arr3->size = 10;
    
    return arr3;
}

int main()
{
    Array arr1 = {{4,4,5,6,7}, 5, 8};
    Array arr2 = {{6,9,12,12,13}, 5, 8};
    Array* arr4;
    
    arr4 = mergeArray(&arr1, &arr2);

    Display(*arr4);
    return 0;
}