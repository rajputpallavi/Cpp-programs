#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double bal = 0.0) : balance(bal) {}

    BankAccount operator + (const BankAccount &other) const {
        return BankAccount(balance + other.balance);
    }

    BankAccount operator - (const BankAccount &other) const {
        return BankAccount(balance - other.balance);
    }

    bool operator == (const BankAccount &other) const {
        return balance == other.balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void display() const {
        cout << "Balance: Rs" << balance << endl;
    }
};

int main() {
    BankAccount account1(1000.0);
    BankAccount account2(500.0);

    cout << "Initial Balances:" << endl;
    account1.display();
    account2.display();

    BankAccount total = account1 + account2;
    cout << "\nAfter adding account2 funds to account1:" << endl;
    total.display();

    BankAccount withdrawal = account1 - account2;
    cout << "\nAfter withdrawing account2 funds from account1:" << endl;
    withdrawal.display();

    if (account1 == account2) {
        cout << "\nBoth accounts have the same balance." << endl;
    } else {
        cout << "\nAccounts have different balances." << endl;
    }

    return 0;
}