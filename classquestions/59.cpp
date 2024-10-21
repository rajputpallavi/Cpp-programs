/*
rethrowing::
it means throwing an exception within the exception handler (catch)
*/


#include <iostream>
#include <stdexcept> 

using namespace std;

void prabhakar(int i)
{
    try 
    {
        if (i < 0)
            throw runtime_error("Negative integer error"); 
        else
            cout << "It's a positive integer.\n"; 
    }
    catch (const runtime_error& e) 
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
    catch (const runtime_error& e)
    {
        cout << "inside main: " << e.what() << '\n';
    }

    return 0;
}