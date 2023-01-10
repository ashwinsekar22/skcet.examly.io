#include <iostream>
using namespace std;

class Overloading {
private:
    string name, day;
    int temp;

public:
    Overloading() {
        name = "Argentina";
        day = "Yesterday";
        temp = 29;
    }

    Overloading(string name, int temp) {
        this->name = name;
        this->temp = temp;
        this->day = "Today";
    }

    Overloading(string name, string day, int temp) {
        this->name = name;
        this->day = day;
        this->temp = temp;
    }

    void display() {
        cout << name << ' ' << day << " Temperature: " << temp << "°" << endl;
    }
};

int main() {
    string name, day;
    int temp;

    Overloading o1;

    cin >> name >> temp;
    Overloading o2(name, temp);

    cin >> name >> day >> temp;
    Overloading o3(name, day, temp);

    o1.display();
    o2.display();
    o3.display();
}