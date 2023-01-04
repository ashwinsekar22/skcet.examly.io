#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int k = 1;

  for (int i = 1; i <= num; i++) {
    if (i % 2) {
      cout << k;
      for (int j = 1; j < i; j++)
        cout << '*' << ++k;
    }

    else {
      k += i;
      int temp = k++;
      cout << temp;

      for (int j = i; j > 1; j--)
        cout << '*' << --temp;
    }

    cout << endl;
  }

  return 0;
}