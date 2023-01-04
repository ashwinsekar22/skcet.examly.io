#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr1[size], arr2[size];

    for (int i = 0; i < size; i++) {
        cin >> *(arr1 + i);
    }

    bool isSame = true;

    for (int i = 0; i < size; i++) {
        cin >> *(arr2 + i);
        isSame = isSame && *(arr1+i) == *(arr2+i);
    }

    cout << (isSame ? "yes" : "no");
}