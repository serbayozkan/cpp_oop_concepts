/*
 * Encapsulation is a process of combining data members and functions in a single unit called class.
 * This is to prevent the access to the data directly,
 * the access to them is provided through the functions of the class.
 * It is one of the popular feature of Object Oriented Programming(OOPs) that helps in data hiding.
 *
 * How Encapsulation is achieved in a class?
 * 1) Make all the data members private
 * 2) Create public setter and getter functions
 *
 * In C++ encapsulation can be implemented using Class and access modifiers.
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 0 )

class student
{
private:
     std::string name;
     std::string surname;
     int age;

public:
     void set_name(const char* name);
     void set_surname(const char* surname);
     void set_age(int age);

     std::string get_name();
     std::string get_surname();
     int get_age();
};

void student::set_name(const char* name)
{
    this->name = name;
}

void student::set_surname(const char *surname)
{
    this->surname = surname;
}

void student::set_age(int age)
{
    this->age = age;
}

std::string student::get_name()
{
    return name;
}

std::string student::get_surname()
{
    return surname;
}

int student::get_age()
{
    return age;
}


#if ENABLE_THIS_MAIN

int main(void)
{
    student student1;

    student1.set_name("Serbay");
    student1.set_surname("Ozkan");
    student1.set_age(28);

    std::cout << "name: " << student1.get_name() << std::endl;
    std::cout << "surname: " << student1.get_surname() << std::endl;
    std::cout << "age: " << student1.get_age() << std::endl;

    return 0;
}

#endif
