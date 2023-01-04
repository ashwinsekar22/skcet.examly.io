#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num;
  cin >> num;

  // Decoded logic: Pascal's Triangle
  // We've studied in class 10;

  int arr[num][num];

  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      if (j == 0 || j == i)
        arr[i][j] = 1; // First & Last Elements are 1

      else if (j <= i) // Adding the above two elements
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }
  }


  // Printing out the 2D Array
  for (int i = 0; i < num; i++) {
    for (int j = 0; j <= i; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
