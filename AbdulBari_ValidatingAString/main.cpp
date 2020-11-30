//If the string has alphabet and number, only then it is valid.

#include <iostream>
using namespace std;

int valid(char* A)
{
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) && !(A[i] >= 48 && A[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    
    char *A = "Anil321";

    int result = valid(A);
   
   if(result == 1)
   {
       cout<<"It is a valid string";
   }
   else
   {
       cout<<"It is not a valid string";
   }
   
    return 0;
}