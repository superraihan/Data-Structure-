#include <iostream>
using namespace std;

int main() {

    int a;


    cout << "Enter size: ";
    cin >> a;


    int arr[a];


    cout << "Enter values: ";
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }


    int dupli = 0;


    for (int i = 0; i < a - 1; ++i) {
        for (int j = i + 1; j < a; ++j) {

            if (arr[i] == arr[j]) {
                dupli++;
            }
        }
    }


    cout << "Total number of duplicate numbers: " << dupli << endl;

    return 0;
}
