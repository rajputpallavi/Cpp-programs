
/*
Problem Statement=
 Design a class hierarchy to represent different types of employees in a company. You will create a base class called Employee and two derived classes: FullTimeEmployee and PartTimeEmployee. Each employee has a name and a method to calculate their salary. Base Class: Employee Attributes: string name Methods: Employee(string name): Constructor to initialize the employee's name. virtual double calculateSalary(): A virtual method that returns the salary (default implementation returns 0). Derived Class: FullTimeEmployee Attributes: double monthlySalary Methods: FullTimeEmployee(string name, double monthlySalary): Constructor to initialize the name and monthly salary. double calculateSalary() override: Override the base class method to return the monthly salary. Derived Class: PartTimeEmployee Attributes: double hourlyWage int hoursWorked Methods: PartTimeEmployee(string name, double hourlyWage, int hoursWorked): Constructor to initialize the name, hourly wage, and hours worked. double calculateSalary() override: Override the base class method to return the total salary based on hours worked. Instructions: Implement the classes as described above. In the main() function, create one full-time employee and one part-time employee. Output their names and calculated salaries using the calculateSalary() method.
*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string name) : name(name) {}

    virtual double CS() {
        return 0;
    }

    string getName() {
        return name;
    }
};

class FTE : public Employee {
private:
    double MS;

public:
    FTE(string name, double MS) : Employee(name), MS(MS) {}

    double CS() override {
        return MS;
    }
};

class PTE : public Employee {
private:
    double H;
    int HW;

public:
    PTE(string name, double H, int HW) : Employee(name), H(H), HW(HW) {}

    double CS() override {
        return H * HW;
    }
};

int main() {
    FTE fullTime("Prabhakar", 23000.0);
    PTE partTime("Mahesh", 20.0, 800);

    cout << "Full-Time Employee: " << fullTime.getName() 
         << ", Salary: INR " << fullTime.CS() << endl;
    
    cout << "Part-Time Employee: " << partTime.getName() 
         << ", Salary: INR " << partTime.CS() << endl;

    return 0;
}










// Problem Statement =
// Design a class hierarchy to represent different types of vehicles in a transportation system. You will create a base class called Vehicle and two derived classes: Car and Bike. Each vehicle has a name and a method to calculate its rental cost.

// Base Class: Vehicle

// Attributes:
// string name
// Methods:
// Vehicle(string name): Constructor to initialize the vehicle's name.
// virtual double calculateRentalCost(): A virtual method that returns the rental cost (default implementation returns 0).
// Derived Class: Car

// Attributes:
// double dailyRentalRate
// Methods:
// Car(string name, double dailyRentalRate): Constructor to initialize the name and daily rental rate.
// double calculateRentalCost(): Override the base class method to return the total cost based on the number of days rented.
// Derived Class: Bike

// Attributes:
// double hourlyRentalRate
// int hoursRented
// Methods:
// Bike(string name, double hourlyRentalRate, int hoursRented): Constructor to initialize the name, hourly rental rate, and hours rented.
// double calculateRentalCost(): Override the base class method to return the total cost based on hours rented.
// Instructions:
// Implement the classes as described above.
// In the main() function, create one car and one bike.
// Output their names and calculated rental costs using the calculateRentalCost() method.



/* Problem Statement: CalculateBill
You are tasked with creating a billing system for a store that sells various types of items. Each item type has a different way of calculating the bill based on its category (e.g., regular items, discounted items, and imported items).

Requirements:
Base Class: Create a base class Item that has a pure virtual function calculateBill().
Derived Classes: Implement three derived classes:
RegularItem: Calculates the bill based on its price.
DiscountedItem: Applies a discount percentage to the price.
ImportedItem: Adds a tax to the price

Problem Statement: CalculateBill for Books and CDs
You are tasked with creating a billing system for a store that sells books and CDs. Each type of item has different pricing rules based on its category (e.g., standard pricing for books and CDs, and special pricing for discounted or premium items).

Requirements:
Base Class: Create a base class Media that has a pure virtual function calculateBill().
Derived Classes:
Book: Calculates the bill based on its price and applies a discount if it’s a special edition.
CD: Calculates the bill based on its price and may have additional charges for premium CDs.
*/