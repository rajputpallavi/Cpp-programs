/*Lamborghini's Diablo model is a symbol of luxury and exclusivity, characterized by attributes including color, cubic capacity, number of seats, year of manufacture, engine number, frame number, and owner name. The color, cubic capacity, and number of seats remain the same for all Diablo vehicles.

For a class implementation handling Lamborghini Diablo data, perform the following:

Create a class for Lamborghini Diablo that includes a dynamic array for the owner's name.
Instantiate an object named initialDiablo and assign values to all its attributes.
Design a copy constructor that copies only the common attributes (color, cubic capacity, number of seats) from initialDiablo to a new object.
Generate another object called secondaryDiablo by using the copy constructor from initialDiablo, ensuring that only the common attributes are copied. Assign your own values to the remaining attributes of secondaryDiablo.*/
#include <iostream>
using namespace std;
class lambor{
    private:
    string color;
    int cubiccap;
    int noofseats;
    int yearofmanufacture;
    int engineno;
    int frameno;
    string ownername;
    public:
    lambor(string a,int b,int c,int d,int e,int f,string g){
        color=a;
        cubiccap=b;
        noofseats=c;
        yearofmanufacture=d;
        engineno=e;
        frameno=f;
        ownername=g;
    }
    lambor(const lambor &other){
        color=other.color;
        cubiccap=other.cubiccap;
        noofseats=other.noofseats;
    }
    void display(){
        cout<<"color = "<<color<<endl;
        cout<<"cubic capacity = "<<cubiccap<<endl;
        cout<<"no of seats = "<<noofseats<<endl;
        cout<<"year of manufacture = "<<yearofmanufacture<<endl;
        cout<<"engine no = "<<engineno<<endl;
        cout<<"frame no = "<<frameno<<endl;
        cout<<"owner name = "<<ownername<<endl;
    }
    void setremainingatrr(int year,int engine,int frame,string owner ){
        yearofmanufacture=year;
        engineno=engine;
        frameno=frame;
        ownername=owner;
    }

};
int main(){
    lambor l1("red",70,6,2020,2222,11,"Pallavi");
    lambor l2=l1;
    l2.setremainingatrr(2024,4444,66,"Pallavi Thakur");
    cout<<"Details of L1"<<endl;
    l1.display();
    cout<<"Details of L2"<<endl;
    l2.display();

}