
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num;
  cin >> num;

  float mid = round(num / 2.);

  for (int i = 0; i < num - 1; i++)
  {
    for (int j = 0; j < 2 * num - 1; j++)
    {
      if (i + j + 1 == num || j - (num / 2 - 1) == mid + i)
        cout << '*';
      else
        cout << ' ';

      if (j - (num / 2 - 1) == mid + i)
        break;
    }
    cout << endl;
  }

  for (int i = 0; i < 2 * num - 1; i++)
  {
    cout << '*';
  }
}
