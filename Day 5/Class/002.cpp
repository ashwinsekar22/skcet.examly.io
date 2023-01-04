#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;

  int *arr = new int(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i += 2) {
    if (arr[i] > arr[i + 1])
      sum += arr[i+1];
    else
      sum += arr[i];
  }

  cout << sum;

  return 0;
}