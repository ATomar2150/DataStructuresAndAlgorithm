// #include <iostream>
// using namespace std;

// struct Array
// {
//     int A[10];
//     int length;
//     int size;
// };

// int binarySearch(struct Array arr, int num)
// {
//     int low, mid, high;
//     int i = 0;
//     high = arr.length-1;
//     low = 0;

//     while(low <= high)
//     {
//         mid = (low + high) / 2;
//         if(num == arr.A[mid])
//         {
//             return mid;
//         }
//         else if( num < arr.A[mid] )
//         {
//             high = mid - 1;
//         }
//         else if( num > arr.A[mid] )
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             return -1;
//         }
        
//     }
// }

// int main()
// {
//     struct Array arr = {{2,3,4,6,7,9}, 6, 10};

//     cout<<"The index is at: "<< binarySearch(arr, 7) << endl;

//     return 0;
// } 

//RECURSIVE VERSION OF BINARY SEARCH

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int RecursiveSearch(int a[], int low, int high, int num)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if(num == a[mid])
        {
            return mid;
        }
        else if(num < a[mid])
        {
            return RecursiveSearch(a, low, mid - 1, num);
        }
        else if(num > a[mid])
        {
            return RecursiveSearch(a, mid + 1 , high, num);
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

    cout<<"The index is at: "<< RecursiveSearch(arr.A, 0, arr.length-1, 11)  << endl;

    return 0;
} 