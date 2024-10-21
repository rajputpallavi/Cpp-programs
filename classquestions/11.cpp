/*you have 2 class -person and address, the person class has private attribute for-name and age
and the address class has private attribute for -street and city
write a friend function that print both person and address*/
#include <iostream>
using namespace std;
class address;
class person;
void printdetails(person p,address a);
class person{
    string name;
    int age;
    public:
    person(string n,int a ):name(n),age(a){}
    friend void printdetails(person p,address a);
    };
class address{
    string street;
    string city;
    public:
    address(string s,string c):street(s),city(c){}
    friend void printdetails(person p,address a);
    
};
void printdetails(person p,address a){
    cout<<p.name<<endl;;
    cout<<p.age<<endl;
    cout<<a.street<<endl;
    cout<<a.city<<endl;
}
int main(){
    person person("pallavi",18);
    address address ("street","parna");
    printdetails(person,address);
    return 0;

}
/*you are given a class box with attribute length and height , width write a friend function to compare volume that takes box objects and 
determine which of box has greater volume than other three*/
