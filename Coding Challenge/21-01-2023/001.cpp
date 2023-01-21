#include <iostream>
using namespace std;

class Overloading {
public:
    int fun1(int num1,int num2) {
        return num1 + num2;
    }

    int fun1(int num1,int num2, int num3) {
        return num1 * num2 * num3;
    }
};

int main() {
    int size, a, b, c;
    cin >> size;

    Overloading o;

    if (size == 2) {
        cin >> a >> b;
        cout << o.fun1(a, b);
    }

    else if (size == 3) {
        cin >> a >> b >> c;
        cout << o.fun1(a, b, c);
    }

    else {
        cout << "Invalid Input";
    }
}
