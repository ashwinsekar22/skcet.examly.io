#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int l = str.length();

  for (int i = 0; i < l; i++)
  {
    if (isupper(str[i]))
      str[i] = tolower(str[i]);
    else
      str[i] = toupper(str[i]);
  }

  cout << str;
}
