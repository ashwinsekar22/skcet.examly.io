/*
  3. Write a program to convert Celsius to Fahrenheit formula, F = 1.8 C + 32
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int celsius;
  cin >> celsius;

  float fahrenheit = ((float) celsius * 9 / 5) + 32;
  cout << fixed << setprecision(2) << fahrenheit;
}
