#include <iostream>

const int ARRAY_SIZE = 5;

int main() {
    int arr1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int arr2[ARRAY_SIZE] = {6, 7, 8, 9, 10};
    int arr3[ARRAY_SIZE] = {11, 12, 13, 14, 15};

    int mergedArr[3 * ARRAY_SIZE];


    for (int i = 0; i < ARRAY_SIZE; ++i) {
        mergedArr[i] = arr1[i];
        mergedArr[i + ARRAY_SIZE] = arr2[i];
        mergedArr[i + 2 * ARRAY_SIZE] = arr3[i];
    }


    std::cout << "Merged Array: ";
    for (int i = 0; i < 3 * ARRAY_SIZE; ++i) {
        std::cout << mergedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


