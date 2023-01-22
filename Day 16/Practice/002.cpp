#include <iostream>
using namespace std;

int main() {
    int num;

    try {
        cin >> num;

        if (cin.fail()) {
            throw string("Input mismatch Exception occured while reading the value");
        }

        cout << num;
    }

    catch (string err) {
        cout << err;
    }
}