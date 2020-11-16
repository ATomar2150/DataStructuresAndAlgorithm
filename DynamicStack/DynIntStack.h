#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
    private:
            struct StackNode
            {
            int value;
            StackNode *next;
            };

            StackNode *top;
    public:
            //Constructor
            DynIntStack()
            {
                top = NULL;
            }

            ~DynIntStack();

            //Stack Operations
            void push(int);
            void pop(int &);
            bool isEmpty();
};
#endif