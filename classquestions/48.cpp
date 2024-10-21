/* design a class structure for a computer. create a base class computer with properties for brand, processor and RAM size. drive two subclasses- laptop which include a property for battery life  and desktop which includes a property for multimedia support .Its sub class should have a method to show unique specification( it means ki hr barr ko call krenge alg alg result ayega) */
#include <iostream>
using namespace std;
class comp{
    public:
    string brand;
    int processor;
    int ramsize;
    comp(string b,int p,int r):brand(b),processor(p),ramsize(r){}
    void display(){
        cout<<"brand :"<<brand<<" "<<"processor :"<<processor<<" "<<"ram size :"<<ramsize<<endl;
    }
};
class lap:public comp{
    public:
    int battery;
    lap(string b,int p,int r,int batt):comp(b,p,r),battery(batt){}
    void batte(){
        cout<<"battery : "<<battery<<endl;
    }


};
class desk:public comp{
    public:
    int multi;
    desk(string b,int p,int r,int mul):comp(b,p,r),multi(mul){}
    void mul(){
        cout<<"Mutlimedia support : "<<multi<<endl;
    }


};
int main(){
    lap lap1("hp",200,40,700);
    lap1.display();
    lap1.batte();
    desk desk1("windows",2,40,70);
    desk1.display();
    desk1.mul();

}