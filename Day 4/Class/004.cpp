/*
  4. Fibonacci Series using while loop
*/

#include <iostream>
using namespace std;

int main() {
  int num, temp;
  cin >> num;

  if (num >= 1) cout << "0 ";

  int prev = 0;
  int curr = 1;

  while (--num) {
    cout << curr << ' ';
    temp = curr;
    curr = prev + curr;
    prev = temp;
  }
}
