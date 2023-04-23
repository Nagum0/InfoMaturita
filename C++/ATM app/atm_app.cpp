#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

/* User struct */
struct User {   
    std::string name;
    std::string pin;
    int balance;
};

/* Variables */
std::map<std::string, std::vector<std::string>> dataMap;

/* Functions declarations */
void getUserData(std::map<std::string, std::vector<std::string>> &argMap);

/* Main function */
int main() {
    //Read file and get user data
    getUserData(dataMap);

    //Command variable
    std::string cmd;

    std::cout << "--------------ATM--------------" << "\n";

    do {
        std::cout << "$ ";
        std::getline(std::cin >> std::ws, cmd);

        if (cmd == "!!" || cmd == "exit") { break; }
        else { std::cout << "Command not recognized" << "\n"; continue; }

    } while (cmd != "!!");

    
    std::cout << "-------------------------------" << "\n";

    return 0;
}

/* Functions */
void getUserData(std::map<std::string, std::vector<std::string>> &argMap) {
    std::string fileName = "C:\\Users\\csabe\\OneDrive\\Documents\\01 MATURITA\\Info\\Tetelek\\C++\\ATM app\\userData.txt";
    std::ifstream file(fileName);

    if (file.is_open()) {
        std::string line;

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string key;
            iss >> key;
            std::string value;

            while (iss >> value) {
                argMap[key].push_back(value);
            }
        }
    }

    file.close();
}