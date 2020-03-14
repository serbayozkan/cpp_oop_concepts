/*
 * C++ also provide option to overload operators.
 * For example, we can make the operator (‘+’) for string class to concatenate two strings.
 * We know that this is the addition operator whose task is to add two operands.
 * So a single operator ‘+’ when placed between integer operands, adds them and when placed between string operands, concatenates them.
 *
 * Can we overload all operators?
 * No. ::, ., ?., sizeof operators can not be overloaded
 *
 *
class className
{
    ... .. ...
    public
       returnType operator symbol (arguments)
       {
           ... .. ...
       }
    ... .. ...
};
 */

#include <iostream>
#include "math.h"

#define ENABLE_THIS_MAIN      ( 0 )

class increment_op
{
    int count = 0;
public:

    increment_op(int count)
    {
        this->count = count;
    }

    void operator ++ ()
    {
        ++count;
    }

    int get_value()
    {
        return count;
    }
};

#if ENABLE_THIS_MAIN

int main(void)
{
    increment_op test(5);

    ++test;

    std::cout << "Result: " << test.get_value() << std::endl;

    return  0;
}

#endif
