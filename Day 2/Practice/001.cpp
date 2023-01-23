#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float PI = 3.14;
    int s;
    cin >> s;
    
    int l, b;
    cin >> l >> b;
    
    float r;
    cin >> r;
    
    cout << s * s << endl;
    cout << l * b << endl;
    cout << fixed << setprecision(2) << PI * (r * r);

}