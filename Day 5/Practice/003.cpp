#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, temp;
  cin >> num;

  int max = 0;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      cin >> temp;

      if (temp != 20 && max < temp) {
        max = temp;
      }
    }
  }

  cout << max;

  return 0;
}