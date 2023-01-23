#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3, n1, n2, n3;
    cin >> c1 >> n1 >> c2 >> n2 >> c3 >> n3;
    
    cout << c1 << ' ' << n1 << endl;
    cout << c2 << ' ' << n2 << endl;
    cout << c3 << ' ' << n3 << endl;

    if (c1 == c2 && c2 == c3 && n1 == n2 && n2 == n3)
        cout << "Double Discount";
    else if ((c1 == c2 && c2 == c3) || (n1 == n2 && n2 == n3))
        cout << "Discount";
    else 
        cout << "No Discount";
}