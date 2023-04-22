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

Person zeki;
string firstName = "Zeki";
map<string, vector<string>> myMap;
void getMapData(map<string, vector<string>> &argMap);
bool findUser(map<string, vector<string>> &argMap, string search);

int main() {
    getMapData(myMap);

    if (findUser(myMap, firstName)) {
        for (auto itr = myMap.begin(); itr != myMap.end(); itr++) {
            cout << (*itr).first << " ";

            for (vector<string>::size_type i = 0; i < (*itr).second.size(); i++) {
                cout << (*itr).second[i] << " ";
            }

            cout << "\n";
        }
    }
    else { cout << "User not found" << "\n"; }

    return 0;
}


bool findUser(map<string, vector<string>> &argMap, string search) {
    auto it = argMap.find(search);
    if (it != argMap.end()) { return true; }
    else { return false; }
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