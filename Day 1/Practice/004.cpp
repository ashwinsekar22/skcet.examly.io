/*
  4. Write a program that accepts a char, int, and float as input and prints the same.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char ch;
  int n;
  float f;

  // Taking Input
  cin >> ch >> n >> f;

  cout << ch << ' ';
  cout << n << ' ';
  cout << fixed << setprecision(2) << f;
}