

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> tasks;

public:
    
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Added: " << task << "\n";
    }


    void removeLastTask() {
        if (!tasks.empty()) {
            cout << "Removed: " << tasks.back() << "\n";
            tasks.pop_back();
        } else {
            cout << "No tasks to remove.\n";
        }
    }

    void displayTasks() {
        cout << "To-Do List:\n";
        for (const auto& task : tasks) {
            cout << "- " << task << "\n";
        }
    }
};

int main() {
    ToDoList myList;

    myList.addTask("Finish homework");
    myList.addTask("Go grocery shopping");
    myList.addTask("Clean the house");

    myList.displayTasks();

    myList.removeLastTask();
    myList.displayTasks();

    return 0;
}