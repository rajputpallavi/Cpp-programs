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

    // Copy constructor
    Student(const Student& s) : name(s.name), age(s.age), grade(s.grade) {}

    // Assignment operator
    Student& operator=(const Student& s) {
        if (this != &s) {
            name = s.name;
            age = s.age;
            grade = s.grade;
        }
        return *this;
    }

    void display()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }

    // Modify the original data
    void modify(string n, int a, float g) {
        name = n;
        age = a;
        grade = g;
    }
};

int main() {

    Student original("Prabhakar Kumar", 28, 94.5);

    Student copy = original;

    cout << "Original Student:" << endl;
    original.display();

    cout << endl << "Copied Student:" << endl;
    copy.display();

    // Modify the original data
    original.modify("John Doe", 30, 95.0);

    cout << endl << "Modified Original Student:" << endl;
    original.display();

    cout << endl << "Copied Student (remains unchanged):" << endl;
    copy.display();

    return 0;
}

