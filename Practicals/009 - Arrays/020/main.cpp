#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp != 20) sum += temp;
        }
    }

    cout << sum;

    return 0;
}