#include <iostream>
using namespace std;

class currentBill {
public:
    virtual double amount() = 0;
};

class Fan : public currentBill {
public:
    double watts, hours;

    Fan() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};

class Light : public currentBill {
public:
    double watts, hours;

    Light() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};

class TV : public currentBill {
public:
    double watts, hours;

    TV() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};


int main() {
    Fan f;
    Light l;
    TV t;

    cout << f.amount() + l.amount() + t.amount();
}