#include <iostream>
#include "MathStack.h"
using namespace std;

int main()
{
    int catchVar;
    MathStack stack(5);

    cout<<"Pushing 3\n";
    stack.push(3);
    cout<<"Pushing 6\n";
    stack.push(6);

    stack.add();
    cout<<"The sum is: "<<endl;
    stack.pop(catchVar);

    cout<< catchVar <<endl;

    cout<<"Pushing 7\n";
    stack.push(7);

    cout<<"Pushing 10\n";
    stack.push(10);

    stack.subtract();

    cout<<"The difference is: "<<endl;
    stack.pop(catchVar);
    cout<<catchVar<<endl;
    return 0;

}
