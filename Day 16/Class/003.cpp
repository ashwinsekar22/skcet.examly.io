#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    try {
        switch(input) {
            case 1: throw 1;
            case 2: throw 'a';
            case 3: throw double(1);
        }
    }

    catch (int err) {
        cout << "Integer exception caught.";
    }

    catch (char err) {
        cout << "Character exception caught.";
    }

    catch (double err) {
        cout << "Double exception caught.";
    }
}