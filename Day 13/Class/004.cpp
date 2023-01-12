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

class Child : public Parent {
public:
    void sub() {
        cout << n1 - n2 << endl;
    }
};

int main() {
    Child child;
    child.read();
    child.add();
    child.sub();
}