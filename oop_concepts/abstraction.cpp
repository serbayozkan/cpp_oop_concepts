/*
 * Abstraction means displaying only essential information and
 * hiding the details.
 *
 * Data Abstraction refers to providing only essential information
 * about the data to the outside world, hiding the background details or implementation.
 *
 * 1) Abstraction using Classes: Group data members and member functions using access specifiers
 * 2) Abstraction in Header Files: Consider the pow() method present in math.h header file.
 * Whenever wen need to calculate power of a number, we simply call the function pow() present in
 * the file and pass the numbers as arguments without knowing the underlying algorithm.
 *
 * Advantages of Data Abstraction
 * 1) Helps the user to avoid writing the low level code
 * 2) Avoids code duplication and increases resuability
 * 3) Can change the internal implementation of class independently without
 * affecting the user
 * 4) Helps to increase security of an application or program as only important
 * details are provided to the user
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 0 )

class calculator
{

public:
    float add(float var1, float var2)
    {
        return (var1 + var2);
    }
    float subtract(float var1, float var2)
    {
        return (var1 - var2);
    }
    float multiply(float var1, float var2)
    {
        return (var1 * var2);
    }
    float divide(float var1, float var2)
    {
        return (var1 / var2);
    }
};

#if ENABLE_THIS_MAIN

int main(void)
{
    calculator calc;
    float var1 = 10.0f;
    float var2 = 15.0f;

    std::cout << "Add Result: " << calc.add(var1, var2) << std::endl;
    std::cout << "Subctract Result: " << calc.subtract(var1, var2) << std::endl;
    std::cout << "Multiply Result: " << calc.multiply(var1, var2) << std::endl;
    std::cout << "Divide Result: " << calc.divide(var1, var2) << std::endl;

    return 0;
}

#endif
