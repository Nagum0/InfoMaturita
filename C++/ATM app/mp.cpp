#include <iostream>
#include <map>
#include <fstream>
using namespace std;

map<string, string> map2;
string firstName = "Ferris";
bool check;

void editMap(map<string, string>& argMap);

int main() {
    editMap(map2);
    
    //Check if account exists or not
    for (auto itr = map2.begin(); itr != map2.end(); itr++) {
        if ((*itr).first == firstName) {
            if ((*itr).second == "0") { check = true; }
            else if ((*itr).second == "1") { check = false; }
            else { return 1; }
        }
        //else { cout << "Something went wrong...\n"; return 1; }
    }

    printf("%s %s \n", firstName.c_str(), check?"true" : "false");

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