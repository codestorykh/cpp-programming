#include <iostream>

using namespace std;

int main() {

    int number = 10;
    for(int i = 1; i <= number; i ++) {
     //   cout<<"Number "<<i<<endl;
    }

    int i = 5; // Initialization

    // Condition: i <= 5
    while (i <= 5) {
        // Code to be executed
        std::cout << i << " ";

        // Update: ++i
        ++i;
    }


    string password;
    do {
        cout<<"Please input password: "<<endl;
        cin>>password;
        if (password != "secret") {
            cout << "Incorrect password. Try again.\n";
        } else{
            cout<<"Login successfully"<<endl;
        }
    } while (password != "secret");
    cout<<"Login"<<endl;
    return 0;
}