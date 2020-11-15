#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "IntStack.h"

class MathStack : public IntStack
{
    public:
            //Constructor
            MathStack(int s) : IntStack(s) {}

            //MathStack operations
            void add();
            void subtract();
};

#endif