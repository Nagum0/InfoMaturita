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
};

/* Variables */
Info user;
map<string, string> dataMap;

/* Function declarations */
void personSetup(Info &user);
void personInfo(Info &person);
void listOfCmds();
void readFile(map<string, string>& argMap);
bool findUser(map<string, string>& argMap, string element);
void newAccountSetup(Info &user);
void devShowAccount(map<string, string> &argMap);

/* Main function */
int main() {
    cout << "------------Zeki's Bank ATM------------" << "\n";
    //Reading data file
    readFile(dataMap);
    //Person setup/login
    personSetup(user);

    //Command variable
    string cmd;

    //Mainloop
    do {
        cout << "$ ";
        getline(cin >> ws, cmd);

        if (cmd == "setup" || cmd == "Setup") { personSetup(user); continue; }
        else if (cmd == "info" || cmd == "Info") { personInfo(user); continue; }
        else if (cmd == "cmds" || cmd == "command_list") { listOfCmds(); continue; }
        else if (cmd == "find_user") { findUser(dataMap, user.firstName); continue; }
        else if (cmd == "dev_show_user_data") { devShowAccount(dataMap); continue; }
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

    //Check if user exists inside the database
    if (findUser(dataMap, user.firstName)) { cout << "Found. Continue.\n"; }
    else if (findUser(dataMap, user.firstName) == false) { cout << "Not found. Type `new_acc` to setup your account.\n"; }
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

//Find user function
bool findUser(map<string, string>& argMap, string element) {
    auto it = argMap.find(element);

    if (it != argMap.end()) { return true; }
    else { return false;}   
}

//New account setup
void newAccountSetup(Info &user) {
    cout << "First name: ";
    cin >> user.firstName;
    cout << "Last name: ";
    cin >> user.lastName;
    cout << "Age";
    cin >> user.age;
}

//Dev show user accounts

void devShowAccount(map<string, string> &argMap) {
    for (auto itr = argMap.begin(); itr != argMap.end(); itr++) {
        cout << (*itr).first << " : " << (*itr).second << "\n";
    }
}