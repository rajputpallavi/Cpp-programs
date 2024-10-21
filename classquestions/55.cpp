//Virtual function and pure virtual class
/*
virtual class...we use the body in this...used base class 
pure virtual class..no need of body ..initialise with zero and we can override it
*/
/*
ABSTRACT CLASS
abstract class contain method without a body. It is used to define a template for derived class
*in concrete method (with a body)
the order of the execution is very crucial for understanding how constructors and destructors are called  
*/
/*
PROBLEM STATEMENT=
an abstract class payment method with a pure virtual function process payment enforcing a common interface
for payment method to derive class - credit class payment and phone pay payment. Implement this dunction to 
handle specific payment processing. The payment function demonstrate polymorphism by accepting a payment
pointer that allow dynamic method solution. Proper memory management ensure with virtual destructor to
when objects are deleted. 
*/
#include <iostream>
using namespace std;

class PM {
public:
    virtual void PP(double amount) = 0;
    virtual ~PM() {}
};

class CCP : public PM {
public:
    void PP(double amount) override {
        cout << "Processing credit card payment of INR " << amount << endl;
    }
    ~CCP() {
        cout << "CreditCardPayment destructor called." << endl;
    }
};

class PPP : public PM {
public:
    void PP(double amount) override {
        cout << "Processing Phonepay payment of INR " << amount << endl;
    }
    ~PPP() {
        cout << "PhonepayPayment destructor called." << endl;
    }
};

void MP(PM* PM, double amount) {
    PM->PP(amount);
}

int main() {
    PM* payment1 = new CCP();
    PM* payment2 = new PPP();

    MP(payment1, 1000.00);
    MP(payment2, 1500.00);

    delete payment1;
    delete payment2;

    return 0;
}


























// Abstract Classes define a blueprint for derived classes but cannot be instantiated.
// Virtual Destructors ensure proper cleanup in class hierarchies.
// Polymorphism allows for dynamic method resolution based on the object type.
// The Order of Execution is crucial for understanding how constructors and destructors are called in inheritance chains.
