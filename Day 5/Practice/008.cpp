#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin >> size;

  int li[size], ri[size];

  for (int i = 0; i < size; i++)
    cin >> li[i];

  for (int i = 0; i < size; i++)
    cin >> ri[i];

  int max = 0;

  for (int i = 0; i < size; i++) {
    if (max < li[i] * ri[i])
      max = li[i] * ri[i];
  }

  int l = li[0], r = ri[0];
  int index = 1;

  for (int i = 0; i < size; i++) {
    if (max == li[i] * ri[i]) {
      if (r < ri[i] || l > li[i]) {
        r = ri[i];
        l = li[i];
        index = i + 1;
      }
    }
  }

  cout << index;

  return 0;
}