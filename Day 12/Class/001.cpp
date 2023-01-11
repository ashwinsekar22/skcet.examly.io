#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    friend void calcArea(Rectangle &r);
};

void calcArea(Rectangle &r) {
    cout << r.length * r.breadth;
}

int main() {
    int l, b;
    cin >> l >> b;

    Rectangle rect(l, b);
    calcArea(rect);
}