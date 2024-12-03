/*
Standard Template Library (STL) : various data type (generic)

it does not require to mention the datatype of input..it automatically adjusts according to the input value and gives the result automatically.
container: vector, list, mapping (structure that hold data)
algorithm : sorting, searching (function to manipulate data in container)
iterators: accessing element sequentially--->forward reverse


vector: vector is a dynamic array that can be resize itself automatically when elements are added or removed.
Features:
1. random access
2. dynamic size
3. memory management
4. vector can store any type of data including user defined type.
pop_add():used to add the element.
pop_back(),pop_erase(): it is used to remove the element.
operator[],at():accessing any element.

*/
/*
Library Management System

You are tasked with creating a simple Library Management System using C++. The system allows users to manage a collection of books. Implement a Library class with the following functionalities:

Add a Book: Add a book to the collection.
Remove the Last Book: Remove the last book added to the collection.
Remove a Specific Book: Remove a specific book by title.
Display All Books: Display the list of all books in the collection.
The program should continuously prompt the user for commands until they choose to exit. Use the Standard Template Library (STL) vector to store the book
*/
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;
class library{
    private:
    vector<string> books;
    public:
    void addbook(const string& book) {
        books.push_back(book);
        cout << "Added: " << book << "\n";
    }


    void removebook() {
        if (!books.empty()) {
            cout << "Removed: " << books.back() << "\n";
            books.pop_back();
        } else {
            cout << "No tasks to remove.\n";
        }
    }

    void removespecific(){
        string title;
        cin>>title;
        auto sankalp = find(books.begin() , books.end(),title);
        if(sankalp!=books.end()){
            books.erase(sankalp);
            cout<<"Book rempoved : "<<title<<endl;
        }
        else{
            cout<<"No books to be rempved "<<endl;
        }
    }
    void displaybooks() {
        cout << "To-Do List:\n";
        for (const auto& book : books) {
            cout << "- " << book << "\n";
        }
    }
};
int main(){
    library mylibrary;
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string titles;
        cin>>titles;
        mylibrary.addbook(titles);
    }
    mylibrary.displaybooks();

    mylibrary.removebook();
    mylibrary.removespecific();
    mylibrary.displaybooks();
}
