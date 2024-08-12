#include <iostream> 
using namespace std; 
 
class Box1 { 
private: 
    float length; 
    float width; 
    float height; 
public: 
    Box1(float length, float width, float height) { 
        this->length = length; 
        this->width = width; 
        this->height = height; 
    } 
    float Volume() { 
        return length * width * height; 
    } 
}; 
 
class Box2 { 
private: 
    float length; 
    float width; 
    float height; 
public: 
    Box2(float length, float width, float height) { 
        this->length = length; 
        this->width = width; 
        this->height = height; 
    } 
    float Volume() { 
        return length * width * height; 
    } 
}; 
 
class Box3 { 
private: 
    float length; 
    float width; 
    float height; 
public: 
    Box3(float length, float width, float height) { 
        this->length = length; 
        this->width = width; 
        this->height = height; 
    } 
    float Volume() { 
        return length * width * height; 
    } 
}; 
 
class Box4 { 
private: 
    float length; 
    float width; 
    float height; 
public: 
    Box4(float length, float width, float height) { 
        this->length = length; 
        this->width = width; 
        this->height = height; 
    } 
    float Volume() { 
        return length * width * height; 
    } 
}; 
 
void Volumes(Box1 box1, Box2 box2, Box3 box3, Box4 box4) { 
    float volume1 = box1.Volume(); 
    float volume2 = box2.Volume(); 
    float volume3 = box3.Volume(); 
    float volume4 = box4.Volume(); 
 
    if (volume1 > volume2 && volume1 > volume3 && volume1 > volume4) { 
        cout << "Box 1 has the greatest volume." << endl; 
    } else if (volume2 > volume1 && volume2 > volume3 && volume2 > volume4) { 
        cout << "Box 2 has the greatest volume." << endl; 
    } else if (volume3 > volume1 && volume3 > volume2 && volume3 > volume4) { 
        cout << "Box 3 has the greatest volume." << endl; 
    } else if (volume4 > volume1 && volume4 > volume2 && volume4 > volume3) { 
        cout << "Box 4 has the greatest volume." << endl; 
    } else { 
        cout << "Two or more boxes have the same greatest volume." << endl; 
    } 
} 
 
int main() { 
    Box1 box1(10, 10, 10); 
    Box2 box2(5, 5, 5); 
    Box3 box3(8, 8, 8); 
    Box4 box4(12, 12, 12); 
    Volumes(box1, box2, box3, box4); 
    return 0; 
}