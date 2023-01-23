#include <iostream>
using namespace std;


int main() {
    int dividend, divisor;
    cin >> dividend >> divisor;

    try {
        if (divisor == 0) {
            throw string("Attempted to divide by zero.");
        }

        cout << dividend / divisor;
    }

    catch (string err) {
        cout << err;
    }
}