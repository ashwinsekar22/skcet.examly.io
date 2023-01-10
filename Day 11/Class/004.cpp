#include <iostream>
using namespace std;

class Box {
public:
    double width, height, depth;

    Box() {
        width = depth = height = 0;
    }

    Box(double w, double h, double d) {
        width = w;
        depth = d;
        height = h;
    }

    Box(double len) {
        width = depth = height = len;
    }
    
    double volume() {
        return width * height * depth;
    }
};

int main() {
    double w, h, d, len;
    cin >> w >> h >> d >> len;    

    Box b1, b2(w,h,d), b3(len);

    cout << "Volume of mybox1 is " << b1.volume() << endl;
    cout << "Volume of mybox2 is " << b2.volume() << endl;
    cout << "Volume of mycube is " << b3.volume();
}