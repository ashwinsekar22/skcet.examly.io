#include <iostream>
using namespace std;

class Parent {
public:
    int n1, n2;

    Parent(int n, int m) {
        n1 = n;
        n2 = m;
    }

    void add() {
        cout << n1 + n2 << endl;
    }
};

class Child1 : public Parent {
public:
    Child1(int n, int m) : Parent(n, m) {}

    void sub() {
        cout << n1 - n2 << endl;
    }
};

class Child2 : public Parent {
public:
    Child2(int n, int m) : Parent(n, m) {}

    void mul() {
        cout << n1 * n2 << endl;
    }
};


int main() {
    int x, y;
    cin >> x >> y;

    Child1 ch1(x, y);
    Child2 ch2(x, y);

    ch1.add();
    ch1.sub();
    ch2.mul();
}