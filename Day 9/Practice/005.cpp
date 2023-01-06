#include <iostream>
#include <cmath>
using namespace std;

int countWays(int x, int n, int num = 1, int sum = 0) {
  if (num > 20) return 0;

  int p = pow(num,n);
  int total = 0;

  while (p + sum < x) {
    total += countWays(x, n, num + 1, sum + p);
    num++;
    p = pow(num, n);
  }

  if (p + sum == x) total++;

  return total;
}

int main() {
  int x, n;
  cin >> x >> n;
  cout << countWays(x, n);
}
