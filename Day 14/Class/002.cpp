#include <iostream>
#include <iomanip>
using namespace std;

int calc(int t)
{
    return t * t;
}

int calc(int a, int b)
{
    return a % b;
}

float calc(float a, float b)
{
    return a / b;
}

int main()
{
    int a, b;
    float c, d;

    cin >> a >> b >> c >> d;

    cout << "Square of " << a << ": " << calc(a) << endl;
    cout << "Modulus of " << a << ", " << b << ": " << calc(a, b) << endl;
    cout << "Quotient of " << c << ", " << d << ": " << fixed << setprecision(2) << calc(c, d);
}
