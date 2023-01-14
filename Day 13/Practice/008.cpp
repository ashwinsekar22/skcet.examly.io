#include <iostream>
using namespace std;

class Shape {
public:
    int width, height;

    virtual int getArea() {
        return width * height;
    }
    
    void setWidth(int w) {
        width = w;
    }
    
    void setHeight(int h) {
        height = h;
    }
};

class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    int getArea() {
        return (width * height) / 2;
    }
};

int main() {
    int w, h;
    cin >> w >> h;

    Rectangle r;
    r.setWidth(w);
    r.setHeight(h);
    
    Triangle t;
    t.setWidth(w);
    t.setHeight(h);

    cout << "Total Rectangle area: " << r.getArea() << endl;
    cout << "Total Triangle area: " << t.getArea();
}