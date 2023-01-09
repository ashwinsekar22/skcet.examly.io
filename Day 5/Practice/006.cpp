#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin >> size;

  int sqArr[size];

  for (int i = 0; i < size; i++) {
    cin >> sqArr[i];
  }

  int favSqSize;
  cin >> favSqSize;

  int favSqArray[favSqSize];

  for (int i = 0; i < favSqSize; i++) {
    cin >> favSqArray[i];
  }

  bool hasSequence = true;

  for (int i = 0; i < size; i++) {
    if (sqArr[i] != favSqArray[0])
      continue;

    for (int j=0, k=i; j<favSqSize && k<size; j++,k++) {
      hasSequence = (favSqSize - j) <= size - k;

      if (sqArr[k] != favSqArray[j]) {
        hasSequence = false;
        break;
      }
    }

    if (hasSequence) break;
  }

  cout << (hasSequence ? "Yes" : "No");

  return 0;
}