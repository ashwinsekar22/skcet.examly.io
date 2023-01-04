#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  bool isRichieSTurn = true;

  for (int i = 0; i < n; i++) {
    if (isRichieSTurn) a *= 2;
    else b *= 2;
  
    isRichieSTurn = i % 2;
  }

  int totalScore = a + b;
  cout << totalScore;

  return 0;
}