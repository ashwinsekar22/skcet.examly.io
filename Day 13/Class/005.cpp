#include <iostream>
#include <iomanip>
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

class Child1 : virtual public Parent {
public:
    void sub() {
        cout << n1 - n2 << endl;
    }
};

class Child2 : virtual public Parent {
public:
    void mul() {
        cout << n1 * n2 << endl;
    }
};

class Child3 : public Child1, public Child2 {
public:
    void div() {
        if (n1 % n2 == 0)
            cout << fixed << setprecision(1);

        else if (n1 / n2 == 1)
            cout << fixed << setprecision(16);

        else 
            cout << fixed << setprecision(15);

        cout << (double) n1 / n2 << endl;
    }
};


int main() {
    Child3 ch;

    ch.read();
    ch.add();
    ch.sub();
    ch.mul();
    ch.div();
}