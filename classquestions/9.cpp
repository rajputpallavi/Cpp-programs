#include <iostream>
using namespace std;
class demo{
    int x;
    static int y;//declaration of static member variable
    int z;//non static 

public:
void getdata(int a,int b){
    cin>>a>>b;
    x=a;
    y=y+1;
    z=b;
}
void putdata(){

}
};