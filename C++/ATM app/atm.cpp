#include <iostream>
using namespace std;

/* Info structure */
struct Info {
    string firstName;
    string lastName;
    int age;
    int balance;
    string pin;
    bool newAccount = true; //0 = true, 1 = false
};

/* Variables */
Info user;

/* Function declarations */
void personSetup(Info &user);
void personInfo(Info &person);
void listOfCmds();

/* Main function */
int main() {
    cout << "------------Zeki's Bank ATM------------" << "\n";

    //Command variable
    string cmd;
    
    //Mainloop
    do {
        cout << "> ";
        getline(cin >> ws, cmd);

        if (cmd == "setup" || cmd == "Setup") { personSetup(user); continue; }
        else if (cmd == "info" || cmd == "Info") { personInfo(user); continue; }
        else if (cmd == "cmds" || cmd == "command_list") { listOfCmds(); continue; }
        else if (cmd == "!!" || cmd == "exit") { break; }
        else { cout << "Unkown command. \nFor command list type 'cmds' or 'command_list'.\n"; continue; }

    } while (cmd != "!!");

    cout << "---------------------------------------" << "\n";
    return 0;
}

//Person setup func
void personSetup(Info &user) {
    cout << "First name: ";
    cin >> user.firstName;
    cout << "Last name: ";
    cin >> user.lastName;
    cout << "Age: ";
    cin >> user.age;
}

//Print person info func
void personInfo(Info &person) {
     printf("%s %s %i \n", person.firstName.c_str(), person.lastName.c_str(), person.age);
}

//Command list
void listOfCmds() {
    cout << "Command list: \n";
}