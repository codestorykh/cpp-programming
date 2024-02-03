
#include "Inheritance.h"
#include <iostream>

using namespace std;

// Base class
class People {
public:
    // Constructor
    People(const string& name, const string& job) : name(name), job(job) {}

    // Member function
    void profile(){
        cout << "My name is " << name << ". I'm a "<<job<<"."<< endl;
    }
    // Member function
    void sleep() const {
        cout << job << " is sleeping." << endl;
    }
    // Member function
    void eat() const {
        cout << job << " is eating." << endl;
    }
    // Member function
    void drink() const {
        cout << job << " is drinking." << endl;
    }

private:
    string name;
    string job;
};

// Derived class
class CodeStoryKH : public People {
public:
    // Constructor
    CodeStoryKH(const string& name, const string& job, const string& working, const string& holiday)
    : People(name, job), working(working), holiday(holiday) {}

    // Additional member function
    void work() const {
        cout <<working<< endl;
    }
    void freeTime() {
        cout<<holiday<<endl;
    }

private:
    string working;
    string holiday;
};

// Derived class
class HR : public People {
public:
    // Constructor
    HR(const string& name, const string& job, const string& working)
            : People(name, job), working(working) {}

    // Additional member function
    void work() const {
        cout <<working<< endl;
    }

private:
    string working;
};

int main() {
    string name = "CodeStoryKH";
    string job = "Developer";
    string work = "Developer is coding";
    string onHoliday = "Fix bugs on holiday...!";
    // Create an instance of the derived class
    CodeStoryKH codeStoryKh(name, job, work, onHoliday);

    // Access base class member functions
    codeStoryKh.profile();
    codeStoryKh.eat();
    codeStoryKh.drink();
    codeStoryKh.sleep();

    // Access derived class member function
    codeStoryKh.work();
    codeStoryKh.freeTime();

    cout<<"----------------------------------------------"<<endl;
    HR hr("View", "HR", "HR is recruiting");
    // Access base class member functions
    hr.profile();
    hr.eat();
    hr.drink();
    hr.sleep();

    // Access derived class member function
    hr.work();
    return 0;
}