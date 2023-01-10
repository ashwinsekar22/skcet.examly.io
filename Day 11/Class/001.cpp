#include <iostream>
using namespace std;

class Wall {
private:
    double _length, _height;

public:
    Wall(double length, double height) {
        _length = length;
        _height = height;
    }

    double calculateArea() {
        return _length * _height;
    }
};

int main() {
    double l1, l2, b1, b2;
    cin >> l1 >> b1 >> l2 >> b2;

    Wall w1(l1, b1), w2(l2, b2);

    cout << "Area of Wall 1: " << w1.calculateArea() << endl;
    cout << "Area of Wall 2: " << w2.calculateArea();
}