#include <iostream>
using namespace std;

int main() {
    int age = 19;

    int* ptr = &age;
    int& ref = age;

    cout << *ptr<<endl;
    cout << age <<endl;

    double salaries[5];
    salaries[1];

    struct Student {
        int id;
        string name;
        bool grade;
        double score;
    };

    return 0;
}