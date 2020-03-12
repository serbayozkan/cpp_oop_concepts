/*
 * When there are multiple functions with same but different
 * parameters then these functions are said to be overloaded.
 *
 * Functions can be overloaded by change in number of arguments
 * and/or change in type of arguments.
 */

#include <iostream>
#include "math.h"

#define ENABLE_THIS_MAIN      ( 0 )

class student
{
    int age;
    std::string name;
    std::string surname;
    int absence;
public:
    student();
    student(std::string name, std::string surname, int age);
    student(std::string name, std::string surname);

    void set_absence(int absence);
    void set_absence(float absence);

    void print_details(void);
};

student::student(std::string name, std::string surname, int age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
}

student::student(std::string name, std::string surname)
{
    this->name = name;
    this->surname = surname;
    this->age = -1;
}

void student::set_absence(int absence)
{
    this->absence = absence;
}

void student::set_absence(float absence)
{
    this->absence = fabsf(absence);
}

void student::print_details()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Absence: " << absence << std::endl;
}

#if ENABLE_THIS_MAIN

int main(void)
{
    student student1("Serbay", "Ozkan", 27);
    student student2("Hilal", "Ozkan");

    student1.set_absence(10.5f);
    student2.set_absence(10);

    student1.print_details();
    std::cout << std::endl;
    student2.print_details();

    return 0;
}

#endif
