#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <typeinfo>
using namespace std;

map<string, string> mp {
    {"Zeki", "noooooooo"},
    {"Astolfo", "1"},
    {"Ferris", "0"}
};

map<string, string> map2;

void editMap(map<string, string> argMap);

int main() {
    editMap(mp);
    
    return 0;
}

void editMap(map<string, string> argMap) {
    string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt";
    string line;
    vector<string> text;
    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cout << "File: " << fileName << " didn't open.";
    }

    while (getline(inputFile, line)) {
        text.push_back(line);
    }

    inputFile.close();

    cout << typeid(text[0]).name() << "\n";
}