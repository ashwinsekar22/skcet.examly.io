#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin >> size;

  string str;
  vector<string> arr;

  for (int i = 0; i < size; i++) {
    cin >> str;
    arr.push_back(str);
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < size; i++) {
    cout << i+1 << ' ' << arr[i] << '\n';
  }
}