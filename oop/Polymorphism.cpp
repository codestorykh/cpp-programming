

#include "Polymorphism.h"

#include <iostream>

using namespace std;

class Shape {
public:
    // Virtual function
    virtual void draw() const {
        cout << "Drawing a shape.\n";
    }
};

class Circle : public Shape {
public:
    // Override the virtual function
    void draw() const override {
        cout << "Drawing a circle.\n";
    }
};

class Square : public Shape {
public:
    // Override the virtual function
    void draw() const override {
        cout << "Drawing a square.\n";
    }
};


int main() {
    Shape *shapePtr;
    Circle circle;
    Square square;

    shapePtr = &shapePtr;
    shapePtr->draw();
    shapePtr = &circle;
    shapePtr->draw();  // Calls Circle::draw()

    shapePtr = &square;
    shapePtr->draw();  // Calls Square::draw()
    return 0;
}
