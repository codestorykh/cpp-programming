#include <iostream>

using namespace std;

int main() {

    // Declaration and Initialization
    int numbers[3] = {1,2,3};
    cout<<numbers[0]<<endl;
    cout<<numbers[2]<<endl;

    string names[5];
    names[0] = "CodeStoryKh";
    names[3] = "Hello";
    cout<<names[0]<<endl;
    cout<<names[3]<<endl;

    for(int i =0; i< 3; i ++){
        cout<<numbers[i]<<endl;
    }

    // compare

    int classesA[4] = {1,2,3,4};
    int classesB[4] = {1,8,3,4};

    bool status = true;
    for(int i=0; i < 4; i++) {
        if(classesA[i] != classesB[i]) {
            status = false;
            break;
        }
    }
    cout<<boolalpha<<status<<endl;

    return 0;
}