#include <iostream>

using namespace std;

int main() {

    int age =18;
    //int *agePtr = &age;
    int *agePtr = nullptr;
    agePtr = &age;

    int *agePtrA = agePtr;

    cout<<"Age value: "<<*agePtr<<endl;
    cout<<"Age value a: "<<*agePtrA<<endl;

    // Arithmetic
    int ages[5] = {12,13,14,15,16};
    int *agesPtr = ages;

    // Access
    for(int i = 0; i < 5; i++) {
        cout<<"Element: " << i<< ": " << *agesPtr <<endl;
        agesPtr++;
    }

    //Dynamic allocate
    int *dynamicAge = new int;
    *dynamicAge = 27;
    cout<<"Dynamic value: "<<*dynamicAge<<endl;
    delete dynamicAge;
    cout<<"Dynamic value: "<<*dynamicAge<<endl;
    return 0;
}