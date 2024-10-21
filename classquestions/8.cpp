#include <iostream>
using namespace std;
class demo{
    int x;
    int y;
    static int z;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
        z=z+1;
    }
    void putdata(){
        cout<<"\nx="<<x;
        cout<<"\ny="<<y;

    }
    static void abc(){
        cout<<"\nz= "<<z;
    }
};
int demo::z=0;
int main(){
    demo aa,bb;
    aa.getdata(10,20);
    aa.putdata();
    bb.putdata();
    demo::abc(); //static function is called with the help of using --> class_name::func_name()
    
}