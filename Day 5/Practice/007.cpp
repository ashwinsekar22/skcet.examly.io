#include <bits/stdc++.h>
using namespace std;

int main() {
  int row, column, age, x;
  cin >> row >> column;

  float arr[row];

  for (int i = 0; i < row; i++) {
    int ageSum = 0;

    for (int j = 0; j < column; j++) {
      cin >> age;
      ageSum += age;
    }

    float avgAge = (float) ageSum / column;
    arr[i] = avgAge;
  }

  int count = 0;
  cin >> x;

  for (int i = 0; i < row; i++) {
    if (arr[i] > x)
      count++;
  }

  cout << count;

  return 0;
}
