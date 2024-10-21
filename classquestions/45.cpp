#include <iostream>
using namespace std;
int choice;
void start() {
    cout << "Starting..." << endl;
}

void stop() {
    cout << "Stopping..." << endl;
}

void pause() {
    cout << "Pausing..." << endl;
}
void showhelp(){
    
             cout<<"1 = Starting"<<endl;
             cout<<"2 = Stopping"<<endl;
             cout<<"3 = Pausing"<<endl;
             cout<<"4 = Help"<<endl;
             cout<<"5 = Show Command History"<<endl;
             cout<<"0 = exit"<<endl;

             }





int main() {
    void (*commandPointer)();
    int choice;
    int count=0;
    int n;

    cout << "Enter 4 for help: command (1 for start, 2 for stop, 3 for pause): "<<endl;
    cin>>n;
   
    while(n!=0){
       cin>>choice;
       
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
           
    }
    count=count+1;
    }
    cout<<count<<endl;
    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// void start() {
//     cout << "Starting..." << endl;
// }

// void stop() {
//     cout << "Stopping..." << endl;
// }

// void pause() {
//     cout << "Pausing..." << endl;
// }

// void showHelp() {
//     cout << "Available commands:" << endl;
//     cout << "1 - Start" << endl;
//     cout << "2 - Stop" << endl;
//     cout << "3 - Pause" << endl;
//     cout << "4 - Show Help" << endl;
//     cout << "5 - Show Command History" << endl;
//     cout << "0 - Exit" << endl;
// }

// void executeCommand(void (*command)(), vector<string>& history) {
//     command();
//     history.push_back("Command executed");
// }

// int main() {
//     void (*commandPointer)();
//     vector<string> commandHistory;
//     int choice;

//     cout << "Command line interface. Type 4 for help." << endl;

//     while (true) {
//         cout << "Enter command (1 for start, 2 for stop, 3 for pause, 4 for help, 5 for history, 0 to exit): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 commandPointer = start;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 2:
//                 commandPointer = stop;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 3:
//                 commandPointer = pause;
//                 executeCommand(commandPointer, commandHistory);
//                 break;
//             case 4:
//                 showHelp();
//                 break;
//             case 5:
//                 cout << "Command History:" << endl;
//                 for (const auto& entry : commandHistory) {
//                     cout << entry << endl;
//                 }
//                 break;
//             case 0:
//                 cout << "Exiting program." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice! Please enter a valid command." << endl;
//                 break;
//         }
//     }

//     return 0;
// }