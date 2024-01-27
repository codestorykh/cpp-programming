#include <iostream>

using namespace std;

int main() {
    string firstName = "CodeStory";
    cout<<firstName<<endl;

    string lastName("KH");
    cout<<lastName<<endl;

    string fullName = firstName + " " + lastName;
    cout<<fullName<<endl;

    //substring
    string subString = fullName.substr(10, 2);
    cout<<"Substring: "<<subString<<endl;
    //find
    size_t myFindStr = fullName.find("KH");
    cout<<"Find string: "<<myFindStr<<endl;
    //replace
    fullName.replace(0, 9, "Hello, ");
    cout<<"Replace func: "<<fullName<<endl;
    //length
    cout<<"Length: "<<fullName.length()<<endl;

    //cin and cout
    string userInput;
    cout<<"Please input username: "<<endl;
    cin >> userInput;
    cout<<"Hello, "<<userInput<<endl;
    return 0;
}