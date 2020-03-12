/*
 * Class is a user-defined data type which holds data members
 * and member functions which can be accessible and used by creating
 * an instance of that class
 *
 * Class is a blue-print representing a group of objects which shares some
 * common properties and behaviours.
 *
 * An object is an instance of class.
 */

#include <iostream>
#include <string>

#define ENABLE_THIS_MAIN      ( 0 )

class student
{
private:
     std::string name;
     std::string surname;
     int age;

public:
     student(const char* name, const char* surname, int age);

     void print_student_info();
};


student::student(const char *name, const char *surname, int age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
}

void student::print_student_info()
{
    std::cout << "name: " << name << std::endl;
    std::cout << "surname: " << surname << std::endl;
    std::cout << "age: " << age << std::endl;
}

#if ENABLE_THIS_MAIN

int main(void)
{
    // student is a class and student1 is an object.
    student student1("Serbay", "Ozkan", 28);

    student1.print_student_info();

    return 0;
}

#endif
