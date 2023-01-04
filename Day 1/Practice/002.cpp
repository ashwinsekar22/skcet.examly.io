/*
  2. Write a program to multiply two floating-point numbers.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float f1, f2;

  cin >> f1 >> f2;
  cout << fixed << setprecision(2) << f1 * f2;
}
