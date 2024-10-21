#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x, int y)//local var
    {
    a=x;
    b=y;
    }
    demo(demo &ref){
        a=ref.a;
        b=ref.b;
        cout<<"hi"<<endl;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    demo obj1(25,26);
    demo obj2=obj1;
    obj1.show();
    obj2.show();
}