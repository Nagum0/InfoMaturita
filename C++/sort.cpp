#include <iostream>

/* Variables */
int array[] = {1, 5, 7, 9, 2, 5};
int arrSize = sizeof(array) / sizeof(array[0]);

/* Function declarations */
void sort(int argArray[], int arrSize);

/* Main function */
int main() {
    sort(array, arrSize);

    for (int element : array) {
        std::cout << element << " ";
    }

    return 0;
}

/* Functions */
void sort(int argArray[], int arrSize) {
    int temp;

    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (argArray[j] > argArray[j + 1]) {
                temp = argArray[j];
                argArray[j] = argArray[j + 1];
                argArray[j + 1] = temp;
            }
        }
    }
}