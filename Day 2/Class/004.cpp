#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float initial, final;
    cin  >> initial >> final;
    
    float milesTraveled = final - initial;
    float remuneration  = round(milesTraveled * 25);
    
    cout << fixed << setprecision(2) << milesTraveled << ' ' << remuneration;
}