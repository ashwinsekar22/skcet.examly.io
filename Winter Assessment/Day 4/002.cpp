#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size, noOfSquares;
  cin >> size >> noOfSquares;

  int i = noOfSquares;
  int square = pow(i, 2);

  while (square > noOfSquares)
  {
    square = pow(--i, 2);
  }

  return 0;
}