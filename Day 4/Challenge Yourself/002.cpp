/*
2. Decode the logic and print the pattern that corresponds to the given input.

Input
5

Output
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;

  int len = 2 * size - 1;
  int mid = size / 2;

  for (int i = 0; i < len; i++) {
    int num = (i < size) ? i + 1 : len - i;
    cout << num;

    for (int j = 0; j < i; j++) {
      if (j + 1 < len - i)
        cout << '*' << num;
    }

    cout << endl;
  }
}
