#include <stdio.h>
#include <iostream>

using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display ( struct Array arr )
{
    int i;
    cout << "The elements are: "<<endl;
    for(int i = 0; i < arr.length; i ++)
    {
        cout << arr.A[i] <<" ";
    }
    
}

int main()
{
    int i, n;
    Array arr;
    cout << "Enter the size of Array: " << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Print the number count for the elements you want to insert." << endl;
    cin >> n;

    if(arr.size > n)
    {
        for(int i = 0; i < n; i ++)
        {
            cout << "Enter the element "<< (i+1) <<endl;
            cin >> arr.A[i];
        }
    }
    else
    {
        return 0;
    }
    

    arr.length = n;

    Display(arr);

    delete [] arr.A;

    arr.A = NULL;

    return 0;

}