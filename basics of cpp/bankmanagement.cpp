#include <iostream>
using namespace std;

struct BankAccount {
    int accNumber;
    string name;
    double balance;
};

int main() {
    BankAccount acc;
    BankAccount *ptr = &acc;
    
    cout << "Enter account number: ";
    cin >> ptr->accNumber;
    cout << "Enter name: ";
    cin >> ptr->name;
    cout << "Enter balance: ";
    cin >> ptr->balance;
    
    cout << "\nAccount Info:\n";
    cout << "Number: " << ptr->accNumber << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Balance: $" << ptr->balance << endl;
    
    return 0;
}
