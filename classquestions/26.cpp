#include <iostream>
using namespace std;
class rectangle{
    double length;
    double width; 
    public:
    rectangle(double l, double w): length(l),width(w){}
    rectangle(const rectangle &r): length(r.length),width(r.width){}
    double area() const{
        return length*width;
    }
    void display() const{
        cout<<"length "<<length<<endl;
        cout<<"width "<<width<<endl;
        cout<<"Area "<<area()<<endl;
    }
};
int main(){
    rectangle original(5.0,3.0);
    rectangle copy=original;
    cout<<"original:"<<endl;
    original.display();
    cout<<"Copied rectangle:"<<endl;
    copy.display();
}

