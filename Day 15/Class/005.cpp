#include <iostream>
using namespace std;

class operationsBase {
public:
    virtual void addition() = 0;
    virtual void subtraction() = 0;
    virtual void multiplication() = 0;
    virtual void division() = 0;
};

class operationsDerived : public operationsBase {
private:
    int a,b;

public:
    operationsDerived() {
        cin >> a >> b;
    }

    void addition() {
        cout << a + b << ' ';
    }

    void subtraction() {
        cout << a - b << ' ';
    }

    void multiplication() {
        cout << a * b << ' ';
    }

    void division() {
        cout << a / b;
    }
};

int main() {
    operationsDerived o;
    o.addition();
    o.subtraction();
    o.multiplication();
    o.division();
}