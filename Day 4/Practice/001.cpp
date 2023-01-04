/*
1. Program to print the following pattern

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int k = 1;

  for (int i = 1; i <= num; i++) {
    for (int j = 0; j < i; j++) {
      cout << k++ << ' ';
    }
    cout << endl;
  }
}
