#include <iostream>
using namespace std;

int main() {
    string name;
    int marks[3];
    cin >> name;

    try {
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
            if (0 > marks[i] || marks[i] > 100) {
                throw string("Invalid Marks");
            }
        }

        for (int i = 0; i < 3; i++) {
            cout << marks[i] << endl;
        }
    }

    catch (string err) {
        cout << err;
    }
}