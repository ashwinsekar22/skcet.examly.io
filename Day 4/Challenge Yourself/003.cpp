/*
3. Decode the logic and print the pattern that corresponds to the given input.

Input:
 6

Output:
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16
*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int k = 1;

  for (int i = 1; i <= num; i++) {
    // Print Forwards
    if (i % 2) {
      cout << k;
      for (int j = 1; j < i; j++)
        cout << '*' << ++k;
    }

    // Print Backwards
    else {
      k += i;
      int temp = k++;
      cout << temp;
      for (int j = i; j > 1; j--)
        cout << '*' << --temp;
    }

    cout << endl;
  }
}