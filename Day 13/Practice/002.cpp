#include <iostream>
using namespace std;

class Parent {
public:
    void add(int n, int m) {
        cout << n + m << endl;
    }
};

class Parent2 {
public:
    void sub(int n, int m) {
        cout << n - m << endl;
    }
};

class Child : public Parent, public Parent2 {
public:
    void mul(int n, int m) {
        cout << n * m << endl;
    }
};


int main() {
    int x, y;
    cin >> x >> y;

    Child ch;
    ch.add(x, y);
    ch.sub(x, y);
    ch.mul(x, y);
}