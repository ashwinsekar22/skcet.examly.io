#include <iostream>
using namespace std;

int main()
{
  int minutes;
  cin >> minutes;

  string prev, curr;
  cin >> prev;

  for (int i = 1; i < minutes; i++)
  {
    cin >> curr;
  
    if (curr == "cookie" && curr == prev) {
      cout << "No";
      return 0;
    }

    prev = curr;
  }

  cout << ((minutes == 1 || curr == "cookie") ? "No" : "Yes");
}