#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int missingElement(struct Array arr)
{
    int i = 0;
    int diff = arr.A[i]; 
    for(i = 0; i < arr.length; i++)
    {
        if(arr.A[i] - i != diff)
        {
            cout << (i + diff) <<" ";
            //break;

            diff++; //for multiple missing elements, if you are finding one element then comment this and uncomment break statement.
        }
    }
}

int main()
{
    Array arr = {{2, 3, 4, 6, 9}, 6, 10};

    cout<<"The missing element is: ";
    missingElement(arr);
    return 0;
}