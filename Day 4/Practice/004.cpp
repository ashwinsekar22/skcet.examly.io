/*
  Question 4:
*/

#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;

  if (row % 2 == 0)
  {
    cout << "Enter ODD number of rows";
    return 0;
  }

  int mid = (row / 2 + 1);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j <= row - i + 1)
        cout << j * i << ' ';
    }
    cout << endl;
  }
}
