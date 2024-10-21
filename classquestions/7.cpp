#include <iostream>
using namespace std;
class avg{
    private:
    int a,b,c;
    public:
    void getdata(){
        cout<<"enter 3 numbers ";
        cin>>a>>b>>c;}
void putdata(){
    cout<<"The avg is "<<(a+b+c)/3;
}
} ;
int main(){
    avg a;
    a.getdata();
    a.putdata();
    return 0;
}