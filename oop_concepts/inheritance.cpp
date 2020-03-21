/*
 * The capability of a class to derive properties and characteristics
 * from another class is called Inheritance. Inheritance is one of
 * most important features of OOP.
 *
 * Sub Class -> The class that inherits properties from another class is
 * called Sub class or Derived class
 *
 * Super Class -> The class whose properties are inherited by sub class
 * is called Base class or Super Class
 *
 * Inheritance Types
 * - Single Inheritance
 * - Multiple Inheritance
 * - Multilevel Inheritance
 * - Hierarchical Inheritance
 * - Hybrid (Virtual) Inheritance
 *
 * Modes of inheritance:
 *
 *  class A
    {
    public:
        int x;
    protected:
        int y;
    private:
        int z;
    };

    class B : public A
    {
        // x is public
        // y is protected
        // z is not accessible from B
    };

    class C : protected A
    {
        // x is protected
        // y is protected
        // z is not accessible from C
    };

    class D : private A    // 'private' is default for classes
    {
        // x is private
        // y is private
        // z is not accessible from D
    };
 */

#include <iostream>

#define ENABLE_THIS_MAIN      ( 0 )

class person
{
public:
    int age;
    std::string name;
    std::string surname;
    std::string sex;

    person():age {0}, name {"NULL"}, surname {"NULL"}, sex {"NULL"} {}
};

// Single Inheritance
class university_student: public person
{
private:
    // Private members
    int absence;
    std::string school_name;
    float total_grade;

public:
    // Constructor with initializer list
    university_student(std::string name, std::string surname, std::string sex, int age): absence {0}, school_name {"NULL"}, total_grade {0.0f}
    {
        this->name = name;
        this->surname = surname;
        this->sex = sex;
        this->age = age;
    }

    // Setter Methods
    void set_absence(int absence);
    void set_school_name(std::string school_name);
    void set_total_grade(float total_grade);

    void print_details();
};

void university_student::set_absence(int absence)
{
    this->absence = absence;
}

void university_student::set_school_name(std::string school_name)
{
    this->school_name = school_name;
}

void university_student::set_total_grade(float total_grade)
{
    this->total_grade = total_grade;
}

void university_student::print_details()
{
    std::cout << "***************Student Details***************" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Sex: " << sex << std::endl;

    std::cout << "School Name: " << school_name << std::endl;
    std::cout << "Absence: " << absence << std::endl;
    std::cout << "Total Grade: " << total_grade << std::endl;
    std::cout << "*********************************************" << std::endl;
}

#if ENABLE_THIS_MAIN

int main(void)
{
    university_student student1("Serbay", "Ozkan", "Male", 28);

    student1.set_absence(12);
    student1.set_school_name("Cukurova University");
    student1.set_total_grade(2.86);

    student1.print_details();

    return 0;
}

#endif
