#include <iostream>

using namespace std;

int main() {

    double balance = 99;
    string ccy = "USD";

    if(balance > 100 && "KHR" == ccy) {
        cout<<"Transfer success"<<endl;
    } else if(balance > 70){
        cout<<"Success"<<endl;
    } else{
        cout<<"Failed"<<endl;
    };

    // switch case support only int, char and enum

    cout<<"Please input day start from number 1 to 7: "<<endl;
    int day;
    cin>>day;
    switch (day) {
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid day\n";
    }

    return 0;
}