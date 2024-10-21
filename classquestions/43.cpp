//pointer is a variable that holds the memory address of another variable 
// #include <iostream>
// using namespace std;
//  int main(){
//     int a=123;
//     int *p=&a; //pointer
//     int **q=&p; //pointer to pointer
//     cout<<"a = "<<a<<endl; // value of a i.e a=123
//     cout<<"p = "<<p<<endl; //address of a
//      cout<<"*p = "<<*p<<endl; //value at p i.e. a=123
//     cout<<"&a = "<<&a<<endl; //address of a
//     cout<<"q = "<<q<<endl; //address of p i.e. &p
//     cout<<"&p = "<<&p<<endl; //address of p
//     cout<<"&q = "<<&q<<endl; //address of q
//     cout<<"*q = "<<*q<<endl; //value of p=&a(address of a)
//     cout<<"**q = "<<**q<<endl;//value of a=123
//  }


//pointer arithematic
 #include <iostream>
using namespace std;
int main(){
    int arr[]={100,10,20,30,40,50,60,70,80,90};
    cout<<"arr = "<<arr<<endl;
    cout<<"*arr = "<<  *arr<<endl;
 
    int *ptr;
    ptr=arr;
    cout<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<"value = "<<*ptr<<endl;
    ptr+=2; //moves the pointer two positions ahead
    cout<<ptr<<endl;
    cout<<"value = "<<*ptr<<endl;
}