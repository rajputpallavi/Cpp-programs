#include <iostream>
#include <string> 

using namespace std;

class Diablo {
private:
    static const string commonColor;
    static const int commonCubicCapacity;
    static const int commonNumberOfSeats;
    string ownerName;
    int yearOfManufacture;
    int engineNumber;
    int frameNumber;

public:
    Diablo(const string& owner, int year, int engine, int frame) 
        : ownerName(owner), yearOfManufacture(year), engineNumber(engine), frameNumber(frame) {}

    Diablo(const Diablo& other) 
        : ownerName(other.ownerName), yearOfManufacture(other.yearOfManufacture), 
          engineNumber(other.engineNumber), frameNumber(other.frameNumber) {}

    void display() const {
        cout << "Color: " << commonColor << endl;
        cout << "Cubic Capacity: " << commonCubicCapacity << endl;
        cout << "Number of Seats: " << commonNumberOfSeats << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "Engine Number: " << engineNumber << endl;
        cout << "Frame Number: " << frameNumber << endl;
    }
};

// Initialize static members
const string Diablo::commonColor = "Hot Red";
const int Diablo::commonCubicCapacity = 15000;
const int Diablo::commonNumberOfSeats = 2;

int main() {
    Diablo obj1("Prabhakar Kumar", 2024, 123456, 654321);
    Diablo obj2 = obj1;

    cout << "Object 1 details:" << endl;
    obj1.display();

    cout << "\nObject 2 details (copied):" << endl;
    obj2.display();
    
    return 0;
}