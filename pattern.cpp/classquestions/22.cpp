#include <iostream>
using namespace std;
 class demo{
    int n;
    public:
    demo(){
        n=100;
        cout<<n<<endl;
    }
    ~demo(){
        cout<<"destroyed object"<<endl;
        cout<<n<<endl;
    }
 };
 int main(){
    demo obj1,obj2,obj3;
    return 0;
 }