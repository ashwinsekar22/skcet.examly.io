#include <iostream>
using namespace std;

class Rectangle {
protected:
    int width, height;

public:
    void display() {
        cout << width << ' ' << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }
    
    void display() {
        Rectangle::display();
        cout << width * height;
    }
};

int main() {
    RectangleArea r;
    r.read_input();
    r.display();
}