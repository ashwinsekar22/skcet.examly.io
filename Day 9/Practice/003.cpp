#include <iostream>
using namespace std;

int reverseInt(int num) {
  int rev = 0;

  while (num) {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  return rev;
}

int main() {
  int num;
  cin >> num;
  cout << reverseInt(num);
}