#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping a="<<a<<"b="<<b;

}
//public, private,protected, constant member fun, static member func, friend function, friend class
//static and contant object