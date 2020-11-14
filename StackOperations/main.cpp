#include <iostream>
using namespace std;

class IntStack
{
    private:
            int *stackArray; //Pointer to stack Array
            int stackSize; //The stack size
            int top; //Indicate the top of the stack

    public:
            //Constructor
            IntStack(int);

            //Copy Constructor
            IntStack(const IntStack &);

            //Destructor
            ~IntStack();

            void push(int);
            void pop(int &);
            bool isFull() const;
            bool isEmpty() const;

};

/*This Constructor creates an empty stack.
The size parameter is the size of the stack.*/
IntStack::IntStack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

//Copy Constructor
IntStack::IntStack(const IntStack &obj)
{
    //Create the stack array
    if(obj.stackSize > 0)
    {
        stackArray = new int[obj.stackSize];
    }
    else
    {
        stackArray = nullptr;

        //copy the stack size attribute
        stackSize = obj.stackSize;

        //copy the stack contents
        for(int count = 0; count < stackSize; count++)
        {
            stackArray[count] = obj.stackArray[count];
        }

        top = obj.top;
    }
    
}

IntStack::~IntStack()
{
    delete [] stackArray;
}

void IntStack::push(int num)
{
    if(isFull())
    {
        cout<<"The stack is full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
    
}

void IntStack::pop(int &num)
{
    if(isEmpty())
    {
        cout<<"The stack is empty.\n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
    
}

bool IntStack::isFull() const
{
    bool status;
    if(top == stackSize - 1)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
    
}

bool IntStack::isEmpty() const
{
    bool status;
    if(top == -1)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return false;
}

int main()
{
    int catchVar; //To hold popped off the stack

    //Define a obj to hold 5 values
    IntStack stack(5);

    cout<<"Pushing First &"<<endl;
    stack.push(5);
    stack.push(15);
    stack.push(20);
    stack.push(12);
    stack.push(8);

    cout<<"Then Popping FIFO order....\n";
    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    stack.pop(catchVar);
    cout<<catchVar<<endl;

    return 0;
}