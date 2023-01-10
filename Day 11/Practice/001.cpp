#include <iostream>
#include <cmath>
using namespace std;

class Demo {
private:
    int val;

public:
    Demo(int val) {
        this->val = val;
        cout << "Inside Constructor" << endl;
    }

    void display() {
        cout << "square = " << val * val << endl;
        cout << "square root = " << sqrt(val) << endl;

        cout << "cube = " << val * val * val << endl;
        cout << "cube root = " << cbrt(val) << endl;
    }

    ~ Demo() {
        cout << "Inside Destructor" << endl;
    }
};

int main() {
    int val;
    cin >> val;

    Demo d(val);
    d.display();
}