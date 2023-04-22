#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Person {
    string name;
    string pin;
    string balance;
};

Person user;
string firstName = "Zeki";
map<string, vector<string>> myMap;

void getMapData(map<string, vector<string>> &argMap);
void fillStruct(map<string, vector<string>> &argMap, string &search, Person &user);

int main() {
    getMapData(myMap);
    fillStruct(myMap, firstName, user);

    cout << "Extracted user data: \n" << user.name << ", " <<  user.pin << ", " << user.balance << "\n";

    return 0;
}

void fillStruct(map<string, vector<string>> &argMap, string &search, Person &user) {
    auto it = argMap.find(search);

    if (it != argMap.end()) {
        user.name = it->first;
        vector<string> tempVec = it->second;
        user.pin = tempVec[0];
        user.balance = tempVec[1];
    }
    else { cout << "User not found\n"; }
}

void getMapData(map<string, vector<string>> &argMap) {
    string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt"; 
    ifstream file(fileName);

    if (file.is_open()) {
        string line;

        while (getline(file, line)) {
            istringstream iss(line);
            string key;
            iss >> key;
            string value;
            while (iss >> value) {
                argMap[key].push_back(value);
            }
        }
    }

    file.close();
}