/*
1. Develop a C++ program to input a number and fnd the sum of even digits
using pointer variables.
*/

#include <iostream>
using namespace std;

int main() {
  int i, n, s, d, *x, *nm, *sum, *dg;

  x = &i;
  nm = &n;
  sum = &s;
  dg = &d;

  *sum = 0;

  cin >> *nm;

  /* Answer Starts from here */

  while (*nm != 0) {
    int digit = *nm % 10;

    if (digit % 2 == 0)
      *sum += digit;

    *nm /= 10;
  }

  /* Answer Ends here */


  cout << "Sum of even digits = " << *sum;

  return 0;
}
