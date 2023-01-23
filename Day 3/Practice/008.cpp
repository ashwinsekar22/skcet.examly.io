#include <iostream>
using namespace std;

int main() {
    int hurl, spin, speed;
    cin >> hurl >> spin >> speed;

    if (hurl > 50 && spin > 60 && speed > 100) 
        cout << 10;
    else if (hurl > 50 && spin > 60)
        cout << 9;
    else if (spin > 60 && speed > 100)
        cout << 8;
    else if (hurl > 50 && speed > 100)
        cout << 7;
    else if (hurl > 50 || spin > 60 || speed > 100)
        cout << 6;
    else
        cout << 5;

    switch (speed) {
        case 0:
        break;
    }
}