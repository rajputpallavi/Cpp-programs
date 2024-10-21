/*Write a C++ program that demonstrates the following forms of inheritance using a school management system. Define classes for the following entities:

Person: A base class with a method to display the name of the person.
Student: Inherits from Person and adds a method to display the grade of the student.
Teacher: Inherits from Person and adds a method to display the subject taught.
Principal: Inherits from Teacher and includes a method to manage the school.
Extracurricular: A class with a method to organize events.
VicePrincipal: Inherits from both Principal and Extracurricular, including a method to assist in managing the school.
In the main() function, create instances of these classes and demonstrate their methods.

Guidelines
Ensure you showcase single, multilevel, multiple, hierarchical, and hybrid inheritance.
Use appropriate access specifiers (public, private).
Display relevant messages for each method to illustrate their functionality.*/
#include <iostream>
using namespace std;

// 1
class Teacher {
public:
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class MathTeacher : public Teacher {
public:
    void teachMath() {
        cout << "Teaching Mathematics" << endl;
    }
};

// 2
class Principal {
public:
    void manage() {
        cout << "Managing the school" << endl;
    }
};

class TeacherWithPrincipal : public Principal {
public:
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class MathTeacherWithPrincipal : public TeacherWithPrincipal {
public:
    void teachMath() {
        cout << "Teaching Mathematics" << endl;
    }
};

// 3
class Extracurricular {
public:
    void organizeEvent() {
        cout << "Organizing an event" << endl;
    }
};

class PrincipalWithExtracurricular : public Extracurricular, public Teacher {
public:
    void manage() {
        cout << "Managing the school" << endl;
    }
};

// 4
class Staff {
public:
    void work() {
        cout << "Working in school" << endl;
    }
};

class TeacherWithStaff : public Staff {
public:
    void teach() {
        cout << "Teaching students" << endl;
    };
};

class PrincipalWithStaff : public Staff {
public:
    void manage() {
        cout << "Managing the school" << endl;
    }
};

// 5
class PrincipalHybrid : public TeacherWithStaff, public Extracurricular {
public:
    void manage() {
        cout << "Managing the school" << endl;
    }
};

int main() {
    // 1
    MathTeacher mt;
    mt.teach();
    mt.teachMath();

    // 2
    MathTeacherWithPrincipal mtwp;
    mtwp.teach();
    mtwp.manage();
    mtwp.teachMath();

    // 3
    PrincipalWithExtracurricular pwe;
    pwe.manage();
    pwe.organizeEvent();

    // 4
    TeacherWithStaff t;
    t.teach();
    PrincipalWithStaff p;
    p.manage();

    // 5
    PrincipalHybrid ph;
    ph.teach();
    ph.manage();
    ph.organizeEvent();

    return 0;
}