
//Porsche, a prestigious luxury sports car manufacturer from Germany, has just released a new model known as the "918 Spyder". The production of the 918 Spyder is extremely limited each year, and it is available in a single color: “Guards Red”.

//The attributes of each 918 Spyder include color, engine displacement, seating capacity, year of manufacture, serial number, registration number, and owner's name. The attributes that remain unchanged for all 918 Spyders are color, engine displacement, and seating capacity.

//You are assigned to develop a specialized system for managing Porsche 918 Spyder cars. Perform the following tasks:

//Store the owner's name using a dynamic array as a data member.
//Create an object named “spyder1” and initialize it with suitable values.
//Write a copy constructor that copies only the attributes that are consistent across all 918 Spyders.
//Create another object named “spyder2” by copying the invariant attributes from “spyder1”.
//Set the remaining attributes of “spyder2” with your own custom values.
#include <iostream>
#include <string>

using namespace std;

class Spyder {
private:
    string color;
    int engineDisplacement;
    int seatingCapacity;
    int yearOfManufacture;
    string serialNumber;
    string registrationNumber;
    string ownerName;

public:
    Spyder(string c, int e, int s, int y, string sN, string rN, string o)
        : color(c), engineDisplacement(e), seatingCapacity(s), yearOfManufacture(y), serialNumber(sN), registrationNumber(rN), ownerName(o) {}

    Spyder(const Spyder &other)
        : color(other.color), engineDisplacement(other.engineDisplacement), seatingCapacity(other.seatingCapacity) {}

    void display() const {
        cout << "Color: " << color << "\n"
             << "Engine Displacement: " << engineDisplacement << "\n"
             << "Seating Capacity: " << seatingCapacity << "\n"
             << "Year of Manufacture: " << yearOfManufacture << "\n"
             << "Serial Number: " << serialNumber << "\n"
             << "Registration Number: " << registrationNumber << "\n"
             << "Owner Name: " << ownerName << "\n";
    }

    void setRemainingAttributes(int y, string sN, string rN, string o) {
        yearOfManufacture = y;
        serialNumber = sN;
        registrationNumber = rN;
        ownerName = o;
    }
};

int main() {
    Spyder spyder1("Guards Red", 4180, 2, 2024, "SN2222", "RN3333", "Prabhakar Kumar");

    Spyder spyder2 = spyder1;

    spyder2.setRemainingAttributes(2025, "SN11111", "RN00000", "Prabhakar Kumar Singh");

    cout << "Details of spyder1:\n";
    spyder1.display();

    cout << "\nDetails of spyder2:\n";
    spyder2.display();

    return 0;
}