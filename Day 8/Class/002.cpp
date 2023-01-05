#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
  
  bool isAlternative = true;

  for (int i = 1; i < str.length() - 1; i++) {
    if (str[i-1] != str[i] && str[i-1] != str[i+1]) {
      isAlternative = false;
    }
  }

  cout << (isAlternative ? "Yes" : "No");
}