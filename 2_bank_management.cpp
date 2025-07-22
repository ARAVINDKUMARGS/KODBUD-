#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int balance;

public:
    BankAccount(string n, int b) {
        name = n;
        balance = b;
    }

    void deposit(int amt) {
        balance += amt;
        cout << "Deposited: " << amt << endl;
    }

    void withdraw(int amt) {
        if (amt > balance) cout << "Insufficient balance\n";
        else {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        }
    }

    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("John", 1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.display();
    return 0;
}