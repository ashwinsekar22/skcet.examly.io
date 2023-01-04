/*
  2. Write a program to check whether a matrix is symmetric or not using pointers.
*/

#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row >> col;

  int matrix[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> *(*(matrix + i) + j);
    }
  }

  bool isSymmetric = true;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (*(*(matrix + i) + j) != *(*(matrix + j) + i)) {
        isSymmetric = false;
      }
    }
  }

  cout << (isSymmetric ? "symmetric" : "not symmetric");
}
