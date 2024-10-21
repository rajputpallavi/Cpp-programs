//Overriding


#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest(double amount) {
        return amount * 0.03;
    }
};

class SavingsAccount : public Account {
public:
    double calculateInterest(double amount) override {
        return amount * 0.05;
    }
};

int main() {
    Account* acc1 = new Account();
    Account* acc2 = new SavingsAccount();

    cout << "Interest for Account: ₹" << acc1->calculateInterest(10000) << endl;
    cout << "Interest for SavingsAccount: ₹" << acc2->calculateInterest(10000) << endl;

    delete acc1;
    delete acc2;
    return 0;
}