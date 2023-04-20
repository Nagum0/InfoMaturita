#include <iostream>

/* Variables */
std::string birthNum;
int month;

/* Function declarations */
bool checkValid(const std::string birthNum);
std::string getDate(const std::string birthNum, std::string type);
std::string checkGender(std::string month);

/* Main function */
int main() {
    std::cout << "Enter your birth number: ";
    std::getline(std::cin >> std::ws, birthNum);

    if (checkValid(birthNum)) {
        std::cout << "Birth date: " <<  getDate(birthNum, "") << "\nGender: " << checkGender(getDate(birthNum, "month")) << "\n";
    }
    else {
        std::cout << "The number is invalid!" << "\n";
    }

    return 0;
}

/* Functions */
bool checkValid(const std::string birthNum) {
    if (std::stoi(birthNum) % 11 == 0 && birthNum.length() == 10) {
        return true;
    }

    return false;
}

std::string getDate(const std::string birthNum, std::string type) {
    std::string day;
    std::string month;
    std::string year;
    std::string fullDate;

    for (int i = 0; i < birthNum.length() - 4; i++) {
        if (i == 0 || i == 1) {
            day += birthNum[i];
        }
        else if (i == 2 || i == 3) {
            month += birthNum[i];
        }
        else {
            year += birthNum[i];
        }
    }

    if (type == "month") {
        return month;
    }
    else {
        fullDate = day + "." + month + "." + year; 
        return fullDate;
    }
}

std::string checkGender(std::string month) {
    int monthInt = std::stoi(month);

    if (monthInt >= 51 && monthInt <= 62) {
        return "Female";
    }
    else {
        return "Male";
    }
}