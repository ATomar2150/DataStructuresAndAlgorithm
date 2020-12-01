#include <iostream>
using namespace std;

//Comparing
int main()
{
    char A[] = "Building";
    char B[] = "Buildinga";
    int i, j;

    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if(A[i] != B[j])
        {
            break;
        }
    }

        if(A[i] == B[j])
        {
            cout << "Arrays are equal\n";
        }
        else if( A[i] > B[j])
        {
            cout << "Array A is greater\n";
        }
        else if( A[i] < B[j] )
        {
            cout << "Array B is greater\n";
        }
    return 0;
}