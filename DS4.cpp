#include <iostream>
using namespace std;

int main() {
    int arr[5], max, min, i;

    cout << "Enter elements of array: ";
    for (i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Array is: ";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";

    max = arr[0];
    min = arr[0];

    for (i = 0; i < 5; i++) {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    cout << "\nMaximum element of array: " << max << endl;
    cout << "Minimum element of array: " << min << endl;

    return 0;
}

