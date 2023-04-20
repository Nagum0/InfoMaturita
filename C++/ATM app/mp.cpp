#include <iostream>
#include <map>
#include <fstream>
using namespace std;

map<string, string> map2;

void editMap(map<string, string>& argMap);

int main() {
    editMap(map2);
    
    for (auto itr = map2.begin(); itr != map2.end(); itr++) {
        cout << (*itr).first << "\n";
    }

    return 0;
}

void editMap(map<string, string>& argMap) {
    string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt";
    string key, value;
    ifstream inputFile(fileName);

    if (!inputFile) {
        cerr << "Failed to open file " << fileName << endl;
        return;
    }

    while (inputFile >> key >> value) {
        argMap.insert(pair<string, string>(key, value));
    }

    inputFile.close();
}