#include <iostream>
using namespace std;

struct Item {
    string name, brand;
    int code, quantity, price;

    Item() {
        cin >> code >> brand >> name >> quantity >> price;
    }

    friend void Message(Item &item);
};

void Message(Item &item) {
    if (item.quantity * item.price >  1000) {
        cout << item.name << " costs more than 1000" << endl;
    }
}

void Voucher(int bill) {
    if (bill > 10'000)
        cout << "You have won a voucher of Rs.200";
    else 
        cout << "No voucher";
}

int main() {
    int n;
    cin >> n;

    int amount = 0;

    while (n--) {
        Item item;
        Message(item);
        amount += item.quantity * item.price;
    }

    cout << amount << endl;
    Voucher(amount);
}