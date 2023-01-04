/*
  1. Write a program to print the sum of all even numbers between 1 and the given number
*/

#include <iostream>
using namespace std;

int main() {
  int num, sum = 0;
  cin >> num;

  for (int i = 2; i <= num; i += 2) {
    sum += i;
  }

  cout << sum;
}
