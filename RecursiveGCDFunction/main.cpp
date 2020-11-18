#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int num1, num2;

    cout<<"Enter the first number.\n";
    cin >> num1;
    cout<<"Enter the second number.\n";
    cin >> num2;

    cout<<"The greatest common divisor of num1 and num2 is: "<<gcd(num1, num2)<<endl;

    return 0;
}

int gcd(int x, int y)
{
    if(x % y == 0)
    {
        return y;
    }
    else
    {
        return gcd(y, x % y);
    }
    
}