#include <iostream>
using namespace std;

// int main()
// {
//    char A[] = "APARNA";
//    int count = 0;

//   for(int i = 0; A[i] != '\0'; i++)
//   {
//       for(int j = 0; A[j] != '\0'; j++)
//       {
//           if(A[i] == A[j])
//           {
//               count++;
//           }
          
//       }
//       cout << "The element is: "<< A[i] <<endl;
     
//       if(count > 1)
//       {
//           cout <<"This character has a Duplicate.\n";
//           cout << "The frequency with which it is repeating is: "<<count <<endl <<endl;;
//       }
//       else
//       {
//           cout << "No Duplicate found.\n\n";
//       }
      
//       count = 0;

//   }

//     return 0;
// }

//Using Hashing
int main()
{
    char A[] = "finding";
    int H[26] = {0};
    int i;

    for(int i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(H[i] > 1)
        {
            cout <<"Character : "<< char(i + 97) <<" & Frequency of it's repeating is: "<< H[i] << endl;
        }
    }
    return 0;
}