//Implement a class StringUtils with a static member function 
//reverseString(const std::string& str) that returns the reversed version of the input string. 
//Demonstrate this function in main().
#include <iostream>
using namespace std;
#include <string>

class StringUtils {
public:
    static std::string reverseString(const std::string& str) {
        std::string reversedStr = str;
        int left = 0;
        int right = reversedStr.length() - 1;

        while (left < right) {
            // Swap characters
            char temp = reversedStr[left];
            reversedStr[left] = reversedStr[right];
            reversedStr[right] = temp;

            // Move towards the center
            left++;
            right--;
        }

        return reversedStr;
    }
};

int main() {
    std::string originalStr = "Hello, World!";
    std::cout << "Original string: " << originalStr << std::endl;

    std::string reversedStr = StringUtils::reverseString(originalStr);
    std::cout << "Reversed string: " << reversedStr << std::endl;

    return 0;
}