#include <iostream>
using namespace std;
class base{
    int a,b;
    public:
    void get(){
        cout<<"enter two values: ";
        cin>>a>>b;
    }

    float mean(base ob){
        return float(ob.a+ob.b);
    }
};

int main(){
    base obj;
    obj.get();
    cout<<"Mean is"<<obj.mean()<<endl;

}
/*you have 2 class -person and address, the person class has private attribute for-name and age
and the address class has private attribute for -street and city
write a friend function that print both person and address*/


