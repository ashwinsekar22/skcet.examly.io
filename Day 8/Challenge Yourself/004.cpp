#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string str;
  cin >> str;

  int size = str.length();

  for (int i = 0; i < size; i++)
  {
    if (isalpha(str[i]))
      cout << str[i];
  }
}