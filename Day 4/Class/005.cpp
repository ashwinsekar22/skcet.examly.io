/*
5. Write a program to print the following pattern.

7 6 5 4 3 2 1
7 6 5 4 3 2
7 6 5 4 3
7 6 5 4
7 6 5
7 6
7
*/

#include <iostream>
using namespace std;

int main() {
  int numOfRows;
  cin >> numOfRows;

  for (int i = numOfRows; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << numOfRows - j << ' ';
    }
    cout << endl;
  }
}
