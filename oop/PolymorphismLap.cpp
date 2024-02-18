#include <iostream>

using namespace std;

//******************** University Management System *************************

// Base class for all individuals (employees and students)
class Person
{
protected:
    string name;

public:
    Person(const string &name) : name(name) {}

    // Virtual function for displaying information
    virtual void displayInfo() const
    {
        cout << "Name: " << name << "\n";
    }
};

// Derived class for employees
class Employee : public Person
{
protected:
    string department;

public:
    Employee(const string &name, const string &dept) : Person(name), department(dept) {}

    // Override displayInfo for employees
    void displayInfo() const override
    {
        Person::displayInfo();
        cout << "Department: " << department << "\n";
    }
};

// Derived class for students
class Student : public Person
{
protected:
    string major;

public:
    Student(const string &name, const string &major) : Person(name), major(major) {}

    // Override displayInfo for students
    void displayInfo() const override
    {
        Person::displayInfo();
        cout << "Major: " << major << "\n";
    }
};


int main()
{
    // Creating objects of different types
    Employee emp("Sok", "Computer Science");
    Student student("Sunday", "Physics");

    // Using polymorphism to display information
    Person *people[] = {&emp, &student};


    cout<<"Data Information:"<<endl;
    cout << "\n";
    for (const auto &person : people)
    {
        person->displayInfo();
        cout << "\n";
    }

    return 0;
}