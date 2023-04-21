#include <iostream>
#include <map>
#include <fstream>
using namespace std;

/* Info structure */
struct Info {
    string firstName;
    string lastName;
    int age;
    int balance;
    string pin;
    bool newAccount; //0 = true, 1 = false
};

/* Variables */
Info user;
map<string, string> dataMap;

/* Function declarations */
void personSetup(Info &user);
void personInfo(Info &person);
void listOfCmds();
void readFile(map<string, string>& argMap);

/* Main function */
int main() {
    cout << "------------Zeki's Bank ATM------------" << "\n";
    //Reading data file
    readFile(dataMap);

    for (auto itr = dataMap.begin(); itr != dataMap.end(); itr++) {
        cout << (*itr).first << " : " << (*itr).second << "\n";
    }

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

//Read text file
void readFile(map<string, string>& argMap) {
    string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt";
    string key, value;
    ifstream file(fileName);

    if (!file) {
        cerr << "Failed to open file " << fileName << "\n";
    }

    while (file >> key >> value) {
        argMap.insert(pair<string, string>(key, value));
    }

    file.close();
}