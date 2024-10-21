//Design a C++ class named Vector3D that represents a 3-dimensional vector. The class should include:

//Private data members:

//double x (the x-coordinate of the vector)
//double y (the y-coordinate of the vector)
//double z (the z-coordinate of the vector)
//A parameterized constructor to initialize the vector with specific x, y, and z coordinates.

//A copy constructor to initialize a new Vector3D object as a copy of an existing Vector3D object.

//A method display that outputs the x, y, and z coordinates of the vector.

//Demonstrate the use of the copy constructor in the main function by creating a Vector3D object and then creating another Vector3D object as a copy of the first one.
#include <iostream>
using namespace std;
class Vector3D{
    private:
    double x;
    double y;
    double z;
    public:
    Vector3D(double xcoord,double ycoord,double zcoord):x(xcoord),y(ycoord),z(zcoord){}
    Vector3D(const Vector3D &r):x(r.x),y(r.y),z(r.z){}
    void display() const{
        cout<<"x "<<x<<endl;
        cout<<"y "<<y<<endl;
        cout<<"z "<<z<<endl;
    }

};
int main(){
    Vector3D original(2.5,5.7,7.2);
    Vector3D copy=original;
    cout<<"Original Vector:"<<endl;
    original.display();
    cout<<"Copied Vector:"<<endl;
    copy.display();
    }
