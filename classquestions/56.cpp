//   Question
// Design the Class Structure:

// Create an abstract class Staff that contains a pure virtual function performDuties().
// Derive classes Teacher, Principal, and Counselor from Staff. Implement the performDuties() method in each derived class to reflect their unique responsibilities.
// Incorporate Virtual Destructors:

// Ensure that the Staff class has a virtual destructor. Explain why having a virtual destructor in this scenario is essential.
// Demonstrate Polymorphism:

// Write a function assignDuties(Staff* staffMember) that accepts a pointer to Staff and calls the performDuties() method. In the main function, create an array of Staff* that includes instances of Teacher, Principal, and Counselor. Use polymorphism to call performDuties() for each staff member in the array
#include <iostream>
using namespace std;
class Staff{
    public:
    virtual void performduties()=0;
    virtual ~Staff(){}
};
class Teacher:public Staff{
    void performduties() override{
        cout<<"teaching classes and grading assignments"<<endl;
    }
~Teacher(){
        cout<<"teacher destructor called"<<endl;
    }
};
class Principal:public Staff{
    void performduties() override{
    cout<<"Overseeing all school operations and managing the staff"<<endl;}
 ~Principal(){
        cout<<"Principal destructor called"<<endl;
    }
};

class Counselor:public Staff{
    void performduties() override{
    cout<<"providing guidance"<<endl;}
 ~Counselor(){
        cout<<"Counselor destructor called"<<endl;
    }
};
void assignduties(Staff* staffMember){
    staffMember->performduties(); //this symbol (->) is used for overriding
}
int main(){
    Staff* staffMembers[3];
    staffMembers[0] = new Teacher();
    staffMembers[1] = new Principal();
    staffMembers[2] = new Counselor();
    for (int i = 0; i < 3; i++) {
        assignduties(staffMembers[i]);
    }
    for(int i=0;i<3;i++){
        delete staffMembers[i];
    }
    return 0;
    }

