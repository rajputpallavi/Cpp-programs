#include <iostream>

using namespace std;

void start() {
    cout << "Starting..." << endl;
}

void stop() {
    cout << "Stopping..." << endl;
}

void pause() {
    cout << "Pausing..." << endl;
}



int main() {
    void (*commandPointer)();
    int choice;

    cout << "Enter command (1 for start, 2 for stop, 3 for pause): ";
    cin >> choice;

    switch (choice) {
        case 1:
            commandPointer = start;
            commandPointer();
            break;
        case 2:
            commandPointer = stop;
            commandPointer();
            break;
        case 3:
            commandPointer = pause;
            commandPointer();
            break;
        default:
            cout << "Invalid choice!" << endl;
            commandPointer();
            return 1;
    }

  

    return 0;
}