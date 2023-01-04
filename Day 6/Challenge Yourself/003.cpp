#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int row, col, temp;
    int *num = &temp;
    cin >> row >> col;

    int sum = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> *num;
            sum += *num * *num;
        }
    }

    cout << trunc(sqrt(sum));
}