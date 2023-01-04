/*
  5. Write a program to generate the following series 0 2 8 14 24 34 48 62 80 98 .......
*/

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
}
