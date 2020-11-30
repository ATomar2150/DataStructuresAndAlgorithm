#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void findDuplicates(struct Array arr)
{
    int lastDuplicate = 0;
    for(int i = 0; i < arr.length; i++)
    {
        if(arr.A[i]==arr.A[i+1] && arr.A[i] != lastDuplicate)
        {
            cout << arr.A[i] <<" ";
            lastDuplicate = arr.A[i];
        }
    }
    cout << endl;
}

void countDuplicates(struct Array arr)
{

    for(int i = 0; i < arr.length-1; i++)
    {
        if(arr.A[i] == arr.A[i+1])
        {
            int j = i + 1;
            while(arr.A[j] == arr.A[i])
            {
                j++;
            }
            cout << "The duplicate element is: "<<arr.A[i] << endl;
            cout << "The number of times it is been repeated is: "<< (j - i) << endl;
            i = j - 1;
        }
    }
}

int main()
{
    Array arr = {{2, 3, 4, 4, 5, 9, 10, 10, 10, 11}, 9, 10};

    findDuplicates(arr);

    countDuplicates(arr);
    return 0;
}