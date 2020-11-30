#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};

void findDuplicatesUnsortedArray(struct Array arr)
{
    for (int i = 0; i < arr.length-1; i++)
    {
        int count = 1;
        for(int j = i + 1; j < arr.length; j++)
        {
            if(arr.A[i] == arr.A[j] && arr.A[i] != -1)
            {
                count++;
                arr.A[j] = -1;
            }
        }
        if (count > 1)
        {
            cout << "The element repeated is: "<<arr.A[i] <<endl;
            cout << "The count is : "<< count <<endl;
        }
    }
};


int main()
{
    Array arr = {{9, 3, 4, 4, 13, 9, 10, 10, 10, 11}, 10, 10};

    findDuplicatesUnsortedArray(arr);

    return 0;
}