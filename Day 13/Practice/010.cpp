#include <iostream>

using namespace std;


class A {
public:
    int noOfTimesCalled = 0;
    int multiplier = 2;

    void fun(int &a) {
        a *= multiplier;
        noOfTimesCalled++;
    }
};

class B : public A {
public:
    B() {
        multiplier = 3;
    }
};

class C : public A {
public:
    C() {
        multiplier = 5;
    }
};

class D {
public:
    int val = 1;
    int new_val;

    A a; B b; C c;

    D(int val) {
        new_val = val;
    }

    // implement the function update_val which sets D's val to new_val
    // by manipulating the value by only calling the func defined in classes A, B and C.
    void update_val() {
        int t = new_val;

        while (t % 2 == 0) {
            a.fun(val);
            t /= 2;
        }

        while (t % 3 == 0) {
            b.fun(val);
            t /= 3;
        }

        while (t % 5 == 0) {
            c.fun(val);
            t /= 5;
        }
    }

    void display() {
        cout << "Value = " << val << endl;
        cout << "A's func called " << a.noOfTimesCalled << " times " << endl;
        cout << "B's func called " << b.noOfTimesCalled << " times" << endl;
        cout << "C's func called " << c.noOfTimesCalled << " times";
    }
};

int main() {
    int num;
    cin >> num;

    D d(num);
    d.update_val();
    d.display();
}