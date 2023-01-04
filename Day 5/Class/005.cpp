#include<iostream>
using namespace std;

int main(){
  int n, num;
  cin >> n;

  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> num;
      if (num != 20) sum += num;
    }
  }

  cout << num;

  return EXIT_SUCCESS;
}