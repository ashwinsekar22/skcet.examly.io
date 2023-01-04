/*
  3. Write a program to compare two strings using pointers.
*/

#include <iostream>
using namespace std;

int main() {
  string a, b;
  string *str1 = &a;
  string *str2 = &b;

  cin >> *str1 >> *str2;

  if (*str1 == *str2) {
    cout << "Both strings are same.";
  }

  else {
    cout << "Entered strings are not equal.";
  }
}
