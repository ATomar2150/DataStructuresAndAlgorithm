#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
    const int MAX_Value = 5;

    //Create an intQueue to hold the values
    IntQueue iQueue(MAX_Value);

    //Enqueue a series of items.
    cout<<"Enqueing "<<MAX_Value<<" items.\n";
    for(int x = 0; x < MAX_Value; x++)
    {
        iQueue.enqueue(x);
    }

    cout<<"Trying to enqueue again.\n";
    iQueue.enqueue(MAX_Value);

    cout<<"The value of queue were: \n";
    while(!iQueue.isEmpty())
    {
        int value;
        iQueue.dequeue(value);
        cout<< value << endl;
    }

    return 0;
}