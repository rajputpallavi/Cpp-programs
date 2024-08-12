#include <iostream>
using namespace std;
class box2;
class box3;
class box4;
class box1{
    double length,width,height;
    public:
    box1(double l,double w,double h):length(l),{}
    double getvolume(){
        return length*width*height;
    }
    friend void comparevalues(box1 b1, box2 b2, box3 b3, box4 b4){};
    { double vol1=b1.getvolume();
    }
}





//----------------------------------Another approach---------------------------------

// class Box {
// private:
//     float length;
//     float width;
//     float height;

// public:
//     // Constructor
//     Box(float length, float width, float height) {
//         this->length = length;
//         this->width = width;
//         this->height = height;
//     }

//     // Calculate volume
//     float calculateVolume() {
//         return length * width * height;
//     }
// };

// // Function to compare volumes of four boxes
// void compareVolumes(Box box1, Box box2, Box box3, Box box4) {
//     float volume1 = box1.calculateVolume();
//     float volume2 = box2.calculateVolume();
//     float volume3 = box3.calculateVolume();
//     float volume4 = box4.calculateVolume();

//     if (volume1 > volume2 && volume1 > volume3 && volume1 > volume4) {
//         cout << "Box 1 has the greatest volume." << endl;
//     } else if (volume2 > volume1 && volume2 > volume3 && volume2 > volume4) {
//         cout << "Box 2 has the greatest volume." << endl;
//     } else if (volume3 > volume1 && volume3 > volume2 && volume3 > volume4) {
//         cout << "Box 3 has the greatest volume." << endl;
//     } else if (volume4 > volume1 && volume4 > volume2 && volume4 > volume3) {
//         cout << "Box 4 has the greatest volume." << endl;
//     } else {
//         cout << "Two or more boxes have the same greatest volume." << endl;
//     }
// }

// int main() {
//     Box box1(10, 10, 10);
//     Box box2(5, 5, 5);
//     Box box3(8, 8, 8);
//     Box box4(12, 12, 12);

//     compareVolumes(box1, box2, box3, box4);

//     return 0;
// }