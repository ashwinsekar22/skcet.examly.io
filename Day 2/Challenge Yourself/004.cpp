#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float diagonal;
    cin >> diagonal;
    
    float area = (float) 1 / 8 * diagonal * diagonal * (-5 + sqrt(45)) * sqrt(sqrt(20) + 5);
    cout << area;
}