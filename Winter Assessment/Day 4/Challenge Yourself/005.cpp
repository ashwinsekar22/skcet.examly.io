#include <iostream>
using namespace std;

int main() {

  int num;
  cin >> num;

  int k = 0;
  int adder = 2;

  for (int i = 0; i < num; i++) {
    if (k && i % 2) adder += 4;
    cout << k << ' ';
    k += adder;
  }

  return 0;
}