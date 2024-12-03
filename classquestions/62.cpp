/*
Concept of streams input-output for operator overloading : 
-----------------------------------------------------------
stream: it is the way to handle the data flow for input or output.
input stream(istream): it is used for getting data from user (just like cin).
output sream(ostream): it is used for display or sending the data to file (like cout).
ifstream:it is used to provide input operation on file.
ofstream:it is used to provide output operation on file.
fstream:support for simulateneously input output operations on file.
eofile:end of file...it is used to check to see if there is no more data to read from a string

friend function: it is a special function that can access the private data of the class and it is very useful for operator overloading.
member function: it is a function that belongs to a class and can work with its data.
keyword :
--------
ignore():it is used to skip over unwanted character in the input buffer just like newline.
getline(): it is a function that read an entire line of text from an input stream useful for getting user input with space.

*/

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    
    Book() : title(""), author(""), price(0.0) {}


    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "Title: " << book.title 
           << ", Author: " << book.author 
           << ", Price: Rs" << book.price;
        return os;
    }

    
    friend istream& operator>>(istream& is, Book& book) {
        cout << "Enter title: ";
        is.ignore(); 
        getline(is, book.title);
        cout << "Enter author: ";
        getline(is, book.author);
        cout << "Enter price: ";
        is >> book.price;
        return is;
    }
};

int main() {
    Book book;

  
    cin >> book;

    
    cout << book << endl;

    return 0;
}