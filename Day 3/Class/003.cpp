#include <iostream>
using namespace std;

int main() {
    char gender;
    cin >> gender;

    switch(tolower(gender)) {
        case 'm':
            cout << "Male";
            break;
        case 'f':
            cout << "Female";
            break;
        default:
            cout << "Invalid Input";
    }
}