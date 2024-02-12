#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int size, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter the position to delete (0-based index): ";
    cin >> position;

    if (position >= 0 && position < size) {
        for (int i = position; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;

        cout << "Array after deletion: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Invalid position." << endl;
    }

    return 0;
}
