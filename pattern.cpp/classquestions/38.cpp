//how does the overloaded equal operator work in the point class and how is it use use to compare two point object in the provided code.
#include <iostream>
using namespace std;
class comparison{
private:
int x,y,z;
public:
comparison(int x1=0,int y1=0,int z1=0):x(x1),y(y1),z(z1){}

bool operator ==(const comparison &other) const{
    return x==other.x,y==other.y,z==other.z;
}
void display()const{
    if(x==y && y==z){
        cout<<"equal"<<endl;
    }
   
    else {
        cout<<"not equal"<<endl;
        }

}
};
int main(){
    comparison p1(2,2,3);
    p1.display();
}