#include <iostream>
using namespace std;

int main() {
    int numOfRows;
    cin >> numOfRows;

    for (int i = numOfRows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << numOfRows - j << ' ';
        }
        cout << endl;
    }
}