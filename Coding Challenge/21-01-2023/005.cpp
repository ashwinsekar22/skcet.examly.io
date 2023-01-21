#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Shapes {
public:
    virtual void perimeter() = 0;
    virtual void area() = 0;
};

class Rectangle : public Shapes {
public:
    int length, breadth;

    Rectangle() {
        cin >> length >> breadth;
    }

    void perimeter() {
        cout << "Perimeter:" << 2 * (length + breadth) << endl;
    }

    void area() {
        cout << "Area:";
        cout << length * breadth << endl;
    }
};

class Square : public Shapes {
public:
    int side;

    Square() {
        cin >> side;
    }

    void perimeter() {
        cout << "Perimeter:" << 4 * side << endl;
    }

    void area() {
        cout << "Area:";
        cout << side * side << endl;
    }
};

class Triangle : public Shapes {
public:
    int a, b, c;

    Triangle() {
        cin >> a >> b >> c;
    }

    void perimeter() {
        cout << "Perimeter:" << a + b + c << endl;
    }

    void area() {
        cout << "Area:";
        double s = (a + b + c) / 2;
        cout << sqrt(s * (s-a) * (s-b) * (s-c)) << endl;
    }
};

class Circle : public Shapes {
public:
    int radius;

    Circle() {
        cin >> radius;
    }

    void perimeter() {
        cout << "Perimeter:" << 2 * M_PI * radius << endl;
    }

    void area() {
        cout << "Area:";
        cout << M_PI * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Square s;
    Triangle t;
    Circle c;

    cout << fixed << setprecision(2);

    cout << "Rectangle:" << endl;
    r.perimeter();
    r.area();

    cout << "\nSquare:" << endl;
    s.perimeter();
    s.area();

    cout << "\nTriangle:" << endl;
    t.perimeter();
    t.area();

    cout << "\nCircle:" << endl;
    c.perimeter();
    c.area();
}