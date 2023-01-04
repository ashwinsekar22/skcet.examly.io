#include <iostream>
using namespace std;

int main() {
    int num;
    int *p = &num;
    
    cin >> *p;

    if (*p % 2 == 0)
        cout << *p << " is even";
    else
        cout << *p << " is odd";
}