// Create a program that allows users to manage a task list. The program should support the following commands:

// Add Task - Add a new task to the list.
// Remove Task - Remove a task from the list.
// Show Tasks - Display all current tasks.
// Show Help - Display available commands.
// Clear Tasks - Clear all tasks from the list.
// Exit - Exit the program.
// Use function pointers to execute the commands and maintain a history of actions taken.
#include <iostream>
using namespace std;
void addtask(){
    cout<<"task added"<<endl;
}
void removetask(){
    cout<<"task removed"<<endl;
}
void shoowtask(){
    cout<<"task showed"<<endl;
}
void showhelp(){
    cout<<"1 = Add task"<<endl;
     cout<<"2 = Remove task"<<endl;
      cout<<"3 = Show task"<<endl;
       cout<<"4 = Help "<<endl;
        cout<<"5 = clear task"<<endl;
         cout<<"0 = exit"<<endl;
}
int main(){
    cout<<"enter a number "<<endl;
    int n;
    while (true){
    cin>>n;
    }

}

//Dangling pointer refer to a pointer that point to a memory location that has been deallocated
//wild pointer is a pointer that has not been initialized through a valid memory address
//memory leak: this can happen if you forget to use delete or if your program ended.
//null pointer: a pointer that does not point to any valid memory address
