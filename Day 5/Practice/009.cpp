#include <bits/stdc++.h>
using namespace std;

int main() {
  int size, cell;
  cin >> size;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cin >> cell;
      if (cell != 20 && cell > 10) {
        cout << "No";
        return 0;
      }
    }
  }

  cout << "Yes";

  return 0;
}