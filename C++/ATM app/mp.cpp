#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

map<string, vector<string>> myMap;
void getMapData(map<string, vector<string>> &argMap);

int main() {
    getMapData(myMap);

    for (auto itr = myMap.begin(); itr != myMap.end(); itr++) {
        cout << (*itr).first << " ";
        for (vector<string>::size_type i = 0; i < (*itr).second.size(); i++) {
            cout << (*itr).second[i] << " ";
        }
        cout << "\n";
    }

    return 0;
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