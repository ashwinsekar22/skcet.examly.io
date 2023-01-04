#include <bits/stdc++.h>
using namespace std;


int main() {
  int noOfRubles, m1, m2, m3;
  cin >> noOfRubles >> m1 >> m2 >> m3;

  int count = 0;

  while (noOfRubles >= 0) {
    if (m1 % 25  == 0) noOfRubles += 20;
    if (m1 % 120 == 0) noOfRubles += 80;
    if (m1 % 12  == 0) noOfRubles += 8;

    m1++, m2++, m3++, count++;
    noOfRubles -= 3;
  }

  cout << count;

  return 0;
}