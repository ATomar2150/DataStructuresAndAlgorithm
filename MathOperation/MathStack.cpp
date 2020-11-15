#include "MathStack.h"

void MathStack::add()
{
    int num, sum;

    pop(sum);
    pop(num);

    sum = sum + num;
    push(sum);
}

void MathStack::subtract()
{
    int num, diff;

    pop(diff);
    pop(num);

    diff = diff - num;
    push(diff);
}