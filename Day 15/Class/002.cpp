#include <iostream>
#include <iomanip>
using namespace std;

class ItemType {
public:
    virtual double calculateAmount() = 0;
};

class wooden : public ItemType {
private:
    int noOfItems, cost;

public:
    wooden() {
        cin >> noOfItems >> cost;
    }

    double calculateAmount() {
        return noOfItems * cost;
    }
};

class electronics : public ItemType {
private:
    int cost;

public:
    electronics() {
        cin >> cost;
    }

    double calculateAmount() {
        return .8 * cost;
    }
};


int main() {
    int choice;
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) { // Wooden Type
        wooden w;
        cout << w.calculateAmount();
    }

    else if (choice == 2) { // Electronics Type
        electronics e;
        cout << e.calculateAmount();
    }
}