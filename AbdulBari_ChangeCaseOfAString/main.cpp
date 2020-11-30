#include <iostream>
using namespace std;

int main()
{
   char A[] = "WELCOME";

   for(int i = 0; A[i] != '\0'; i++)
   {
       if( A[i] >= 65 && A[i] <= 90)
       {
       A[i] = A[i] + 32;
       cout << A[i];
       }
   }
    return 0;
}