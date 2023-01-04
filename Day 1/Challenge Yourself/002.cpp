/*
  2. Write a program to calculate the simple interest.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float amount, rate, period;
  cin >> amount >> rate >> period;

  float interest = amount * rate * period;
  cout << fixed << setprecision(2) << interest / 100;
}