/*
  3. Write a program that takes the number N and fnds the sum of odd and even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int sumOfOdd = 0;
  int sumOfEven = 0;

  for (int i = 1; i <= num; i++) {
    if (i % 2 == 0)
      sumOfEven += i;
    else
      sumOfOdd += i;
  }

  cout << sumOfOdd << ' ' << sumOfEven;
}
