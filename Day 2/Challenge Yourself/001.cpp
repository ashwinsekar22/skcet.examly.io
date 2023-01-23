#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cin >> length >> breadth;

    int perimeter = 2 * (length + breadth);
    int quantity  = length * breadth;
    
    cout << perimeter << '\n' << quantity;
}