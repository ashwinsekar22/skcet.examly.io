#include <iostream>
using namespace std;

int main() {
    // Inputs for first expression
    int a, b, c;
    cin >> a >> b >> c;

    // Inputs for second expression
    int u, v;
    cin >> u >> v;

    // Input for third expression
    int i, j, k;
    cin >> i >> j >> k;
    
    int x = a + b * 5 / 4 + c % 3 * 5;
    int y = u > v ? u : v;
    int z = ++i && ++j && ++k;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z;
}