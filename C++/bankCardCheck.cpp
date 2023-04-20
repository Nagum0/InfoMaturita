#include <iostream>
//Credit card num = 6011 0009 9013 9424

/* Variables */
std::string cardNum;
int result = 0;

/* Functions declarations */
int getDidit(const int number);
int sumOfOddDigits(const std::string cardNum);
int sumOfEvenDigits(const std::string cardNum);

/* Main function */
int main() {
    std::cout << "Enter credit card number: ";
    std::cin >> cardNum;

    result = sumOfOddDigits(cardNum) + sumOfEvenDigits(cardNum);
    
    if (result % 10 == 0){
        std::cout << "Your credit card number is valid!";
    }
    else {
        std::cout << "Your credit card number is invalid!";
    }

    return 0;
}

/* Functions */
int getDidit(const int number) {
    return number % 10 + (number / 10 % 10);   
}

int sumOfEvenDigits(const std::string cardNum) {
    int sum = 0;

    for (int i = cardNum.size(); i >= 0; i -= 2) {
        sum += getDidit((cardNum[i] - '0') * 2);
    }

    return sum;
}

int sumOfOddDigits(const std::string cardNum) {
    int sum = 0;

    for (int i = cardNum.size(); i >= 0; i -= 2) {
        sum += getDidit(cardNum[i] - '0');
    }

    return sum;
}