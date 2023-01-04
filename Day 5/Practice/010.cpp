#include <bits/stdc++.h>
using namespace std;

int main() {
  int size, cell;
  cin >> size;

  int count = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cin >> cell;
      if (cell != 20)
        count++;
    }
  }

  cout << count;

  return 0;
}