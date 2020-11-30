#include <iostream>
using namespace std;

//METHOD 1
// int main()
// {
//    char A[] = "Python";

   
//     int len = 0;

//     for(int i = 0; A[i] != '\0'; i++)
//     {
//         len++;
//     }

//     cout <<"Length of the string is: "<< len <<endl;

//     char B[len+1];

//     int i, j;

//     for(i = 0; A[i] != '\0'; i++)
//     {

//     }
//     i = i - 1;

//     for(j = 0; i >= 0 ; i--, j++)
//     {
//         B[j] = A[i];
//     }

//     B[j] = '\0';

//     cout << B;

//     return 0;
// }

//METHOD 2 (Reversing within the same array)
int main()
{
    char A[] = "Python";

    int i,j, temp;

    for(j = 0; A[j] != '\0'; j++)
    {

    }
    
    j = j - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    
    cout << A;
    return 0;
}