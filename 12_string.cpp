#include <iostream>

using namespace std;

int main() {
    // Using string literals
    string greeting = "Hello, World!";

    // Using string constructor
    string name("CodeStoryKH");

    // Concatenating strings
    string fullGreeting = greeting + " " + name;
    cout<<"Concatenating strings"<<fullGreeting<<endl;


    string sentence = "Programming is fun!";
    // Extracting a substring
    string sub = sentence.substr(0, 11); // "Programming"
    cout<<"Extracting substring: " <<sub<<endl;

    // Finding a substring
    size_t position = sentence.find("fun");
    cout<<"Finding substring: " <<position<<endl;

    // Replacing a portion of the string
    sentence.replace(position, 3, "exciting");
    cout<<"Replacing a portion of the string: " <<sentence<<endl;

    // Appending another string
    sentence.append(" Enjoy it!");
    cout<<"Appending another string: " <<sentence<<endl;

    cout << sentence << endl;

    // User input
    string userInput;
    cout << "Enter your name: ";
    cin >> userInput;
    cout << "Hello, " << userInput << "!" << endl;

    return 0;
}