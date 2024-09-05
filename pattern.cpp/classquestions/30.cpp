#include <iostream>
class ShallowExample {
public:
    int* data;

    ShallowExample(int value) {
        data = new int(value);
    }

    ShallowExample(const ShallowExample &other) {
        data = other.data; 
    }

    ~ShallowExample() {
        delete data;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    ShallowExample original(10);
    ShallowExample copy = original; 

    std::cout << "Original: ";
    original.display();

    std::cout << "Copy: ";
    copy.display();

    *original.data = 20;

    std::cout << "After modifying original:" << std::endl;
    std::cout << "Original: ";
    original.display();

    std::cout << "Copy: ";
    copy.display(); 

    return 0;
} 