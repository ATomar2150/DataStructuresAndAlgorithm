#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    const int MAX = 8;
    int count;

    //Define an STL vector stack
    stack< int, vector<int> > iStack;

    //Push the value onto the stack
    for(int i = 2; i < MAX; i +=2)
    {
        cout<<"Pushing "<< i <<endl;
        iStack.push(i);
    }

    cout<<"The size of the stack is: ";
    cout<<iStack.size()<<endl;

     //Push off the value from the stack
    for(int i = 2; i < MAX; i +=2)
    {
        //The pop function in the stack template does not retreve the value from the top of the stack, it only removes it.
        //To retrive value, you must call the top function first.
        cout<<"Pooping "<< iStack.top() <<endl;
        iStack.pop();
    }
    return 0;
}