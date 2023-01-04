#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> *(arr + i);
        if (cin.fail()) {
            cout << "Invalid";
            return 0;
        }
    }

    for (int i = 4; i >= 0; i--) {
        cout << *(arr+i) << ' ';
    }
}