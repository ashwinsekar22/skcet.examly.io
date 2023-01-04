#include <iostream>
using namespace std;

int main() {
  int num;

  cin >> num;
  cout << num << endl;

  int count = 0;

  while (num != 1 && ++count) {
    if (num % 2 == 0)
      num = num / 2;
    else
      num = 3 * num + 1;

    cout << num << endl;
  }

  cout << count;
}