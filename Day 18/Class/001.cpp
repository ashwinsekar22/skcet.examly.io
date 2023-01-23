#include <iostream>
using namespace std;

auto sum = [](int x, int y) {
    return x + y;
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << sum(n1, n2);
}