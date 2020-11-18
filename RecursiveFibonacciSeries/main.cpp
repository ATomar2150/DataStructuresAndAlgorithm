#include <iostream>
using namespace std;

//prototype
int fib(int);

int main()
{
    cout<<"The first 10 Fibonaci numbers are: \n";
    for(int i = 0; i < 10 ; i++)
    {
        cout<<fib(i)<<" ";
        cout<<endl;
    }

    return 0;
}

int fib(int n)
{
    if(n <= 0)
    {
        return 0; //Base case 
    }
    else if(n==1)
    {
        return 1; //Base case
    }
    else
    {
        return fib(n-1) + fib(n-2); //Recursive case
    }
    
}