/*
  5. Write a program to compute the quotient and remainder for integer values
*/

#include <iostream>
using namespace std;

int main() {
 int dividend, divisor;
 cin >> dividend >> divisor;

 int quotient = dividend / divisor;
 int remaind = dividend % divisor;

 cout << quotient << ' ' << remaind;
}
