#include <iostream>
#include "DynamicQueue.h"
using namespace std;

int main()
{
    const int MAX_VALUE = 5;

    DynamicQueue iQueue;

    //Enqueing
    for(int x = 0; x < 5; x++)
    {
        iQueue.enqueue(x);
    }
    cout<<"The value of the queue were: \n";
    while(!iQueue.isEmpty())
    {
        int value;
        iQueue.dequeue(value);
        cout<< value <<endl;
    }
    return 0;
}
