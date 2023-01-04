#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, temp;
  cin >> n;

  int arr[] = {0,0,0};
  int max = 0;
  int num = 1;

  while (n--) {
    cin >> temp;
    arr[temp - 1]++;

    if (max < arr[temp - 1]) {
      max = arr[temp - 1];
      num = temp;
    }
  }

  cout << num;

  return 0;
}