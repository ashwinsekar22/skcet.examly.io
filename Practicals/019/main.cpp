#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int noOfMidAged = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (i == j && 18 <= temp && temp <= 60) {
                noOfMidAged++;
            }
        }
    }

    cout << noOfMidAged;
}