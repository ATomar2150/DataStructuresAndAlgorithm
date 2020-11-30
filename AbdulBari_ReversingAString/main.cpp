#include <iostream>
using namespace std;

int main()
{
   char A[] = "Python";

   
    int len = 0;

    for(int i = 0; A[i] != '\0'; i++)
    {
        len++;
    }

    cout <<"Length of the string is: "<< len <<endl;

    char B[len+1];

    int i, j;

    for(i = 0; A[i] != '\0'; i++)
    {

    }
    i = i - 1;

    for(j = 0; i >= 0 ; i--, j++)
    {
        B[j] = A[i];
    }

    B[j] = '\0';

    cout << B;
    
    return 0;
}