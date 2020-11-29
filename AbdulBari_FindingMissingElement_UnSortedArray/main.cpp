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
    for(int i = 0; i < arr.length ; i++)
    {
        if(mx < arr.A[i])
        {
            mx = arr.A[i];
        }
    }
    return mx;
}

int min(struct Array arr)
{
    int mn = arr.A[0];
    for(int i = 0; i < arr.length ; i++)
    {
        if(mn > arr.A[i])
        {
            mn = arr.A[i];
        }
    }
    return mn;
}

void findMissingElements(struct Array arr, int mx, int mn)
{   
    int* H = new int[mx+1];

    for(int i = 0; i <= mx; i++) 
    {
        H[i] = 0;
    }

    for(int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }

    for(int i = mn; i <= mx; i++)
    {
        if(H[i]==0)
        {
            cout << i << " ";
        }
      
    }

    delete [] H;
    H = 0;
}

int main()
{
    Array arr = {{6,7,8,9,11,12,15,16,17,18,19}, 11, 11}; //Max element is 19.
    int maximum = max(arr);
    cout << maximum <<endl;

    int minimum = min(arr);
    cout << minimum <<endl;

    findMissingElements(arr, maximum, minimum);

    return 0;
}