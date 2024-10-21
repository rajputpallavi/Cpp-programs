//Write a C++ program that uses a recursive function to calculate the factorial of a non-negative integer entered by the user. If the user enters a negative integer, the program should throw a std::invalid_argument exception with the message "Negative input error." If the input is valid, the program should print the factorial of the number.


#include <iostream>
#include <stdexcept> 

using namespace std;
long factorial(int n){
     if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

void prabhakar(int i)
{

        if (i < 0)
            throw invalid_argument("Negative input error"); 
          
}

int main()
{
    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    try
    {
        prabhakar(userInput);
        long result=factorial(userInput);
         cout << "Factorial of " << userInput << " is " << result << endl;
    }
     catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << '\n'; // Handle exception
    }
    return 0;
    }


