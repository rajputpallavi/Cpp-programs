 #include <iostream>

class DeepExample {
public:
    int* data;

    DeepExample(int value) {
        data = new int(value);
    }

    DeepExample(const DeepExample& other) {
        data = new int(*other.data); 

        // Allocate new memory and copy the value
    }

    ~DeepExample() {
        delete data;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DeepExample original(10);
    DeepExample copy = original; 
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
