#include <iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    void getdata(){
        cout<<"enter two numbers";
        cin>>a>>b;}
    void putdata(){
        cout<<"additon of two number"<<a+b<<endl;
    }
};
int main(){
    add aa; //object is created of class add
    aa.getdata();
    aa.putdata();
    return 0;

}