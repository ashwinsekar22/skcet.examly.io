#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 0;
    }

    void get() {
        cin >> length;
    }

    friend int printVolume(Box &b);
};

int printVolume(Box &b) {
    int volume = b.length * b.length * b.length;
    return volume;
}

int main() {
    Box box;
    box.get();
    cout << printVolume(box);
}