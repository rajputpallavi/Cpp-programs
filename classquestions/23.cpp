#include <iostream>
using namespace std;
class Book{
    string title;
    string author;
    int publicationYear;
    public:
    Book(string t, string a, int year):title(t),author(a),publicationYear(year){
        cout<<"Book added: "<<t<<"by"<<a<<", published in "<<year<<endl;
    }
    ~Book(){
        cout<<"Book Removed: "<<title<<endl;
    }
};
int main(){
    Book book1("Maths","RD Sharma",1949);
    Book book2("Physics","HC Verma",1960);
    return 0;
}
