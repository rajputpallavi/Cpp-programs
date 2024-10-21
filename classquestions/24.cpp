//Imagine you are developing a system to manage a collection of Movie objects for a film library 
//each movie object needs to store info about its title,
//director and release year
#include <iostream>
using namespace std;
class movie{
    string title;
    string director;
    int year;
    public:
    movie(string t, string d, int y):title(t),director(d),year(y){
        cout<<"The movie is "<<t<<" directed by "<<d<<", released in "<<y<<endl;
    }
    ~movie(){
        cout<<"Movie removed: "<<title<<endl;
    }
};
int main(){
    movie m1("Houseful 4","Karan Johar",2018);
    movie m2("Shershaah","Vishwagupta",2016);
    return 0;

}

