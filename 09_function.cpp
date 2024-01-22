#include <iostream>

using namespace std;

void hello() {
    cout<<"Hello, CodeStoryKH"<<endl;
}

void hello(string name){
    cout<<"Hello," << name<<endl;
}

void hello(string firstName, string lastName) {
    cout<<"Hello,"<<firstName<<" " <<lastName;
}

int add(int x, int y){
    return x + y;
}

// Function Declaration
double multiple(double x, double y);

int main() {
    //hello();
    hello("CodeStoryKH");
    hello("Code", "StoryKH");
    int result = add(2,3);
    cout<<result<<endl;
    cout<<endl;
    cout<<multiple(2,4);
    return 0;
}

// Function Definition
double multiple(double x, double y) {
    return x * y;
}