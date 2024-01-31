#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
public:
    //Constructor
    BankAccount(const string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance){}

    //Member functions
    void deposit(double amount) {
        balance += amount;
        cout<<"Deposit: $"<<amount<<endl;
        cout<<"Total balance: $"<<balance<<endl;
    }
    void withdrawal(double amount){
        if(amount <= balance){
            balance -= amount;
            cout<<"Withdrawal: $"<<amount<<endl;
        } else{
            cout<<"Insufficient funds for withdrawal"<<endl;
        }
    }
    void displayInfo() {
        cout<<"-------Account Info --------"<<endl;
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Balance: $"<<balance<<endl;
    }
};

int main() {

    BankAccount codestoryBankAccount("CodeStoryKH", 2900.99);
   // codestoryBankAccount.deposit(900.0);
    //codestoryBankAccount.withdrawal(900.9);
    codestoryBankAccount.displayInfo();

    BankAccount accountKh("KH", 90000);
    accountKh.displayInfo();
    return 0;
}