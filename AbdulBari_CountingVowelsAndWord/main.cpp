#include <iostream>
using namespace std;

int main()
{
   char A[] = "How are  you";

   int vowels=0;
   int constants=0;
   int words = 0;
   
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
       else if( A[i] == ' ') //calculating number of words
       {   
           if(A[i-1] != ' ') //if previous one is not a white space eg: "How are  you"
           {
           words++;
           }
       }
   }
   cout <<"Number of vowels are: "<< vowels <<endl;
   cout <<"Number of vowels are: "<< constants <<endl;
    cout <<"Number of words are: "<< (words+1) <<endl;
    return 0;
}