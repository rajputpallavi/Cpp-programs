#include <iostream>
using namespace std;
class demo1{
    int a=1,b=2;
    public:
    void show(){
        cout<<a<<" "<<b;
    }
    friend class demo2;
};
class demo2{
    public:
    void add(demo1 x){
        int add=x.a+x.b;
        cout<<"sum"<<add;
    }
};
int min(){
    demo1 ob1;demo2 ob2;
    ob1.show();
    ob2.add(ob1);
}
//design two classes :rectangle and rectangularinspector
// The rectangle class should manage3 a rectangle's width and height, both of which are private attributes. 
// The rectangularInspector class should be a friend of rectangle and provide functionalty to compare areas of two rectangles.