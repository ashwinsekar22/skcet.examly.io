#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char name[100];
  cin >> name;

  for (char *i = name; *i; i++) {
    if (*i == 'a')
      cout << "*";
    else
      cout << *i;
  }
}
