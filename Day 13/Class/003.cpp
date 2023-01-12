#include <iostream>
using namespace std;

class Parent {
public:
    int n1, n2;

    void read() {
        cin >> n1 >> n2;
    }

    void add() {
        cout << n1 + n2 << endl;
    }
};

class Child1 : public Parent {
public:
    void sub() {
        cout << n1 - n2 << endl;
    }
};

class Child2 : public Child1 {
public:
    void mul() {
        cout << n1 * n2 << endl;
    }
};

int main() {
    Child2 child;
    child.read();
    child.add();
    child.sub();
    child.mul();
}