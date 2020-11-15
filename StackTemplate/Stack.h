#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

//Stack template
template <class T>
class Stack
{
    private:
            T *stackArray;
            int stackSize;
            int top;
    public: 
            //Constructor
            Stack(int);

            //Copy Constructor
            Stack(const Stack&);

            //Destructor
            ~Stack();

            //Stack Operations
            void push(T);

            void pop(T &);

            bool isFull();

            bool isEmpty();

};

//Constructor
template <class T>
Stack<T>::Stack(int size)
{
        stackArray = new T[size];
        stackSize = size;
        top = -1;
}

//Copy Constructor
template <class T>
Stack<T>::Stack(const Stack &obj)
{
        if(obj.stackSize > 0)
        {
                stackArray = new T[obj.stackSize];
        }
        else
        {
                stackArray = NULL;
        }
        
        //Copy the stack size attribute
        stackSize = obj.stackSize;

        //Copy the stack contents
        for(int i = 0; i < stackSize; i++)
        {
                stackArray[i] = obj.stackArray[i];
        }

        //See the top of the stack
        top = obj.top;
}

//Destructor
template <class T>
Stack<T>::~Stack()
{
        if(stackSize > 0)
        {
                delete [] stackArray;
        }
}

template <class T>
void Stack<T>::push(T item)
{
        if(isFull())
        {
                cout<<"The stack is full.\n";
        }
        else
        {
                top++;
                stackArray[top] = item;
        }
        
}

template <class T>
void Stack<T>::pop(T &item)
{
        if(isEmpty())
        {
                cout<<"The stack is empty.\n";
        }
        else
        {
                item = stackArray[top];
                top--;
        }
        
}

template <class T>
bool Stack<T>::isFull()
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

template <class T>
bool Stack<T>::isEmpty()
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

        return status;
        
}

#endif
