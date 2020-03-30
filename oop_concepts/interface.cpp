/*
 * Interfaces are implemented by using abstract classes.
 * A Class is made abstract by declaring at least one of its functions as pure virtual function
 * A Pure virtual function is specified by placing "=0" in its decleration
 *
 * In Interface class (Abstract Class), function methods are declared not defined.
 * The body of function methods are always empty.
 * User can not create an class object by using interface abstract class.
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 1 )

class shape
{
private:
    int width;
    int height;
public:
    // Pure Virtual Function
    virtual float get_area() = 0;

    void set_width(int width) {this->width = width;}
    void set_height(int height) {this->height = height;}

    int get_width(void) {return  width;}
    int get_height(void) {return height;}
};

class rectangular: public shape
{
public:
    float get_area() override
    {
        return (float)(get_width() * get_height());
    }
};

class triangular:public shape
{
public:
    float get_area() override
    {
        return (float)(get_width() * get_height() / 2.0f);
    }
};

#if ENABLE_THIS_MAIN
int main(void)
{
    rectangular rectang;
    triangular triang;

    rectang.set_width(10);
    rectang.set_height(20);

    triang.set_width(15);
    triang.set_height(20);

    std::cout << "Area of Rectangular: " << rectang.get_area() << std::endl;
    std::cout << "Area of Triangular: " << triang.get_area() << std::endl;
}
#endif
