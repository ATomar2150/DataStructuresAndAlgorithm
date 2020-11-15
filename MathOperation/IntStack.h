#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
    private:
            int *stackArray;
            int stackSize;
            int top;
    public:
            //Constructor
            IntStack(int);

            //Copy Constructor
            IntStack(const IntStack &);

            //Destructor
            ~IntStack();

            //Stack Operation
            void push(int);
            void pop(int &);
            bool isFull() const;
            bool isEmpty() const;
};

#endif

