/*
3. Manju wants to perform certain operations in an array to clear the coding round.

Write a program to obtain a matrix and perform the following operations:
  - Sum of diagonal elements of a matrix.
  - Sum of row elements of a two-dimensional array
  - Sum of column elements of a two-dimensional array.

*/

#include <iostream>
using namespace std;

int main() {
  // Inputs
  int row, column;
  cin >> row >> column;

  int rowSum[row];
  int columnSum[column];

  for (int i = 0; i < row; i++)
    rowSum[i] = 0;

  for (int i = 0; i < column; i++)
    columnSum[i] = 0;

  // End of Input

  int matrix[row][column];
  int sumOfDiagonals = 0;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> matrix[i][j]; // Getting the Input Matrix

      // At the same time getting the Sum of Diagonals
      if (i == j) {
        sumOfDiagonals += matrix[i][j];
      }

      // And sum of row and column
      rowSum[i] += matrix[i][j];
      columnSum[j] += matrix[i][j];
    }
  }

  cout << "The sum of\nDiagonal Elements : " << sumOfDiagonals << '\n';

  // Printing the sum of rows & sum of columns

  for (int i = 0; i < row; i++) {
    cout << "Row " << i + 1 << " : " << rowSum[i] << '\n';
  }

  for (int i = 0; i < column; i++) {
    cout << "Column " << i + 1 << " : " << columnSum[i] << '\n';
  }

  return 0;
}