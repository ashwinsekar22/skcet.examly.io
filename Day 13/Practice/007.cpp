#include <iostream>
using namespace std;

class Vehicle {
public:
    float d, t;
    Vehicle() {
        cin >> d >> t;
    }
};

class Car : public Vehicle {
public:
    void calculate() {
        float speed = d / t;
        cout << "Speed of car: " << speed << " km/hr";
    }
};

int main() {
    Car car;
    car.calculate();
}