#include <iostream>
#include <cmath>
using namespace std;

class Base {
public:
    virtual void print(int x) = 0;
};

class Derived : public Base {
public:
    void print(int x) {
        int sq =  x * x;
        int cb = sq * x;
        cout << cb + pow(-1, x) * sq;
    }
};

int main() {
    int n;
    cin >> n;

    Derived d;
    d.print(n);
}