#include <iostream>
#include <unordered_set>

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }

    std::unordered_set<int> uniqueElements;

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        int element;
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> element;


        if (uniqueElements.insert(element).second) {

            std::cout << "Unique Element: " << element << std::endl;
        }
    }

    return 0;
}


