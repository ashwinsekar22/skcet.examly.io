/*
1. Write a program to print the diamond pattern using a star.

Input:
5

Output:
    *
   ***
  *****
 *******
*********
 *******
  *****
  ***
   *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int size;
  cin >> size;

  size = size * 2 - 1;
  int mid = size/2 + 1;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i + mid; j++) {
      if (j+1 >= mid - i && j + mid > i) {
        if (j+1 < size + mid - i)
          cout << '*';
      }

      else cout << ' ';
    }

    cout << endl;
  }
}
