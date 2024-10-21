/*Write a C++ program that prompts the user to enter a floating-point number. If the user enters a negative number, the program should throw a std::invalid_argument exception with the message. "Negative number error." If the user enters a number greater than 100, the program- should throw a std::out_of_range exception with the message. "Number out of range." If the input is valid- (between 0 and 100), the program should print "Valid input: [number]."*/


#include <iostream>
#include <stdexcept> 

using namespace std;

void prabhakar(int i)
{
    try 
    {
        if (i < 0)
            throw invalid_argument("Negative number error"); 
        else if(i>100){
            throw out_of_range("Number Out of range"); 
            }
            else{
                cout<<"Valid Input :"<<i<<endl;
            }
    }
    catch (const invalid_argument& e) 
    {
        cout << "inside prabhakar: " << e.what() << '\n';
        throw; 
    }
}

int main()
{
    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    try
    {
        prabhakar(userInput);
    }
    catch (const invalid_argument& e)
    {
        cout << "inside main: " << e.what() << '\n';
    }

    return 0;
}
