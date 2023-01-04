/*
3. Program to print the following pattern

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7

*/


#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j <= i; j++) {
      cout << i + 1 << ' ';
    }
    cout << endl;
  }
}
