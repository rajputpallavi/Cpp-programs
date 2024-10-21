/* What issues might arise when calling garage.display() in the main() function?
How would you resolve the ambiguity when multiple show methods exist in the derived classes (Car and Bike)?
*/
//Ambiguity :-
#include <iostream>
using namespace std;

class Vehicle {
public:
    void show() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void show() {
        Vehicle::show();
        cout << "This is a Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void show() {
        cout << "This is a Bike" << endl;
    }
};

class Garage : public Car, public Bike {
public:
    void display() {
        Car::show();
        Bike::show();
    }
};

class Owner : public Garage {
public:
    void introduce() {
        cout << "I am the Owner." << endl;
    }
};

int main() {
    Garage garage;
    garage.display();

    Owner owner;
    owner.introduce();
    return 0;
}