#include <iostream>
using namespace std;

int main()
{
   char A[] = "APARNA";
   int count = 0;

  for(int i = 0; A[i] != '\0'; i++)
  {
      for(int j = 0; A[j] != '\0'; j++)
      {
          if(A[i] == A[j])
          {
              count++;
          }
          
      }
      cout << "The element is: "<< A[i] <<endl;
     
      if(count > 1)
      {
          cout <<"This character has a Duplicate.\n";
          cout << "The frequency with which it is repeating is: "<<count <<endl <<endl;;
      }
      else
      {
          cout << "No Duplicate found.\n\n";
      }
      
      count = 0;

  }

    return 0;
}