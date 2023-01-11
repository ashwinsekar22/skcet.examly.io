#include <iostream>
using namespace std;

union Book {
    char name[100];
    int price;
};

int main() {
    union Book b;

    cin >> b.name;
    cout << b.name;

    cin >> b.price;
    cout << ' ' << b.price;
}