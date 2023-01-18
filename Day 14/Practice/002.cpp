#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void move(string name) {
        cout << "Best " << name << endl;
    }
};

class Motorbike {
public:
    void move(string name) {
        cout << "Good " << name << endl;
    }
};


int main() {
    Vehicle v;
    Motorbike m;

    string name1, name2;
    cin >> name1 >> name2;

    v.move(name1);
    m.move(name2);
}