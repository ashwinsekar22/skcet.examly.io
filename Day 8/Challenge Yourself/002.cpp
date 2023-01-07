#include <iostream>
using namespace std;

int main()
{
  string x, y;
  cin >> x >> y;

  bool isEqual = true;

  for (int i = 0; i < x.length(); i++)
  {
    if (!(x[i] == y[i] || x[i] == '?' || y[i] == '?'))
      isEqual = false;
  }

  cout << (isEqual ? "Yes" : "No");
}