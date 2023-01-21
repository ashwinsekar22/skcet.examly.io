#include <iostream>
using namespace std;

class Bicycle {
public:
    int noOfGears, speed;

    void input(int gear, int speed) {
        this->noOfGears = gear;
        this->speed = speed;
    }
};

class MountainBike : public Bicycle {
public:
    int startHeight;

    void input(int gear,int speed,int startHeight) {
        this->noOfGears = gear;
        this->speed = speed;
        this->startHeight = startHeight;
    }

    void display() {
        cout << noOfGears << ' ' << speed << '\n' << startHeight;
    }
};

int main() {
    int noOfGears, speed, startHeight;
    cin >> noOfGears >> speed >> startHeight;

    MountainBike mb;
    mb.input(noOfGears, speed, startHeight);
    mb.display();
}