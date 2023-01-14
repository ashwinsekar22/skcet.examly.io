#include <iostream>
using namespace std;

// Grand Parent Class
class Hospital {
public:
    Hospital() {
        cout << "Hospital constructor executed" << endl;
    }
};

// Parent Class
class Doctor : public Hospital {
public:
    Doctor() {
        cout << "Doctor constructor executed" << endl;
    }
};

// Child Class
class Surgeon : public Doctor {
public:
    Surgeon() {
        cout << "Surgeon constructor executed" << endl;
    }
};

int main() {
    cout << "Multilevel Constructor Execution" << endl;
    Surgeon surgeon;
}