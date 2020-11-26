#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int binarySearch(struct Array arr, int num)
{
    int low, mid, high;
    int i = 0;
    high = arr.length-1;
    low = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(num == arr.A[mid])
        {
            return mid;
        }
        else if( num < arr.A[mid] )
        {
            high = mid - 1;
        }
        else if( num > arr.A[mid] )
        {
            low = mid + 1;
        }
        else
        {
            return -1;
        }
        
    }
}

int main()
{
    struct Array arr = {{2,3,4,6,7,9}, 6, 10};

    cout<<"The index is at: "<< binarySearch(arr, 7) << endl;

    return 0;
} 