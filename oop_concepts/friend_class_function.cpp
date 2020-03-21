/*
 * Friend Class -> is a class that can access the private and protected
 * member of a class which it is declared as a friend.
 *
 * Friend Function-> similar to friend class, this function can access
 * the private and protected members of another class
 */

#include <iostream>

class main_class
{
private:
    int var1;
    int var2;

public:
    main_class(int var1, int var2): var1 {var1}, var2 {var2} {}

    // friend_class is a friend of main_class
    // friend_class can access the private and protected members of main_class anymore
    friend class friend_class;

    // friend function can acccess the private and protected members of main_class anymore
    friend void global_func_display_main_class(main_class main);
};

class friend_class
{
private:
    int var1;
    int var2;
public:
    friend_class(int var1, int var2): var1 {var1}, var2 {var2} {}

    void print_all_class_members(main_class mainClass)
    {
       std::cout << "Friend Class var1: " << var1 << std::endl;
       std::cout << "Friend Class var1: " << var2 << std::endl;
       std::cout << "Main Class var1: " << mainClass.var1 << std::endl;
       std::cout << "Main Class var2: " << mainClass.var2 << std::endl;
    }
};

void global_func_display_main_class(main_class main)
{
    std::cout << "Global function reached main_class and var1:" << main.var1 << " var2:" << main.var2 << std::endl;
}

int main(void)
{
    main_class mainClass(10, 20);
    friend_class friendClass(20, 30);

    friendClass.print_all_class_members(mainClass);
    global_func_display_main_class(mainClass);

    return 0;
}
