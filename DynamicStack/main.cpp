#include <iostream>
using namespace std;
#include "DynIntStack.h"

int main()
{
    int catchVar;
    DynIntStack stack;

    cout<<"Pushing 5\n";
    stack.push(5);

    cout<<"Pushing 10\n";
    stack.push(10);

    cout<<"Pushing 15\n";
    stack.push(15);

    cout<<"Popping..\n";
    
    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    return 0;
    
}




