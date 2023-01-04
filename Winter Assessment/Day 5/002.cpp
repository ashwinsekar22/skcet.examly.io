#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cin >> num;

  int size = num * 2 - 1;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < size - i; j++) {
      if (i <= j) cout << '*';
      else cout << ' ';
      cout << ' ';
    }

    cout << '\n';
  }

  return 0;
}