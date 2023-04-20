#include <iostream>
#include <map>
#include <fstream>
#include <typeinfo>
using namespace std;

map<string, string> map2;

void editMap(map<string, string>& argMap);

int main() {
    editMap(map2);

    return 0;
}

void editMap(map<string, string>& argMap) {
    string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt";
    string key, value;
    ifstream inputFile(fileName);

    while (inputFile >> key >> value) {
        argMap[key] = value;
    }

    inputFile.close();
}