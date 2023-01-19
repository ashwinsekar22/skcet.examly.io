#include <iostream>
using namespace std;

class Calculations {
public:
    virtual double amount() = 0;
    virtual double Time() = 0;
    virtual void display() = 0;
};

class Scooty : Calculations {
public:
    int distance;
    int speed = 40;
    int price = 100;
    double discount = 0.05; // 5%

    Scooty(int d) {
        distance = d;
    }

    double amount() {
        double total_amount = price * distance;
        return total_amount - total_amount * discount;
    }

    double Time() {
        return (double) distance / speed;
    }

    void display() {
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

class Bike : Calculations {
public:
    int distance;
    int speed = 60;
    int price = 150;
    double discount = 0.10; // 10%

    Bike(int d) {
        distance = d;
    }

    double amount() {
        double total_amount = price * distance;
        return total_amount - total_amount * discount;
    }

    double Time() {
        return (double) distance / speed;
    }

    void display() {
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

class Car : Calculations {
public:
    int distance;
    int speed = 80;
    int price = 200;
    double discount = 0.20; // 20%;

    Car(int d) {
        distance = d;
    }

    double amount() {
        double total_amount = price * distance;
        return total_amount - total_amount * discount;
    }

    double Time() {
        return (double) distance / speed;
    }

    void display() {
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

int main() {
    int distance;
    cin >> distance;

    Scooty s(distance);
    Bike b(distance);
    Car c(distance);
    
    cout << "Scooty" << endl;
    s.display();
    cout << "Bike" << endl;
    b.display();
    cout << "Car" << endl;
    c.display();
}