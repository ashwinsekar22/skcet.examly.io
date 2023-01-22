#include <iostream>
using namespace std;

int main() {
    int costOfItem, noOfDays;
    cin >> costOfItem >> noOfDays;

    try {
        if (noOfDays == 0) {
            throw string("Cannot divide by zero");
        }

        cout << costOfItem / noOfDays;
    }

    catch (string err) {
        cout << err;
    }
}