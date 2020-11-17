#include <iostream>
#include <deque>
//#include <queue>
using namespace std;

int main()
{
    const int MAX = 8;

    deque<int> iDeque;
    //queue<int> iQueue;

    cout<<"I will enque items..\n";
    for(int i = 0; i < MAX; i += 2)
    {
        cout<<"Pushing "<< i <<endl;
        iDeque.push_back(i);
        // iQeque.push(i);
    }

    cout<<"I will deque items..\n";
    for(int i = 0; i < MAX; i += 2)
    {
        cout<<"Popping "<< i <<endl;
        iDeque.pop_front();
        //iQeque.pop();
    }


    return 0;
}