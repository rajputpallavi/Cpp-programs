/*
overriding- 1. it occur when one class inherit from another class
            2. in function overriding, must have same signature of function
            3. it is concept of run time polymorphism 
            4. in function overriding we define a function in base class and derive class with the same name and same parameter
            --we usually use the word "virtual" to override the function so that we will be able to change it in future according to need, override means we are changing the existing value with someting new value in the run time. 
            syntax of override = acc1->calculateInterest(1000);

overloading-1. it can occur with or without inheritance 
            2. in function overloading, must have different signature of function 
            e.g. void sum() and void sum(int a) / void sum(a+b) and void sum(a+b+c)
            3. it is concept of compile time polymorphism
            4. in function overloading we declare more then one function with same name and different type of parameter



                           translated                        executed
            source code--------------------->machine code------------------->executable code
                          compile time                        run time
                          (early binding)                   (late binding)




Concept of binding:-
1. Early Binding
    - it is faster than late binding due to compile time resolutions
    - it involves function overloading and is common with non-virtual function
2. Late Binding
    - it is more flexible and allow for dynamic behaviour
    - it involves virtual functions
*/


//Function Overloading


#include <iostream>
using namespace std;

class Account {
public:
    double calculateBalance(double initialAmount) {
        return initialAmount;
    }

    double calculateBalance(double initialAmount, double deposit) {
        return initialAmount + deposit;
    }

    double calculateBalance(double initialAmount, double deposit, double withdrawal) {
        return initialAmount + deposit - withdrawal;
    }
};

int main() {
    Account myAccount;

    cout << "Balance with no transactions: ₹" << myAccount.calculateBalance(10000) << endl;
    cout << "Balance after deposit: ₹" << myAccount.calculateBalance(10000, 2000) << endl;
    cout << "Balance after deposit and withdrawal: ₹" << myAccount.calculateBalance(10000, 2000, 1500) << endl;

    return 0;
}