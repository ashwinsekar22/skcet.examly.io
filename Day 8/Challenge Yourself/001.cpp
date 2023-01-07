#include <iostream>
using namespace std;

int main()
{
  int minutes;
  cin >> minutes;

  string arr[minutes];

  for (int i = 0; i < minutes; i++)
    cin >> arr[i];

  if (arr[minutes - 1] == "cookie")
  {
    cout << "No";
    return 0;
  }

  for (int i = 1; i < minutes; i++)
  {
    if (arr[i - 1] == "cookie" && arr[i - 1] == arr[i])
    {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}