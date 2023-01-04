/*
  Question 6:
*/

#include <iostream>
#include <unordered_map>
using namespace std;

bool isUnique(int num) {
  unordered_map<int,int> mp;

  while (num) {
    int digit = num % 10;
    num /= 10;

    if (mp.count(digit) == 0) mp[digit] = 1;
    else return false;
  }

  return true;
}

int main() {
  int rangeFrom, rangeTo;
  cin >> rangeFrom >> rangeTo;

  for (int i = rangeFrom; i <= rangeTo; i++) {
    if (isUnique(i)) cout << i << ' ';
  }
}