#include <iostream>
using namespace std;
//Design a C++ class named Student that represents a student with the following attributes:

//Private data members:

//string name (the name of the student)
//int age (the age of the student)
//float grade (the grade of the student)

//A parameterized constructor to initialize a student with specific name, age, and grade.

//A copy constructor to initialize a new Student object as a copy of an existing Student object.

//A method display that outputs the name, age, and grade of the student.

//Demonstrate the use of the copy constructor in the main function by creating a Student object and then creating another Student object as a copy of the first one



#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float grade;

public:
    Student(string n, int a, float g) : name(n), age(a), grade(g) {}
Student(Student &s) : name(s.name), age(s.age), grade(s.grade) {}

    
    void display()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {

    Student original("Prabhakar Kumar", 28, 94.5);

    Student copy = original;

    cout << "Original Student:" << endl;
    original.display();

    cout << endl << "Copied Student:" << endl;
    copy.display();

    return 0;
}


