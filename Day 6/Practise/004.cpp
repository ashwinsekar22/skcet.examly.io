#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cin >> size1;

    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
        cout << arr1[i] << ' ';
    }

    cin >> size2;

    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
        cout << arr2[i] << ' ';
    }
}