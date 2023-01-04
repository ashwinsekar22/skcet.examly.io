/*
1. Write a program to fnd the quotient and remainder of two variables using pointers
*/

#include <iostream>
using namespace std;

int main() {
  int dividend, divisor;
  int *ptr1 = &dividend;
  int *ptr2 = &divisor;

  cin >> *ptr1 >> *ptr2;
  cout << *ptr1 / *ptr2 << ' ';
  cout << *ptr1 % *ptr2;
}