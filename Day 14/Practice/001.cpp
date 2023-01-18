#include <iostream>
using namespace std;

class Parent {
public:
    int val;

    void m1() {
        cout << "From parent m1()\n";
    }

    void m2(int num) {
        cout << num << endl;
    }
};

class Child : public Parent {
public:
    void m1() {
        cout << "From child m1()\n";
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Parent p;
    Child ch;

    p.m1();
    p.m2(n1);

    ch.m1();
    ch.m2(n2);
}