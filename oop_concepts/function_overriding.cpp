/*
 * Virtual functions allow us to create  a list of base class pointers
 * and call methods of any derived classes without even knowing
 * kind of derived class object
 *
 * Difference between function overloading and function overriding?
 *
 * 1.Function Overloading is when multiple function with same name exist in a class.
 * Function Overriding is when function have same prototype in base class as well as derived class.
 * 2.Function Overloading can occur without inheritance.
 * Function Overriding occurs when one class is inherited from another class.
 * 3.Overloaded functions must differ in either number of parameters or type of parameters should be different.
 * In Overridden function parameters must be same.
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 0 )

class base_class
{
private:

public:
    virtual void print()
    {
        std::cout << "Called base class print function..." << std::endl;
    }

    void show()
    {
        std::cout << "Called base class show function..." << std::endl;
    }
};

class derived_class:public base_class
{
private:

public:
    void print()
    {
        std::cout << "Called derived class print function..." << std::endl;
    }

    void show()
    {
        std::cout << "Called derived class show function..." << std::endl;
    }
};

#if ENABLE_THIS_MAIN

int main(void)
{
    base_class *base;

    derived_class derived;

    base = &derived;

    base->show();
    base->print();

    std::cout << "******************" << std::endl;

    derived.show();
    derived.print();

    return 0;
}
#endif
