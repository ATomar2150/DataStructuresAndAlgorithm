#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};

int max(struct Array arr)
{
    int mx = arr.A[0];
    for(int i = 0; i < mx; i++)
    {
        if(arr.A[i] > mx)
        {
            mx = arr.A[i];
        }
    }
    return mx;
};

void UsingHashing(struct Array arr,int max)
{
    int sum = 10;
    int* H = new int[max+1];

    for (int i = 0; i < max+1; i++)
    {
        H[i] = 0;
    }

    for(int i = 0; i < arr.length; i++)
    {
        if( k -arr.A[i] > 0)
        {
            if(H[k - arr.A[i]] != 0)
            {
                cout <<"The first element is: " << arr.A[i];
                cout <<"\nThe second element is: "<< k -arr.A[i];
                cout <<"\nTheir sum is: "<<k << endl;
                cout << endl;

            }
        }
        H[arr.A[i]]++;
    }
       
}

int main()
{
    Array arr = {{2, 3, 8, 5, 9, 4,12}, 7, 20};

    int mx = max(arr);

    UsingHashing(arr, mx);

    return 0;
}