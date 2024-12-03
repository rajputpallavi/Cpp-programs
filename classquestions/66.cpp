/*
You are tasked with writing a C++ program that calculates the mean (average) of a collection of numbers stored in a vector. Your program should include the following functionalities:

Input Numbers: Allow the user to input a series of numbers to add to the vector.
Calculate Mean: Implement a function that calculates and returns the mean of the numbers in the vector.
Display Result: Display the calculated mean to the user.
Handle Edge Cases: Ensure that the program handles cases where the vector is empty and informs the user appropriately.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MeanCalculator{
private:
    vector<double> numbers;

public:
     void inputNumbers() {
        double num;
        cout << "Enter numbers (type -1 to stop): \n";
        while (true) {
            cin >> num;
            if (num == -1) { // Stop input if user types -1
                break;
            }
            numbers.push_back(num);
            cout << "Added: " << num << "\n";
        }
    }
    

double calculateMean() {
        if (numbers.empty()) {
            cout << "No numbers to calculate the mean.\n";
            return 0.0; // Return 0 if no numbers are present
        }

        double sum = 0.0;
        for (const auto& num : numbers) {
            sum += num;
        }
        return sum / numbers.size(); // Return the mean
    }
     // Function to display the result
    void displayMean() {
        double mean = calculateMean();
        if (!numbers.empty()) {
            cout << "Mean: " << mean << "\n";
        }
    }
};

int main() {
    MeanCalculator calculator;

    calculator.inputNumbers(); // Get user input for numbers
    calculator.displayMean();  // Calculate and display the mean

    return 0;
}