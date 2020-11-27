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

int getMax( struct Array arr )
{
    int max = arr.A[0];

    for(int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }

    return max;

};

void setElement(struct Array* arr, int index, int num)
{
    if(index > 0 && index < arr->length-1)
    {
      arr->A[index] = num;
    }
};

int getElement(struct Array arr, int index)
{
    if(index > 0 && index < arr.length-1)
    {
        cout << arr.A[index];
    }
};

int main()
{
    struct Array arr = {{3, 4, 6, 7, 8, 9}, 6, 11};

    cout<< "We are going to display elements in array."<< endl;
    displayElement(arr);
    cout << "\nThe maximum element in array is: "<< getMax(arr) << endl;
    cout << "We are going to set a element at particular index. ";
    setElement(&arr, 2, 4);
    cout << "New values are: ";
    displayElement(arr);
    cout << "\nWe are going to get element at particular index. The searched element is: ";
    getElement(arr, 4);

    return 0;
}