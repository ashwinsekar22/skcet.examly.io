#include <iostream>
using namespace std;

void distance(int *timeTaken, int *speed) {
    cout << *timeTaken * *speed;
}

int main() {
    int a, b;
    cin >> a >> b;
    distance(&a, &b);
}