#include <iostream>
using namespace std;

int main() {
    int var1, var2;
    int *n1 = &var1;
    int *n2 = &var2;

    cin >> *n1 >> *n2;
    cout << *n1 << ' ' << *n2 << ' ' << *n1 % *n2;
}