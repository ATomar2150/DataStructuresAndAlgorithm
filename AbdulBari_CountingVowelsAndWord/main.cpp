#include <iostream>
using namespace std;

int main()
{
   char A[] = "How are you";

   int vowels=0;
   int constants=0;
   
   for(int i = 0; A[i] != '\0'; i++)
   {
       if(A[i] == 'A' ||A[i] == 'E' ||A[i] == 'I' ||A[i] == 'O' ||A[i] == 'U' ||A[i] == 'a' ||A[i] == 'e' ||A[i] == 'i' ||A[i] == 'o' ||A[i] == 'u' )
       {
           vowels++;
       }
       else if((A[i] >= 65 && A[i] <= 90)||(A[i] >= 97 && A[i] <= 122))
       {
           constants++;
       }
   }
   cout <<"Number of vowels are: "<< vowels <<endl;
   cout <<"Number of vowels are: "<< constants <<endl;
    return 0;
}