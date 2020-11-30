#include <iostream>
using namespace std;

int main()
{
    char *greeting = "welcome";

    int length = 0;

    for(int i = 0; greeting[i] != '\0'; i++)
    {
        length++;
    }

    cout <<"Length of the string is: "<< length <<endl;
    return 0;
}