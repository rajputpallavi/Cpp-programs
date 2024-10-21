/* 
binary operator using friend function 
friend function of a class is used to access the private data of that class
box class= represent the three dimensional box with length, width and height
friend function= overload the '+' operator to combine two box object by adding their dimension 
*/
//sum of two complex number with the help of friend function using binary operator.


#include <iostream>

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    friend Box operator+(const Box& b1, const Box& b2);

    void display() const {
        std::cout << "Length: " << length << ", Width: " << width << ", Height: " << height << "\n";
    }
};

Box operator+(const Box& b1, const Box& b2) {
    int newLength = b1.length + b2.length;
    int newWidth = b1.width + b2.width;
    int newHeight = b1.height + b2.height;
    return Box(newLength, newWidth, newHeight);
}

int main() {
    Box box1(1, 2, 3);
    Box box2(4, 5, 6);

    Box box3 = box1 + box2;

    box1.display();
    box2.display();
    box3.display();

    return 0;
}