#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];


    sort(arr, arr + size);
    cout << "Array in ascending order: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


    sort(arr, arr + size, greater<int>());
    cout << "Array in descending order: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

