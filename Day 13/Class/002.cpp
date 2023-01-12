#include <iostream>
using namespace std;

class Bicycle {
public:
    int noOfGears;
    int speed;

    void readC() {
        cin >> noOfGears >> speed;
    }
};

class MountainBike : public Bicycle {
public:
    int seatHeight;

    void read() {
        readC();
        cin >> seatHeight;
    }

    void print() {
        cout << noOfGears << ' ' << speed << '\n' << seatHeight;
    }
};

int main() {
    MountainBike mb;
    mb.read();
    mb.print();
}