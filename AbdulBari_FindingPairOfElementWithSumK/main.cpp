#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};


//Time consuming iterative method
void pairOfElementWithSumK(struct Array arr)
{
    int k = 10;
    for(int i = 0; i < arr.length - 1; i++)
    {
        for(int j = 0; j < arr.length; j++)
        {
            if(arr.A[i] + arr.A[j] == 10)
            {
                cout << "The elements are: "<< arr.A[i] <<" "<< arr.A[j] <<" with sum of "<<k <<endl;
            }
        }
    }
};


int main()
{
    Array arr = {{2, 3, 4, 7, 9, 11}, 6, 10};

    pairOfElementWithSumK(arr);

    int mx = max(arr);

    return 0;
}