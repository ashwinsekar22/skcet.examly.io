#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, age;
  cin >> n;

  int noOfMidAged = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> age;
      if (i == j && 18 <= age && age <= 60) {
        noOfMidAged++;
      }
    }
  }

  cout << noOfMidAged;

  return 0;
}