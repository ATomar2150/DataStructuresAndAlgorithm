#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Display(Array* catchArray)
{
    for(int i = 0; i < catchArray->length; i++)
    {
        cout << catchArray->A[i] << " ";
    }
}


Array* unionArray(struct Array arr1, struct Array arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;

    Array* arr3 = new Array;
    arr3->size=10;

    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            arr3->A[k] = arr1.A[i];
            i++;
            k++;
        }
        else if(arr1.A[i] > arr2.A[j])
        {
            arr3->A[k] = arr2.A[j];
            j++;
            k++;
        }
        else
        {
            arr3->A[k] = arr1.A[i];
            i++;
            j++;
            k++;
        }
    }

    for( ;i < arr1.length; i++)
    {
        arr3->A[k] = arr1.A[i];
        k++;
    }
    for( ;j < arr2.length; j++)
    {
        arr3->A[k] = arr2.A[j];
        k++;
    }
    arr3->length = k;
    return arr3;
}

int main()
{
    Array arr1 = {{2,9,21,28,35}, 5, 10};
    Array arr2 = {{2,3,9,18,28}, 5, 10};
    Array* catchArray=0;

    catchArray = unionArray(arr1, arr2);

    Display(catchArray);

    return 0;
}