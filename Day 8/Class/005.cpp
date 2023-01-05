#include <iostream>
using namespace std;

int main() {
  char str[50];
  cin >> str;

  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }

  for (int i = len - 1; i >= 0; i--) {
    cout << str[i];
  }
}