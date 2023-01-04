/*
  9. Write a program to generate the frst 'n' terms of the following series 1, 2, 3, 6, 9, 18, 27,...
*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int p1 = 1, p2 = 2;
  bool isFirst = true;

  while (num--) {
    if (isFirst) {
      cout << p1 << ' ';
      p1 = p1 * 3;
    }

    else {
      cout << p2 << ' ';
      p2 = p2 * 3;
    }

    isFirst = !isFirst;
  }
}