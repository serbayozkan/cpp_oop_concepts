/*
 * Function overriding is redefination of base class function in its derived
 * class with same signature i.e return type and parameters
 *
 * But there may be situations when a programmer makes a mistake while overriding that a function
 * So, to keep track of such an error, C++11 has come up with the keyword override.
 *
 * In short, it serves the following functions. It helps to check if :
 * 1) There is a method with the same name in the parent class
 * 2) The method in parent class is declared as "virtual" which means it was intented to be rewritten
 * 3) The method in parent class has the same signature as the method in the subclass
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 0 )

class base_class
{
private:

public:
    virtual void test_func()
    {
        std::cout << "Base Class is called!" << std::endl;
    }
};

class derived_class: public base_class
{
private:

public:
    void test_func() override
    {
        std::cout << "Derived Class is called!" << std::endl;
    }
};

#if ENABLE_THIS_MAIN
int main()
{
    base_class *base;
    derived_class derived;

    base = &derived;

    base->test_func();
    derived.test_func();

    return 0;
}
#endif
