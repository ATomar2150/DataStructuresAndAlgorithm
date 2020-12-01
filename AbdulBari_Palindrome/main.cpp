#include <iostream>
using namespace std;

bool palindrome(char A[], int length)
{
    for(int i = 0, j = length-1; i <= j; i++, j--)
    {
        if(A[i] == A[j])
        {
            return true;
        }
    }
    return false;
}

int main()
{
   char A[] = "nitin";

   int i = 0;
   int j = 0;
   int length = 0;

   for(int i = 0; A[i] != '\0';i++)
   {
       length++;
   }

   cout <<"Length of the string is: "<< length <<endl;

   bool result = palindrome(A, length);

   if(result == 1)
   {
       cout<< "It is a palindrome\n";
   }
   else
   {
       cout << "It is not a palindrome\n";
   }
   
    return 0;
}