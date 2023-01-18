#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Icecream {
public:

    void Quantity(int r, int h) {
        double volume = 0.33 * M_PI * r * r * h;
        volume *= 100;
        cout << volume/100;
    }

    void Quantity(int r) {
        double volume = r * r * r;
        cout << volume;
    }
};

int main() {
    cout << fixed << setprecision(2);

    int n, r, h;
    cin >> n;
    
    Icecream i;

    if (n == 1) {
        cin >> r;
        i.Quantity(r);
    }

    else if (n == 2) {
        cin >> r >> h;
        i.Quantity(r, h);
    }
}