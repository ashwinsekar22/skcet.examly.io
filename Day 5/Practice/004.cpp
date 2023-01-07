#include <iostream>
using namespace std;

int main()
{
  int size;
  cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++)
  {
    int count = 1;
    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j] && i != j)
      {
        count++;
      }
    }

    if (count % 2 != 0)
    {
      cout << arr[i];
      break;
    }
  }
}