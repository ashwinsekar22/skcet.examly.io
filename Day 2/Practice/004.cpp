#include <iostream>
using namespace std;

int main() {
    float p1, p2, discountPercent;
    cin >> p1 >> p2 >> discountPercent;

    float totalAmount = p1 + p2;
    float amountSaved = totalAmount * discountPercent / 100;
    float discountPrice = totalAmount - amountSaved;
    
    cout << totalAmount << '\n';
    cout << discountPrice << '\n';
    cout << amountSaved;
}