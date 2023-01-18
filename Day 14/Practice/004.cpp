#include <iostream>
#include <iomanip>
using namespace std;

// Create two methods that add two numbers of different type like integer and floats
// Methods <===> Class

class MyClass {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    int a, b;
    float c, d;
    MyClass m;

    cin >> a >> b >> c >> d;

    cout << fixed << setprecision(2);
    cout << "Integer:" << m.add(a, b) << endl;
    cout << "Float:" << m.add(c, d);
}