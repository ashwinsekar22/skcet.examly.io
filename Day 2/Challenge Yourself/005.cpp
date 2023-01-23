#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    
    float locationX = (float) (a1 + a2 + a3) / 3;
    float locationY = (float) (b1 + b2 + b3) / 3;
    
    cout << locationX << '\n' << locationY;
}