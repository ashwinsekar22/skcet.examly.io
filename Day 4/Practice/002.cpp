/*
2. Program to print the following pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}