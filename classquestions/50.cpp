//Ambiguity
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "Person" << endl;
    }
};

class Teacher : public Person {
public:
    void display() {
        cout << "Teacher" << endl;
    }
};

class Staff : public Person {
public:
    void display() {
        cout << "Staff" << endl;
    }
};

class Principal : public Teacher, public Staff {
public:
    void show() {
        cout << "Hello " << endl;
        Teacher::display();  
        Staff::display();    
    }
};

class Student : public Principal {
public:
    void introduce() {
        cout << "I am a Student." << endl;
    }
};

int main() {
    Principal principal;
    principal.show();
   

    Student student;
    student.introduce();
    return 0;
}