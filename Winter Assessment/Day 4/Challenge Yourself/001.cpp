#include <iostream>
#include <cmath>
using namespace std;

/*

Input 5;
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

Input 4;
   *
  ***
 *****
*******
 *****
  ***
   *

*/

int main()
{
  int size;
  cin >> size;

  size = size * 2 - 1;
  int mid = size / 2 + 1;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < i + mid; j++)
    { // Cutting NE
      // if (
      //     j + 1 < size + mid - i && // Cutting SE
      //     j + 1 >= mid - i && // Cutting NW
      //     j + mid > i // Cutting SW
      // )
      //   cout << '*';
      // else
      //   cout << ' ';

      cout << ((j + 1 < size + mid - i && j + 1 >= mid - i && j + mid > i) ? '*' : ' ');
    }

    cout << endl;
  }

  return 0;
}