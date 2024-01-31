#include <iostream>

using namespace std;

class Car { // Class Car
public: // Access Specifier
    // Member Variable
    string brand;
    int year;
    // Member Function
    void displayInfo();
};

// Class definition
void Car::displayInfo() {
    cout<<"Brand name: "<<brand;
    cout<<" Year: "<<year;
}

int main() {
    Car car;
    car.brand = "Toyota";
    car.year = 2023;
    car.displayInfo();

    return 0;
}