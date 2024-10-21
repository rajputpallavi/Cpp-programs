/* reuse in programming refers to practice of using existing code (base class) that helps in minimizing the error speeding up development time easy to manage update share component and breaking down into manageable part 
what is derive class
it allow you to create a new class that inherit attribute and method from existing code 
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string make;
    string model;
    int year;

    Car(string m, string mo, int y) : make(m), model(mo), year(y) {}

    void startEngine() {
        cout << "Engine started for " << make << " " << model << endl;
    }
};

class Sedan : public Car {
public:
    int trunkSize;

    Sedan(string m, string mo, int y, int ts) : Car(m, mo, y), trunkSize(ts) {}

    void openTrunk() {
        cout << "Trunk opened! Size: " << trunkSize << " liters" << endl;
    }
};

class SUV : public Car {
public:
    bool fourWheelDrive;

    SUV(string m, string mo, int y, bool fwd) : Car(m, mo, y), fourWheelDrive(fwd) {}

    void activate4WD() {
        if (fourWheelDrive) {
            cout << "4WD activated!" << endl;
        } else {
            cout << "This SUV does not have 4WD." << endl;
        }
    }
};

int main() {
    Sedan mySedan("Toyota", "Camry", 2020, 500);
    mySedan.startEngine();
    mySedan.openTrunk();

    SUV mySUV("Ford", "Explorer", 2021, true);
    mySUV.startEngine();
    mySUV.activate4WD();

    return 0;
}