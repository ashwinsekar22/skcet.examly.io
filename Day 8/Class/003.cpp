#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  if (s1.length() != s2.length()) {
    cout << "No";
    return 0;
  }

  bool isEqual = true;

  for (int i = 0; i < s1.length(); i++) {
    if (!(s1[i] == s2[i] || s1[i] == '?' || s2[i] == '?'))
      isEqual = false;
  }

  cout << (isEqual ? "Yes" : "No");
}