/*
  2. Write a program that accepts a char, int, and float as input and prints the same.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char ch;
  int i;
  float f;

  cin >> ch >> i >> f;
  cout << ch << ' ' << i << ' ' << fixed << setprecision(2) << f;
}
