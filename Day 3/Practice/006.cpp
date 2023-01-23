#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double det = b*b - 4*a*c;

    if (det >= 0) {
        double xPlus  = (-b + sqrt(det)) / (2 * a);
        double xMinus = (-b - sqrt(det)) / (2 * a);
        cout << "Root1 = " << fixed << setprecision(2) << xPlus << endl;
        cout << "Root2 = " << fixed << setprecision(2) << xMinus;
    } else {
        cout << "Root1 = " << fixed << setprecision(2) << -b/(2*a) << "+" << sqrt(abs(det))/(2*a) << "i\n";
        cout << "Root2 = " << fixed << setprecision(2) << -b/(2*a) << "-" << sqrt(abs(det))/(2*a) << "i";
    }
}