#include <iostream>
using namespace std;

bool anagram(int H[],int num)
{
     for(int i = 0; H[i] < num; i++)
     {
         if(H[i] != 0)
         {
            return false;
         }
     }
     return true;
};

int main()
{
    char A[] = "decimal";
    char B[] = "medical";
    int H[26] = {0};
    int i;

    for(int i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }

    for(int i = 0; B[i] != '\0'; i++)
    {
        H[B[i] - 97]--;
    }

    if(anagram(H, 26))
    {
        cout<< "It is an Anagram";
    }
    else
    {
         cout<< "It is not an Anagram";
    }
    

    return 0;
}