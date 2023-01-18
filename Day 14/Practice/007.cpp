#include <iostream>
using namespace std;

int fun1(int a, int b, int c) {
    return a * b * c;
}

int fun1(int a, int b) {
    return a + b;
}

int main() {
    int n, a, b, c;
    cin >> n;

    if (0 >= n || n >= 4) {
        cout << "Invalid Input";
        return 0;
    }

    if (n == 2) {
        cin >> a >> b;
        cout << fun1(a, b);
    }

    else {
        cin >> a >> b >> c;
        cout << fun1(a, b, c);
    }
}