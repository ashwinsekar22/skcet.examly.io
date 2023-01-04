#include <bits/stdc++.h>
using namespace std;

int main()
{
  int s, N;
  cin >> s >> N;

  int streak = 0;
  int count = 0;

  for (int i = 2, d = 1; i <= N; i++, d++) {
    if (i % d == 0) {
      streak++;
    }

    else {
      d = streak = 1;
    }

    if (streak == s) {
      count++;
    }
  }

  cout << count;

  return 0;
}