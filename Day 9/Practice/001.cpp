#include <iostream>
using namespace std;

int perimeter(const int l, const int b) {
  return 2 * (l + b);
}

int main() {
  int l, b;
  cin >> l >> b;
  cout << perimeter(l, b);
}